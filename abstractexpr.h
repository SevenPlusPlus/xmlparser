#ifndef ABSTRACTEXPR_H
#define ABSTRACTEXPR_H

#include <ExprNode.h>
#include <QMap>


class AbstractExpr: public ExprNode
{
public:
    AbstractExpr();

    QList<std::shared_ptr<ExprNode>> children(){
        return QList<std::shared_ptr<ExprNode>>();
    }

    std::string outputCode(){
        return "";
    }
};

#endif // ABSTRACTEXPR_H
