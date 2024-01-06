#ifndef BOOLEANLITERAL_H
#define BOOLEANLITERAL_H

#include <ExprNode.h>


class BooleanLiteral: public ExprNode
{
private:
    bool value;
public:
    bool getValue(){
        return this->value;
    }

    QList<ExprNode*> children();
    antlrcpp::Any evaluate();
    antlrcpp::Any evaluate(QMap<QString, antlrcpp::Any> paramMap);
    BooleanLiteral(bool val);
    ~BooleanLiteral(){

    };
};

#endif // BOOLEANLITERAL_H
