#ifndef PARAMEXPR_H
#define PARAMEXPR_H

#include <AbstractExpr.h>
#include <ExprNode.h>
#include <string>


class ParamExpr: public AbstractExpr
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

    std::string outputCode(){
        return name;
    }
};

#endif // PARAMEXPR_H
