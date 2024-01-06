#include "mathoperator.h"

#include <QMap>

const std::string MathOperator::MULTI_OP = "*";
const std::string MathOperator::DIV_OP = "/";
const std::string MathOperator::PLUS_OP = "+";
const std::string MathOperator::MINUS_OP = "-";
const std::string MathOperator::EQUAL_OP = "=";

MathOperator::MathOperator(std::string op) {
    this->op = op;
}

QList<std::shared_ptr<ExprNode>> MathOperator::children(){
    return QList<std::shared_ptr<ExprNode>>();
}
antlrcpp::Any MathOperator::evaluate(){
    this->evaluate(QMap<QString, antlrcpp::Any>());
}
antlrcpp::Any MathOperator::evaluate(QMap<QString, antlrcpp::Any> paramMap){
    return antlrcpp::Any(this->op);
}
