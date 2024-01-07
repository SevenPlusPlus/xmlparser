#ifndef NUMERICLITERAL_H
#define NUMERICLITERAL_H

#include "ExprNode.h"

#include <AbstractExpr.h>


class NumericLiteral: public AbstractExpr
{
private:
    long val;
public:
    NumericLiteral(long value);
    ~NumericLiteral(){

    }

    QList<std::shared_ptr<ExprNode>> children();
    antlrcpp::Any evaluate();
    antlrcpp::Any evaluate(QMap<QString, antlrcpp::Any> paramMap);
    std::string outputCode(){
        return std::to_string(val);
    }
};

#endif // NUMERICLITERAL_H
