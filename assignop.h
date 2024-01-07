#ifndef ASSIGNOP_H
#define ASSIGNOP_H

#include "AbstractExpr.h"

#include <ExprNode.h>
#include <string>


class AssignOp: public AbstractExpr
{
private:
    std::string op;

public:
    AssignOp();
    ~AssignOp(){

    }
    QList<std::shared_ptr<ExprNode>> children();
    antlrcpp::Any evaluate();
    antlrcpp::Any evaluate(QMap<QString, antlrcpp::Any> paramMap);
};

#endif // ASSIGNOP_H
