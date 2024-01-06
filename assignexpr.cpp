#include "assignexpr.h"

#include <QMap>

AssignExpr::AssignExpr(std::shared_ptr<ExprNode> target, std::shared_ptr<ExprNode> right) {
    this->target = target;
    this->right = right;
}

QList<std::shared_ptr<ExprNode>> AssignExpr::children(){
    QList<std::shared_ptr<ExprNode>> children = QList<std::shared_ptr<ExprNode>>();
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
