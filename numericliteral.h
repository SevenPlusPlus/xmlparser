#ifndef NUMERICLITERAL_H
#define NUMERICLITERAL_H

#include "ExprNode.h"


class NumericLiteral: public ExprNode
{
private:
    long val;
public:
    NumericLiteral(long value);
    ~NumericLiteral(){

    }

    QList<ExprNode*> children();
    antlrcpp::Any evaluate();
    antlrcpp::Any evaluate(QMap<QString, antlrcpp::Any> paramMap);
};

#endif // NUMERICLITERAL_H
