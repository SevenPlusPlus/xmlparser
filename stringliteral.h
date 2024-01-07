#ifndef STRINGLITERAL_H
#define STRINGLITERAL_H

#include <AbstractExpr.h>
#include <ExprNode.h>
#include <string>


class StringLiteral: public AbstractExpr
{
private:
    std::string val;

public:
    StringLiteral(std::string value);
    ~StringLiteral(){

    }
    QList<std::shared_ptr<ExprNode>> children();
    antlrcpp::Any evaluate();
    antlrcpp::Any evaluate(QMap<QString, antlrcpp::Any> paramMap);
    std::string outputCode(){
        return val;
    }
};

#endif // STRINGLITERAL_H
