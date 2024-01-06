#include "booleanliteral.h"

#include <QMap>

BooleanLiteral::BooleanLiteral(bool val){
    this->value = val;
}


QList<ExprNode*> BooleanLiteral::children(){
    return QList<ExprNode*>();
}

antlrcpp::Any BooleanLiteral::evaluate(){
    return this->evaluate(QMap<QString, antlrcpp::Any>());
}

antlrcpp::Any BooleanLiteral::evaluate(QMap<QString, antlrcpp::Any> paramMap){
    return antlrcpp::Any(this->value);
}
