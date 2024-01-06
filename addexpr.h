#ifndef ADDEXPR_H
#define ADDEXPR_H

#include <ExprNode.h>


class AddExpr: public ExprNode
{

private:
    ExprNode* left;
    ExprNode* right;
public:
    AddExpr(ExprNode* left, ExprNode* right);
    ~AddExpr(){
        if(left != nullptr){
            delete left;
            left = nullptr;
        }
        if(right != nullptr){
            delete right;
            right = nullptr;
        }
    }

    QList<ExprNode*> children();
    antlrcpp::Any evaluate();
    antlrcpp::Any evaluate(QMap<QString, antlrcpp::Any> paramMap);
};

#endif // ADDEXPR_H
