#include "astvisitor.h"
#include "booleanliteral.h"
#include "xmlnodeiterator.h"

#include <ANTLRInputStream.h>
#include <QCoreApplication>
#include <QLocale>
#include <QTranslator>
#include <QtXml>

#include <antlr4/ExprEngineLexer.h>
#include <antlr4/ExprEngineParser.h>

#include <__memory/shared_ptr.h>
#include <__memory/shared_ptr.h>


using namespace antlr4;

void testXml(){
    // 新建QDomDocument类对象，它代表一个XML文档
    QDomDocument doc;
    // 建立指向“my.xml”文件的QFile对象
    QFile file("my.xml");
    // 以只读方式打开
    if (!file.open(QIODevice::ReadOnly)) return ;
    // 将文件内容读到doc中
    if (!doc.setContent(&file)) {
        file.close();
        return;
    }
    // 关闭文件
    file.close();


    QStack<QDomNode> *domNodeStack = new QStack<QDomNode>();
    QDomElement root = doc.documentElement();
    if(!root.isNull()){
        QDomNode current;

        XmlNodeIterator * it = new XmlNodeIterator(root);
        for(; it->hasNext();){
            current = it->next();
            if(!current.isNull() && current.isElement()){
                //qDebug() << current.nodeName();
                QDomElement e = current.toElement();
                qDebug() << qPrintable(e.tagName());
                if(e.tagName() == "title" || e.tagName() == "author"){
                    qDebug() << "   "<< qPrintable(e.text());
                }
            }
            if(domNodeStack->isEmpty()){
                domNodeStack->push(current);
            } else {
                while(!domNodeStack->isEmpty() && domNodeStack->top() != current.parentNode()){
                    domNodeStack->pop();
                }
                domNodeStack->push(current);
            }

            QStack<QDomNode>::Iterator it = domNodeStack->begin();
            qDebug()<<"stacklist: ";
            for(; it != domNodeStack->end(); it++){
                qDebug() <<"    " << qPrintable(it->toElement().tagName()) << "  ";
            }
        }
    }
    delete domNodeStack;

}

void testAstParser(){
    std::string expr = "$$a := 2+5";

    ANTLRInputStream input(expr);
    ExprEngineLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    ExprEngineParser parser(&tokens);
    tree::ParseTree *tree = parser.assignRule();
    qDebug() <<"" << tree->toStringTree().c_str();

    AstVisitor astVisitor;
    antlrcpp::Any exprTree = astVisitor.visit(tree);
    std::shared_ptr<ExprNode> assignExpr = exprTree.as<std::shared_ptr<ExprNode>>();
    qDebug() <<"" << assignExpr->evaluate().as<long>()<<"  ";
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "xmlparser_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }

    std::shared_ptr<ExprNode> ptr(new BooleanLiteral(true));
    antlrcpp::Any anyobj = antlrcpp::Any(ptr);
    std::shared_ptr<ExprNode> sptr = anyobj.as<std::shared_ptr<ExprNode>>();
    qDebug()<<"ok"<<sptr.get()->evaluate().as<bool>();

    BooleanLiteral booleanLiteral = BooleanLiteral(true);

    NumericLiteral num = NumericLiteral(100);
    antlrcpp::Any ret = num.evaluate();
    if(ret.is<long>()){
        qDebug() <<"islong:"<< ret.as<long>()<<"";
    }
    qDebug() <<"BooleanLiteral"<<booleanLiteral.evaluate().as<bool>() <<"  ";

    testAstParser();

    return a.exec();
}
