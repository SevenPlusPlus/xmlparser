#include "numericliteral.h"

#include <QMap>

NumericLiteral::NumericLiteral(long value){
    this->val = value;
}

QList<std::shared_ptr<ExprNode>> NumericLiteral::children(){
    return QList<std::shared_ptr<ExprNode>>();
}

antlrcpp::Any NumericLiteral::evaluate(){
    return this->evaluate(QMap<QString, antlrcpp::Any>());
}

antlrcpp::Any NumericLiteral::evaluate(QMap<QString, antlrcpp::Any> paramMap){
    return antlrcpp::Any(this->val);
}
