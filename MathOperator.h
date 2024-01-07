#ifndef MATHOPERATOR_H
#define MATHOPERATOR_H

#include <AbstractExpr.h>
#include <ExprNode.h>
#include <string>



class MathOperator: public AbstractExpr
{
private:
    std::string op;
public:
    static const std::string MULTI_OP;
    static const std::string DIV_OP;
    static const std::string PLUS_OP;
    static const std::string MINUS_OP;
    static const std::string EQUAL_OP;

    MathOperator(std::string op);
    ~MathOperator(){

    }
    std::string getOp(){
        return this->op;
    }

    QList<std::shared_ptr<ExprNode>> children();
    antlrcpp::Any evaluate();
    antlrcpp::Any evaluate(QMap<QString, antlrcpp::Any> paramMap);
};

#endif // MATHOPERATOR_H
