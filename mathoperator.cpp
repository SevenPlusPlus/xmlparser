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

QList<ExprNode*> MathOperator::children(){
    return QList<ExprNode*>();
}
antlrcpp::Any MathOperator::evaluate(){
    return this->evaluate(QMap<QString, antlrcpp::Any>());
}
antlrcpp::Any MathOperator::evaluate(QMap<QString, antlrcpp::Any> paramMap){
    return antlrcpp::Any(this->op);
}
