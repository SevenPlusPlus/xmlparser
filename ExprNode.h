#ifndef EXPRNODE_H
#define EXPRNODE_H

#include "antlr4-runtime.h"
#include <QList>


class ExprNode{

public:
    virtual ~ExprNode() = default;

    virtual QList<std::shared_ptr<ExprNode>> children() = 0;

    virtual antlrcpp::Any evaluate() = 0;

    virtual antlrcpp::Any evaluate(QMap<QString, antlrcpp::Any> paramMap) = 0;

};

#endif // EXPRNODE_H
