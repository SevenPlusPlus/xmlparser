#ifndef ASSIGNOP_H
#define ASSIGNOP_H

#include <ExprNode.h>
#include <string>


class AssignOp: public ExprNode
{
private:
    std::string op;

public:
    AssignOp();
    ~AssignOp(){

    }
    QList<ExprNode*> children();
    antlrcpp::Any evaluate();
    antlrcpp::Any evaluate(QMap<QString, antlrcpp::Any> paramMap);
};

#endif // ASSIGNOP_H
