#ifndef PARAMEXPR_H
#define PARAMEXPR_H

#include <ExprNode.h>
#include <string>


class ParamExpr: public ExprNode
{
private:
    std::string name;
public:
    ParamExpr(std::string name);
    ~ParamExpr(){

    }

    QList<std::shared_ptr<ExprNode>> children();
    antlrcpp::Any evaluate();
    antlrcpp::Any evaluate(QMap<QString, antlrcpp::Any> paramMap);
};

#endif // PARAMEXPR_H
