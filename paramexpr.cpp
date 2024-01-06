#include "paramexpr.h"

#include <QMap>

ParamExpr::ParamExpr(std::string nm) {
    this->name = nm;
}

QList<ExprNode*> ParamExpr::children(){
    return QList<ExprNode*>();
}

antlrcpp::Any ParamExpr::evaluate(){
    return this->evaluate(QMap<QString, antlrcpp::Any>());
}

antlrcpp::Any ParamExpr::evaluate(QMap<QString, antlrcpp::Any> paramMap){
    QString paramName = QString::fromStdString(this->name);
    if(paramMap.contains(paramName)){
        return paramMap.value(paramName);
    }
    return antlrcpp::Any(0L);
}
