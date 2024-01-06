#ifndef ASSIGNEXPR_H
#define ASSIGNEXPR_H

#include <ExprNode.h>


class AssignExpr: public ExprNode
{
private:
    std::shared_ptr<ExprNode> target;
    std::shared_ptr<ExprNode> right;
public:
    AssignExpr(std::shared_ptr<ExprNode> target, std::shared_ptr<ExprNode> right);
    ~AssignExpr(){
    }

    QList<std::shared_ptr<ExprNode>> children();
    antlrcpp::Any evaluate();
    antlrcpp::Any evaluate(QMap<QString, antlrcpp::Any> paramMap);
};

#endif // ASSIGNEXPR_H
