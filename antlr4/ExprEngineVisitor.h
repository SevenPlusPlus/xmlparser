
// Generated from ExprEngine.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "ExprEngineParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ExprEngineParser.
 */
class  ExprEngineVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ExprEngineParser.
   */
    virtual antlrcpp::Any visitAssignExpression(ExprEngineParser::AssignExpressionContext *context) = 0;

    virtual antlrcpp::Any visitExpression(ExprEngineParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitExprAtomPredicate(ExprEngineParser::ExprAtomPredicateContext *context) = 0;

    virtual antlrcpp::Any visitComparisonPredicate(ExprEngineParser::ComparisonPredicateContext *context) = 0;

    virtual antlrcpp::Any visitLogicalPredicate(ExprEngineParser::LogicalPredicateContext *context) = 0;

    virtual antlrcpp::Any visitLikePredicate(ExprEngineParser::LikePredicateContext *context) = 0;

    virtual antlrcpp::Any visitBracketExprAtom(ExprEngineParser::BracketExprAtomContext *context) = 0;

    virtual antlrcpp::Any visitParamExprAtom(ExprEngineParser::ParamExprAtomContext *context) = 0;

    virtual antlrcpp::Any visitMathMDExprAtom(ExprEngineParser::MathMDExprAtomContext *context) = 0;

    virtual antlrcpp::Any visitFuncInvokeExprAtom(ExprEngineParser::FuncInvokeExprAtomContext *context) = 0;

    virtual antlrcpp::Any visitConstantExprAtom(ExprEngineParser::ConstantExprAtomContext *context) = 0;

    virtual antlrcpp::Any visitCaseWhenExprAtom(ExprEngineParser::CaseWhenExprAtomContext *context) = 0;

    virtual antlrcpp::Any visitMathPMExprAtom(ExprEngineParser::MathPMExprAtomContext *context) = 0;

    virtual antlrcpp::Any visitFuncInvoke(ExprEngineParser::FuncInvokeContext *context) = 0;

    virtual antlrcpp::Any visitLogicalOperator(ExprEngineParser::LogicalOperatorContext *context) = 0;

    virtual antlrcpp::Any visitAssignOperator(ExprEngineParser::AssignOperatorContext *context) = 0;

    virtual antlrcpp::Any visitComparisonOperator(ExprEngineParser::ComparisonOperatorContext *context) = 0;

    virtual antlrcpp::Any visitCaseWhen(ExprEngineParser::CaseWhenContext *context) = 0;

    virtual antlrcpp::Any visitCaseItem(ExprEngineParser::CaseItemContext *context) = 0;

    virtual antlrcpp::Any visitConstant(ExprEngineParser::ConstantContext *context) = 0;

    virtual antlrcpp::Any visitStringLiteral(ExprEngineParser::StringLiteralContext *context) = 0;

    virtual antlrcpp::Any visitFloatLiteral(ExprEngineParser::FloatLiteralContext *context) = 0;

    virtual antlrcpp::Any visitDecimalLiteral(ExprEngineParser::DecimalLiteralContext *context) = 0;

    virtual antlrcpp::Any visitBooleanLiteral(ExprEngineParser::BooleanLiteralContext *context) = 0;

    virtual antlrcpp::Any visitParam(ExprEngineParser::ParamContext *context) = 0;

    virtual antlrcpp::Any visitParamIdentifier(ExprEngineParser::ParamIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitMathPmOperator(ExprEngineParser::MathPmOperatorContext *context) = 0;

    virtual antlrcpp::Any visitMathMdOperator(ExprEngineParser::MathMdOperatorContext *context) = 0;


};

