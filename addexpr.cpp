#include "addexpr.h"

#include <QMap>

AddExpr::AddExpr(std::shared_ptr<ExprNode> left, std::shared_ptr<ExprNode> right) {
    this->left = left;
    this->right = right;
}

QList<std::shared_ptr<ExprNode>> AddExpr::children(){
    QList<std::shared_ptr<ExprNode>> children = QList<std::shared_ptr<ExprNode>>();
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
