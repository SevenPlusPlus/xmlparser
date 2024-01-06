#include "assignop.h"

#include <QMap>

AssignOp::AssignOp() {
    this->op = ":=";
}

QList<std::shared_ptr<ExprNode>> AssignOp::children(){
    return QList<std::shared_ptr<ExprNode>>();
}
antlrcpp::Any AssignOp::evaluate(){
    return this->evaluate(QMap<QString, antlrcpp::Any>());
}
antlrcpp::Any AssignOp::evaluate(QMap<QString, antlrcpp::Any> paramMap){
    return antlrcpp::Any(this->op);
}
