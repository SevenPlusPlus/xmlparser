#include "stringliteral.h"

#include <QMap>

StringLiteral::StringLiteral(std::string value) {
    this->val = value;
}

QList<ExprNode*> StringLiteral::children(){
    return QList<ExprNode*>();
}

antlrcpp::Any StringLiteral::evaluate(){
    return this->evaluate(QMap<QString, antlrcpp::Any>());
}
antlrcpp::Any StringLiteral::evaluate(QMap<QString, antlrcpp::Any> paramMap){
    return antlrcpp::Any(this->val);
}
