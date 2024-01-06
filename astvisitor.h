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
        ExprNode *booleanLiteral = new BooleanLiteral(val);
        return antlrcpp::Any(std::shared_ptr<ExprNode>(booleanLiteral));
    }

    antlrcpp::Any visitStringLiteral(ExprEngineParser::StringLiteralContext *context) override{
        std::string val = context->getText();
        ExprNode *stringliteral = new StringLiteral(val);
        return antlrcpp::Any(std::shared_ptr<ExprNode>(stringliteral));
    }

    antlrcpp::Any visitDecimalLiteral(ExprEngineParser::DecimalLiteralContext *context) override{
        std::string val = context->getText();
        long lval = std::stol(val);
        return antlrcpp::Any(std::shared_ptr<ExprNode>(new NumericLiteral(lval)));
    }

    antlrcpp::Any visitParam(ExprEngineParser::ParamContext *context) override{
        std::shared_ptr<ExprNode> paramIdentify = visit(context->paramIdentifier()).as<std::shared_ptr<ExprNode>>();
        std::string paramName = paramIdentify->evaluate().as<std::string>();
        return antlrcpp::Any(std::shared_ptr<ExprNode>(new ParamExpr(paramName)));
    }

    antlrcpp::Any visitParamIdentifier(ExprEngineParser::ParamIdentifierContext *context) override{
        return antlrcpp::Any(std::shared_ptr<ExprNode>(new StringLiteral(context->getText())));
    }

    antlrcpp::Any visitAssignExpression(ExprEngineParser::AssignExpressionContext *context) override{
        std::shared_ptr<ExprNode> param =  visit(context->left).as<std::shared_ptr<ExprNode>>();

        std::shared_ptr<ExprNode> expr = visit(context->right).as<std::shared_ptr<ExprNode>>();
        AssignExpr *assignExpr = new AssignExpr(param, expr);
        return antlrcpp::Any(std::shared_ptr<ExprNode>(assignExpr));
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
        std::shared_ptr<ExprNode> left = visit(context->left).as<std::shared_ptr<ExprNode>>();
        std::shared_ptr<ExprNode> right = visit(context->right).as<std::shared_ptr<ExprNode>>();
        std::shared_ptr<ExprNode> op = visit(context->mathPmOperator()).as<std::shared_ptr<ExprNode>>();
        std::shared_ptr<MathOperator> mathOper = std::dynamic_pointer_cast<MathOperator>(op);
        std::string mathop = mathOper->getOp();
        if(mathop == MathOperator::PLUS_OP){
            AddExpr *add = new AddExpr(left, right);
            return antlrcpp::Any(std::shared_ptr<ExprNode>(add));
        }
        return nullptr;
    }


    antlrcpp::Any visitAssignOperator(ExprEngineParser::AssignOperatorContext *context) override{
        std::string val = context->getText();
        ExprNode *assignOp = new AssignOp();
        return antlrcpp::Any(std::shared_ptr<ExprNode>(assignOp));
    }


    antlrcpp::Any visitConstant(ExprEngineParser::ConstantContext *context) override{
        if(context->stringLiteral() != nullptr){
            return visit(context->stringLiteral());
        } else if(context->decimalLiteral() != nullptr){
            return visit(context->decimalLiteral());
        } else if(context->booleanLiteral() != nullptr){
            return visit(context->booleanLiteral());
        } else if(context->IDENTIFIER() != nullptr){
            return antlrcpp::Any(std::shared_ptr<ExprNode>(new StringLiteral(context->IDENTIFIER()->getText())));
        }
        return nullptr;
    }


    antlrcpp::Any visitMathPmOperator(ExprEngineParser::MathPmOperatorContext *context) override{
        ExprNode *mathop = new MathOperator(context->getText());
        return antlrcpp::Any(std::shared_ptr<ExprNode>(mathop));
    }

};

#endif // ASTVISITOR_H
