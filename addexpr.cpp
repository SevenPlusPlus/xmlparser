#include "addexpr.h"

#include <QMap>

AddExpr::AddExpr(ExprNode* left, ExprNode* right) {
    this->left = left;
    this->right = right;
}

QList<ExprNode*> AddExpr::children(){
    QList<ExprNode*> children = QList<ExprNode*>();
    children.append(left);
    children.append(right);
    return children;
}

antlrcpp::Any AddExpr::evaluate(){
    return this->evaluate(QMap<QString, antlrcpp::Any>());
}

antlrcpp::Any AddExpr::evaluate(QMap<QString, antlrcpp::Any> paramMap){
    long leftval = (long)left->evaluate(paramMap);
    long rightval = (long)right->evaluate(paramMap);
    return antlrcpp::Any(leftval + rightval);
}
