
// Generated from ExprEngine.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "ExprEngineVisitor.h"


/**
 * This class provides an empty implementation of ExprEngineVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ExprEngineBaseVisitor : public ExprEngineVisitor {
public:

  virtual antlrcpp::Any visitAssignExpression(ExprEngineParser::AssignExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(ExprEngineParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprAtomPredicate(ExprEngineParser::ExprAtomPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparisonPredicate(ExprEngineParser::ComparisonPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalPredicate(ExprEngineParser::LogicalPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLikePredicate(ExprEngineParser::LikePredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBracketExprAtom(ExprEngineParser::BracketExprAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParamExprAtom(ExprEngineParser::ParamExprAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMathMDExprAtom(ExprEngineParser::MathMDExprAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncInvokeExprAtom(ExprEngineParser::FuncInvokeExprAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstantExprAtom(ExprEngineParser::ConstantExprAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaseWhenExprAtom(ExprEngineParser::CaseWhenExprAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMathPMExprAtom(ExprEngineParser::MathPMExprAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncInvoke(ExprEngineParser::FuncInvokeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalOperator(ExprEngineParser::LogicalOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignOperator(ExprEngineParser::AssignOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparisonOperator(ExprEngineParser::ComparisonOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaseWhen(ExprEngineParser::CaseWhenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaseItem(ExprEngineParser::CaseItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant(ExprEngineParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringLiteral(ExprEngineParser::StringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFloatLiteral(ExprEngineParser::FloatLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecimalLiteral(ExprEngineParser::DecimalLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBooleanLiteral(ExprEngineParser::BooleanLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParam(ExprEngineParser::ParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParamIdentifier(ExprEngineParser::ParamIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMathPmOperator(ExprEngineParser::MathPmOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMathMdOperator(ExprEngineParser::MathMdOperatorContext *ctx) override {
    return visitChildren(ctx);
  }


};

