#ifndef ADDEXPR_H
#define ADDEXPR_H

#include <ExprNode.h>


class AddExpr: public ExprNode
{

private:
    std::shared_ptr<ExprNode> left;
    std::shared_ptr<ExprNode> right;
public:
    AddExpr(std::shared_ptr<ExprNode> left, std::shared_ptr<ExprNode> right);
    ~AddExpr(){
    }

    QList<std::shared_ptr<ExprNode>> children();
    antlrcpp::Any evaluate();
    antlrcpp::Any evaluate(QMap<QString, antlrcpp::Any> paramMap);
};

#endif // ADDEXPR_H
