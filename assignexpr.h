#ifndef ASSIGNEXPR_H
#define ASSIGNEXPR_H

#include <ExprNode.h>


class AssignExpr: public ExprNode
{
private:
    ExprNode* target;
    ExprNode* right;
public:
    AssignExpr(ExprNode* target, ExprNode* right);
    ~AssignExpr(){
        if(target != nullptr){
            delete target;
            target = nullptr;
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

#endif // ASSIGNEXPR_H
