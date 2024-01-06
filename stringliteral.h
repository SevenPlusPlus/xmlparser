#ifndef STRINGLITERAL_H
#define STRINGLITERAL_H

#include <ExprNode.h>
#include <string>


class StringLiteral: public ExprNode
{
private:
    std::string val;

public:
    StringLiteral(std::string value);
    ~StringLiteral(){

    }
    QList<ExprNode*> children();
    antlrcpp::Any evaluate();
    antlrcpp::Any evaluate(QMap<QString, antlrcpp::Any> paramMap);
};

#endif // STRINGLITERAL_H
