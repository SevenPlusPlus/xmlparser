#ifndef ADDEXPR_H
#define ADDEXPR_H

#include <AbstractExpr.h>
#include <ExprNode.h>


class AddExpr: public AbstractExpr
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

    std::string outputCode(){
        return left->outputCode() + " + " + right->outputCode();
    }
};

#endif // ADDEXPR_H
