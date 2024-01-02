#ifndef ASTVISITOR_H
#define ASTVISITOR_H

#include <antlr4/ExprEngineBaseVisitor.h>


class AstVisitor : public ExprEngineBaseVisitor
{
public:
    AstVisitor();
};

#endif // ASTVISITOR_H
