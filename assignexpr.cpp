#include "assignexpr.h"

#include <QMap>

AssignExpr::AssignExpr(ExprNode* target, ExprNode* right) {
    this->target = target;
    this->right = right;
}

QList<ExprNode*> AssignExpr::children(){
    QList<ExprNode*> children = QList<ExprNode*>();
    children.append(target);
    children.append(right);
    return children;
}
antlrcpp::Any AssignExpr::evaluate(){
    return this->evaluate(QMap<QString, antlrcpp::Any>());
}

antlrcpp::Any AssignExpr::evaluate(QMap<QString, antlrcpp::Any> paramMap){
    long rightval = (long)right->evaluate(paramMap);
    return antlrcpp::Any(rightval);
}
