#ifndef BOOLEANLITERAL_H
#define BOOLEANLITERAL_H

#include <AbstractExpr.h>
#include <ExprNode.h>


class BooleanLiteral: public AbstractExpr
{
private:
    bool value;
public:
    bool getValue(){
        return this->value;
    }

    QList<std::shared_ptr<ExprNode>> children();
    antlrcpp::Any evaluate();
    antlrcpp::Any evaluate(QMap<QString, antlrcpp::Any> paramMap);
    BooleanLiteral(bool val);

    std::string outputCode(){
        if(value){
            return "true";
        } else {
            return "false";
        }
    }

    ~BooleanLiteral(){

    };
};

#endif // BOOLEANLITERAL_H
