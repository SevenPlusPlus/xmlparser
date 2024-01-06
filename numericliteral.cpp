#include "numericliteral.h"

#include <QMap>

NumericLiteral::NumericLiteral(long value){
    this->val = value;
}

QList<ExprNode*> NumericLiteral::children(){
    return QList<ExprNode*>();
}

antlrcpp::Any NumericLiteral::evaluate(){
    return this->evaluate(QMap<QString, antlrcpp::Any>());
}

antlrcpp::Any NumericLiteral::evaluate(QMap<QString, antlrcpp::Any> paramMap){
    return antlrcpp::Any(this->val);
}
