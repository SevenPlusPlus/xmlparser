#ifndef ASTVISITOR_H
#define ASTVISITOR_H

#include "addexpr.h"
#include "assignop.h"

#include <antlr4/ExprEngineBaseVisitor.h>

#include <AssignExpr.h>
#include <BooleanLiteral.h>
#include <MathOperator.h>
#include <NumericLiteral.h>
#include <ParamExpr.h>
#include <StringLiteral.h>


class AstVisitor : public ExprEngineBaseVisitor
{
public:
    AstVisitor();
    ~AstVisitor(){

    }

    antlrcpp::Any visitBooleanLiteral(ExprEngineParser::BooleanLiteralContext *ctx) override {
        bool val = false;
        std::istringstream(ctx->getText()) >> std::boolalpha >> val;
        BooleanLiteral *booleanLiteral = new BooleanLiteral(val);
        return antlrcpp::Any(booleanLiteral);
    }

    antlrcpp::Any visitStringLiteral(ExprEngineParser::StringLiteralContext *context) override{
        std::string val = context->getText();
        StringLiteral *stringliteral = new StringLiteral(val);
        return antlrcpp::Any(stringliteral);
    }

    antlrcpp::Any visitDecimalLiteral(ExprEngineParser::DecimalLiteralContext *context) override{
        std::string val = context->getText();
        long lval = std::stol(val);
        return antlrcpp::Any(new NumericLiteral(lval));
    }

    antlrcpp::Any visitParam(ExprEngineParser::ParamContext *context) override{
        StringLiteral* paramIdentify = visit(context->paramIdentifier()).as<StringLiteral*>();
        std::string paramName = paramIdentify->evaluate().as<std::string>();
        delete paramIdentify;
        return antlrcpp::Any(new ParamExpr(paramName));
    }

    antlrcpp::Any visitParamIdentifier(ExprEngineParser::ParamIdentifierContext *context) override{
        return antlrcpp::Any(new StringLiteral(context->getText()));
    }

    antlrcpp::Any visitAssignExpression(ExprEngineParser::AssignExpressionContext *context) override{
        ParamExpr* param =  visit(context->left).as<ParamExpr*>();
        AssignOp* assignOp = visit(context->assignOperator()).as<AssignOp*>();
        delete assignOp;
        AddExpr* expr = visit(context->right).as<AddExpr*>();
        AssignExpr *assignExpr = new AssignExpr(param, expr);
        return antlrcpp::Any(assignExpr);
    }

    antlrcpp::Any visitExpression(ExprEngineParser::ExpressionContext *context) override{
        return visitChildren(context);
    }

    antlrcpp::Any visitExprAtomPredicate(ExprEngineParser::ExprAtomPredicateContext *context) override{
        return visit(context->expressionAtom());
    }


    antlrcpp::Any visitBracketExprAtom(ExprEngineParser::BracketExprAtomContext *context) override{
        return visit(context->expression());
    }

    antlrcpp::Any visitParamExprAtom(ExprEngineParser::ParamExprAtomContext *context) override{
        return visit(context->param());
    }

    antlrcpp::Any visitConstantExprAtom(ExprEngineParser::ConstantExprAtomContext *context) override{
        return visit(context->constant());
    }


    antlrcpp::Any visitMathPMExprAtom(ExprEngineParser::MathPMExprAtomContext *context) override{
        antlrcpp::Any leftNode = visit(context->left);
        NumericLiteral *left = leftNode.as<NumericLiteral*>();
        NumericLiteral *right = (NumericLiteral *)visit(context->right);
        MathOperator *op = (MathOperator *)visit(context->mathPmOperator());
        std::string mathop = op->getOp();
        delete op;
        if(mathop == MathOperator::PLUS_OP){
            AddExpr *add = new AddExpr(left, right);
            return antlrcpp::Any(add);
        }
        return nullptr;
    }


    antlrcpp::Any visitAssignOperator(ExprEngineParser::AssignOperatorContext *context) override{
        std::string val = context->getText();
        AssignOp *assignOp = new AssignOp();
        return antlrcpp::Any(assignOp);
    }


    antlrcpp::Any visitConstant(ExprEngineParser::ConstantContext *context) override{
        if(context->stringLiteral() != nullptr){
            return visit(context->stringLiteral());
        } else if(context->decimalLiteral() != nullptr){
            return visit(context->decimalLiteral());
        } else if(context->booleanLiteral() != nullptr){
            return visit(context->booleanLiteral());
        } else if(context->IDENTIFIER() != nullptr){
            return antlrcpp::Any(new StringLiteral(context->IDENTIFIER()->getText()));
        }
        return nullptr;
    }


    antlrcpp::Any visitMathPmOperator(ExprEngineParser::MathPmOperatorContext *context) override{
        MathOperator *mathop = new MathOperator(context->getText());
        return antlrcpp::Any(mathop);
    }

};

#endif // ASTVISITOR_H
