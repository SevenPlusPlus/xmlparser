
// Generated from ExprEngine.g4 by ANTLR 4.7.2


#include "ExprEngineVisitor.h"

#include "ExprEngineParser.h"


using namespace antlrcpp;
using namespace antlr4;

ExprEngineParser::ExprEngineParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ExprEngineParser::~ExprEngineParser() {
  delete _interpreter;
}

std::string ExprEngineParser::getGrammarFileName() const {
  return "ExprEngine.g4";
}

const std::vector<std::string>& ExprEngineParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ExprEngineParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- AssignRuleContext ------------------------------------------------------------------

ExprEngineParser::AssignRuleContext::AssignRuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprEngineParser::AssignRuleContext::getRuleIndex() const {
  return ExprEngineParser::RuleAssignRule;
}

void ExprEngineParser::AssignRuleContext::copyFrom(AssignRuleContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AssignExpressionContext ------------------------------------------------------------------

ExprEngineParser::AssignOperatorContext* ExprEngineParser::AssignExpressionContext::assignOperator() {
  return getRuleContext<ExprEngineParser::AssignOperatorContext>(0);
}

ExprEngineParser::ParamContext* ExprEngineParser::AssignExpressionContext::param() {
  return getRuleContext<ExprEngineParser::ParamContext>(0);
}

ExprEngineParser::ExpressionContext* ExprEngineParser::AssignExpressionContext::expression() {
  return getRuleContext<ExprEngineParser::ExpressionContext>(0);
}

ExprEngineParser::AssignExpressionContext::AssignExpressionContext(AssignRuleContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprEngineParser::AssignExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprEngineVisitor*>(visitor))
    return parserVisitor->visitAssignExpression(this);
  else
    return visitor->visitChildren(this);
}
ExprEngineParser::AssignRuleContext* ExprEngineParser::assignRule() {
  AssignRuleContext *_localctx = _tracker.createInstance<AssignRuleContext>(_ctx, getState());
  enterRule(_localctx, 0, ExprEngineParser::RuleAssignRule);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<AssignRuleContext *>(_tracker.createInstance<ExprEngineParser::AssignExpressionContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(38);
    dynamic_cast<AssignExpressionContext *>(_localctx)->left = param();
    setState(39);
    assignOperator();
    setState(40);
    dynamic_cast<AssignExpressionContext *>(_localctx)->right = expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

ExprEngineParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprEngineParser::PredicateContext* ExprEngineParser::ExpressionContext::predicate() {
  return getRuleContext<ExprEngineParser::PredicateContext>(0);
}


size_t ExprEngineParser::ExpressionContext::getRuleIndex() const {
  return ExprEngineParser::RuleExpression;
}


antlrcpp::Any ExprEngineParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprEngineVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

ExprEngineParser::ExpressionContext* ExprEngineParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 2, ExprEngineParser::RuleExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(42);
    predicate(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PredicateContext ------------------------------------------------------------------

ExprEngineParser::PredicateContext::PredicateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprEngineParser::PredicateContext::getRuleIndex() const {
  return ExprEngineParser::RulePredicate;
}

void ExprEngineParser::PredicateContext::copyFrom(PredicateContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExprAtomPredicateContext ------------------------------------------------------------------

ExprEngineParser::ExpressionAtomContext* ExprEngineParser::ExprAtomPredicateContext::expressionAtom() {
  return getRuleContext<ExprEngineParser::ExpressionAtomContext>(0);
}

ExprEngineParser::ExprAtomPredicateContext::ExprAtomPredicateContext(PredicateContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprEngineParser::ExprAtomPredicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprEngineVisitor*>(visitor))
    return parserVisitor->visitExprAtomPredicate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ComparisonPredicateContext ------------------------------------------------------------------

ExprEngineParser::ComparisonOperatorContext* ExprEngineParser::ComparisonPredicateContext::comparisonOperator() {
  return getRuleContext<ExprEngineParser::ComparisonOperatorContext>(0);
}

std::vector<ExprEngineParser::PredicateContext *> ExprEngineParser::ComparisonPredicateContext::predicate() {
  return getRuleContexts<ExprEngineParser::PredicateContext>();
}

ExprEngineParser::PredicateContext* ExprEngineParser::ComparisonPredicateContext::predicate(size_t i) {
  return getRuleContext<ExprEngineParser::PredicateContext>(i);
}

ExprEngineParser::ComparisonPredicateContext::ComparisonPredicateContext(PredicateContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprEngineParser::ComparisonPredicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprEngineVisitor*>(visitor))
    return parserVisitor->visitComparisonPredicate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicalPredicateContext ------------------------------------------------------------------

ExprEngineParser::LogicalOperatorContext* ExprEngineParser::LogicalPredicateContext::logicalOperator() {
  return getRuleContext<ExprEngineParser::LogicalOperatorContext>(0);
}

std::vector<ExprEngineParser::PredicateContext *> ExprEngineParser::LogicalPredicateContext::predicate() {
  return getRuleContexts<ExprEngineParser::PredicateContext>();
}

ExprEngineParser::PredicateContext* ExprEngineParser::LogicalPredicateContext::predicate(size_t i) {
  return getRuleContext<ExprEngineParser::PredicateContext>(i);
}

ExprEngineParser::LogicalPredicateContext::LogicalPredicateContext(PredicateContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprEngineParser::LogicalPredicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprEngineVisitor*>(visitor))
    return parserVisitor->visitLogicalPredicate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LikePredicateContext ------------------------------------------------------------------

std::vector<ExprEngineParser::ExpressionAtomContext *> ExprEngineParser::LikePredicateContext::expressionAtom() {
  return getRuleContexts<ExprEngineParser::ExpressionAtomContext>();
}

ExprEngineParser::ExpressionAtomContext* ExprEngineParser::LikePredicateContext::expressionAtom(size_t i) {
  return getRuleContext<ExprEngineParser::ExpressionAtomContext>(i);
}

tree::TerminalNode* ExprEngineParser::LikePredicateContext::LIKE() {
  return getToken(ExprEngineParser::LIKE, 0);
}

tree::TerminalNode* ExprEngineParser::LikePredicateContext::NOT() {
  return getToken(ExprEngineParser::NOT, 0);
}

ExprEngineParser::LikePredicateContext::LikePredicateContext(PredicateContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprEngineParser::LikePredicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprEngineVisitor*>(visitor))
    return parserVisitor->visitLikePredicate(this);
  else
    return visitor->visitChildren(this);
}

ExprEngineParser::PredicateContext* ExprEngineParser::predicate() {
   return predicate(0);
}

ExprEngineParser::PredicateContext* ExprEngineParser::predicate(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExprEngineParser::PredicateContext *_localctx = _tracker.createInstance<PredicateContext>(_ctx, parentState);
  ExprEngineParser::PredicateContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, ExprEngineParser::RulePredicate, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(53);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<LikePredicateContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(45);
      expressionAtom(0);
      setState(47);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ExprEngineParser::NOT) {
        setState(46);
        dynamic_cast<LikePredicateContext *>(_localctx)->notOperator = match(ExprEngineParser::NOT);
      }
      setState(49);
      match(ExprEngineParser::LIKE);
      setState(50);
      expressionAtom(0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ExprAtomPredicateContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(52);
      expressionAtom(0);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(65);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(63);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<LogicalPredicateContext>(_tracker.createInstance<PredicateContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RulePredicate);
          setState(55);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(56);
          logicalOperator();
          setState(57);
          dynamic_cast<LogicalPredicateContext *>(_localctx)->right = predicate(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ComparisonPredicateContext>(_tracker.createInstance<PredicateContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RulePredicate);
          setState(59);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(60);
          comparisonOperator();
          setState(61);
          dynamic_cast<ComparisonPredicateContext *>(_localctx)->right = predicate(4);
          break;
        }

        } 
      }
      setState(67);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExpressionAtomContext ------------------------------------------------------------------

ExprEngineParser::ExpressionAtomContext::ExpressionAtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprEngineParser::ExpressionAtomContext::getRuleIndex() const {
  return ExprEngineParser::RuleExpressionAtom;
}

void ExprEngineParser::ExpressionAtomContext::copyFrom(ExpressionAtomContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BracketExprAtomContext ------------------------------------------------------------------

tree::TerminalNode* ExprEngineParser::BracketExprAtomContext::LPAREN() {
  return getToken(ExprEngineParser::LPAREN, 0);
}

ExprEngineParser::ExpressionContext* ExprEngineParser::BracketExprAtomContext::expression() {
  return getRuleContext<ExprEngineParser::ExpressionContext>(0);
}

tree::TerminalNode* ExprEngineParser::BracketExprAtomContext::RPAREN() {
  return getToken(ExprEngineParser::RPAREN, 0);
}

ExprEngineParser::BracketExprAtomContext::BracketExprAtomContext(ExpressionAtomContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprEngineParser::BracketExprAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprEngineVisitor*>(visitor))
    return parserVisitor->visitBracketExprAtom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParamExprAtomContext ------------------------------------------------------------------

ExprEngineParser::ParamContext* ExprEngineParser::ParamExprAtomContext::param() {
  return getRuleContext<ExprEngineParser::ParamContext>(0);
}

ExprEngineParser::ParamExprAtomContext::ParamExprAtomContext(ExpressionAtomContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprEngineParser::ParamExprAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprEngineVisitor*>(visitor))
    return parserVisitor->visitParamExprAtom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MathMDExprAtomContext ------------------------------------------------------------------

ExprEngineParser::MathMdOperatorContext* ExprEngineParser::MathMDExprAtomContext::mathMdOperator() {
  return getRuleContext<ExprEngineParser::MathMdOperatorContext>(0);
}

std::vector<ExprEngineParser::ExpressionAtomContext *> ExprEngineParser::MathMDExprAtomContext::expressionAtom() {
  return getRuleContexts<ExprEngineParser::ExpressionAtomContext>();
}

ExprEngineParser::ExpressionAtomContext* ExprEngineParser::MathMDExprAtomContext::expressionAtom(size_t i) {
  return getRuleContext<ExprEngineParser::ExpressionAtomContext>(i);
}

ExprEngineParser::MathMDExprAtomContext::MathMDExprAtomContext(ExpressionAtomContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprEngineParser::MathMDExprAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprEngineVisitor*>(visitor))
    return parserVisitor->visitMathMDExprAtom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncInvokeExprAtomContext ------------------------------------------------------------------

ExprEngineParser::FuncInvokeContext* ExprEngineParser::FuncInvokeExprAtomContext::funcInvoke() {
  return getRuleContext<ExprEngineParser::FuncInvokeContext>(0);
}

ExprEngineParser::FuncInvokeExprAtomContext::FuncInvokeExprAtomContext(ExpressionAtomContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprEngineParser::FuncInvokeExprAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprEngineVisitor*>(visitor))
    return parserVisitor->visitFuncInvokeExprAtom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstantExprAtomContext ------------------------------------------------------------------

ExprEngineParser::ConstantContext* ExprEngineParser::ConstantExprAtomContext::constant() {
  return getRuleContext<ExprEngineParser::ConstantContext>(0);
}

ExprEngineParser::ConstantExprAtomContext::ConstantExprAtomContext(ExpressionAtomContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprEngineParser::ConstantExprAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprEngineVisitor*>(visitor))
    return parserVisitor->visitConstantExprAtom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CaseWhenExprAtomContext ------------------------------------------------------------------

ExprEngineParser::CaseWhenContext* ExprEngineParser::CaseWhenExprAtomContext::caseWhen() {
  return getRuleContext<ExprEngineParser::CaseWhenContext>(0);
}

ExprEngineParser::CaseWhenExprAtomContext::CaseWhenExprAtomContext(ExpressionAtomContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprEngineParser::CaseWhenExprAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprEngineVisitor*>(visitor))
    return parserVisitor->visitCaseWhenExprAtom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MathPMExprAtomContext ------------------------------------------------------------------

ExprEngineParser::MathPmOperatorContext* ExprEngineParser::MathPMExprAtomContext::mathPmOperator() {
  return getRuleContext<ExprEngineParser::MathPmOperatorContext>(0);
}

std::vector<ExprEngineParser::ExpressionAtomContext *> ExprEngineParser::MathPMExprAtomContext::expressionAtom() {
  return getRuleContexts<ExprEngineParser::ExpressionAtomContext>();
}

ExprEngineParser::ExpressionAtomContext* ExprEngineParser::MathPMExprAtomContext::expressionAtom(size_t i) {
  return getRuleContext<ExprEngineParser::ExpressionAtomContext>(i);
}

ExprEngineParser::MathPMExprAtomContext::MathPMExprAtomContext(ExpressionAtomContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprEngineParser::MathPMExprAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprEngineVisitor*>(visitor))
    return parserVisitor->visitMathPMExprAtom(this);
  else
    return visitor->visitChildren(this);
}

ExprEngineParser::ExpressionAtomContext* ExprEngineParser::expressionAtom() {
   return expressionAtom(0);
}

ExprEngineParser::ExpressionAtomContext* ExprEngineParser::expressionAtom(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExprEngineParser::ExpressionAtomContext *_localctx = _tracker.createInstance<ExpressionAtomContext>(_ctx, parentState);
  ExprEngineParser::ExpressionAtomContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, ExprEngineParser::RuleExpressionAtom, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(77);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ConstantExprAtomContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(69);
      constant();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ParamExprAtomContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(70);
      param();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CaseWhenExprAtomContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(71);
      caseWhen();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<FuncInvokeExprAtomContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(72);
      funcInvoke();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<BracketExprAtomContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(73);
      match(ExprEngineParser::LPAREN);
      setState(74);
      expression();
      setState(75);
      match(ExprEngineParser::RPAREN);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(89);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(87);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MathMDExprAtomContext>(_tracker.createInstance<ExpressionAtomContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpressionAtom);
          setState(79);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(80);
          mathMdOperator();
          setState(81);
          dynamic_cast<MathMDExprAtomContext *>(_localctx)->right = expressionAtom(3);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MathPMExprAtomContext>(_tracker.createInstance<ExpressionAtomContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpressionAtom);
          setState(83);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(84);
          mathPmOperator();
          setState(85);
          dynamic_cast<MathPMExprAtomContext *>(_localctx)->right = expressionAtom(2);
          break;
        }

        } 
      }
      setState(91);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- FuncInvokeContext ------------------------------------------------------------------

ExprEngineParser::FuncInvokeContext::FuncInvokeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprEngineParser::FuncInvokeContext::LPAREN() {
  return getToken(ExprEngineParser::LPAREN, 0);
}

std::vector<ExprEngineParser::ExpressionAtomContext *> ExprEngineParser::FuncInvokeContext::expressionAtom() {
  return getRuleContexts<ExprEngineParser::ExpressionAtomContext>();
}

ExprEngineParser::ExpressionAtomContext* ExprEngineParser::FuncInvokeContext::expressionAtom(size_t i) {
  return getRuleContext<ExprEngineParser::ExpressionAtomContext>(i);
}

tree::TerminalNode* ExprEngineParser::FuncInvokeContext::RPAREN() {
  return getToken(ExprEngineParser::RPAREN, 0);
}

tree::TerminalNode* ExprEngineParser::FuncInvokeContext::IDENTIFIER() {
  return getToken(ExprEngineParser::IDENTIFIER, 0);
}

std::vector<tree::TerminalNode *> ExprEngineParser::FuncInvokeContext::COMMA() {
  return getTokens(ExprEngineParser::COMMA);
}

tree::TerminalNode* ExprEngineParser::FuncInvokeContext::COMMA(size_t i) {
  return getToken(ExprEngineParser::COMMA, i);
}


size_t ExprEngineParser::FuncInvokeContext::getRuleIndex() const {
  return ExprEngineParser::RuleFuncInvoke;
}


antlrcpp::Any ExprEngineParser::FuncInvokeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprEngineVisitor*>(visitor))
    return parserVisitor->visitFuncInvoke(this);
  else
    return visitor->visitChildren(this);
}

ExprEngineParser::FuncInvokeContext* ExprEngineParser::funcInvoke() {
  FuncInvokeContext *_localctx = _tracker.createInstance<FuncInvokeContext>(_ctx, getState());
  enterRule(_localctx, 8, ExprEngineParser::RuleFuncInvoke);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    dynamic_cast<FuncInvokeContext *>(_localctx)->func_ = match(ExprEngineParser::IDENTIFIER);
    setState(93);
    match(ExprEngineParser::LPAREN);
    setState(94);
    expressionAtom(0);
    setState(99);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprEngineParser::COMMA) {
      setState(95);
      match(ExprEngineParser::COMMA);
      setState(96);
      expressionAtom(0);
      setState(101);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(102);
    match(ExprEngineParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalOperatorContext ------------------------------------------------------------------

ExprEngineParser::LogicalOperatorContext::LogicalOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprEngineParser::LogicalOperatorContext::AND() {
  return getToken(ExprEngineParser::AND, 0);
}

tree::TerminalNode* ExprEngineParser::LogicalOperatorContext::OR() {
  return getToken(ExprEngineParser::OR, 0);
}


size_t ExprEngineParser::LogicalOperatorContext::getRuleIndex() const {
  return ExprEngineParser::RuleLogicalOperator;
}


antlrcpp::Any ExprEngineParser::LogicalOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprEngineVisitor*>(visitor))
    return parserVisitor->visitLogicalOperator(this);
  else
    return visitor->visitChildren(this);
}

ExprEngineParser::LogicalOperatorContext* ExprEngineParser::logicalOperator() {
  LogicalOperatorContext *_localctx = _tracker.createInstance<LogicalOperatorContext>(_ctx, getState());
  enterRule(_localctx, 10, ExprEngineParser::RuleLogicalOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(110);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprEngineParser::AND: {
        enterOuterAlt(_localctx, 1);
        setState(104);
        match(ExprEngineParser::AND);
        break;
      }

      case ExprEngineParser::T__0: {
        enterOuterAlt(_localctx, 2);
        setState(105);
        match(ExprEngineParser::T__0);
        setState(106);
        match(ExprEngineParser::T__0);
        break;
      }

      case ExprEngineParser::OR: {
        enterOuterAlt(_localctx, 3);
        setState(107);
        match(ExprEngineParser::OR);
        break;
      }

      case ExprEngineParser::T__1: {
        enterOuterAlt(_localctx, 4);
        setState(108);
        match(ExprEngineParser::T__1);
        setState(109);
        match(ExprEngineParser::T__1);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignOperatorContext ------------------------------------------------------------------

ExprEngineParser::AssignOperatorContext::AssignOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprEngineParser::AssignOperatorContext::ASSIGN() {
  return getToken(ExprEngineParser::ASSIGN, 0);
}


size_t ExprEngineParser::AssignOperatorContext::getRuleIndex() const {
  return ExprEngineParser::RuleAssignOperator;
}


antlrcpp::Any ExprEngineParser::AssignOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprEngineVisitor*>(visitor))
    return parserVisitor->visitAssignOperator(this);
  else
    return visitor->visitChildren(this);
}

ExprEngineParser::AssignOperatorContext* ExprEngineParser::assignOperator() {
  AssignOperatorContext *_localctx = _tracker.createInstance<AssignOperatorContext>(_ctx, getState());
  enterRule(_localctx, 12, ExprEngineParser::RuleAssignOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    match(ExprEngineParser::ASSIGN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisonOperatorContext ------------------------------------------------------------------

ExprEngineParser::ComparisonOperatorContext::ComparisonOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprEngineParser::ComparisonOperatorContext::getRuleIndex() const {
  return ExprEngineParser::RuleComparisonOperator;
}


antlrcpp::Any ExprEngineParser::ComparisonOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprEngineVisitor*>(visitor))
    return parserVisitor->visitComparisonOperator(this);
  else
    return visitor->visitChildren(this);
}

ExprEngineParser::ComparisonOperatorContext* ExprEngineParser::comparisonOperator() {
  ComparisonOperatorContext *_localctx = _tracker.createInstance<ComparisonOperatorContext>(_ctx, getState());
  enterRule(_localctx, 14, ExprEngineParser::RuleComparisonOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(128);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(114);
      match(ExprEngineParser::T__2);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(115);
      match(ExprEngineParser::T__3);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(116);
      match(ExprEngineParser::T__4);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(117);
      match(ExprEngineParser::T__4);
      setState(118);
      match(ExprEngineParser::T__2);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(119);
      match(ExprEngineParser::T__3);
      setState(120);
      match(ExprEngineParser::T__2);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(121);
      match(ExprEngineParser::T__4);
      setState(122);
      match(ExprEngineParser::T__3);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(123);
      match(ExprEngineParser::T__5);
      setState(124);
      match(ExprEngineParser::T__2);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(125);
      match(ExprEngineParser::T__4);
      setState(126);
      match(ExprEngineParser::T__2);
      setState(127);
      match(ExprEngineParser::T__3);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseWhenContext ------------------------------------------------------------------

ExprEngineParser::CaseWhenContext::CaseWhenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprEngineParser::CaseWhenContext::CASE() {
  return getToken(ExprEngineParser::CASE, 0);
}

tree::TerminalNode* ExprEngineParser::CaseWhenContext::END() {
  return getToken(ExprEngineParser::END, 0);
}

std::vector<ExprEngineParser::CaseItemContext *> ExprEngineParser::CaseWhenContext::caseItem() {
  return getRuleContexts<ExprEngineParser::CaseItemContext>();
}

ExprEngineParser::CaseItemContext* ExprEngineParser::CaseWhenContext::caseItem(size_t i) {
  return getRuleContext<ExprEngineParser::CaseItemContext>(i);
}

tree::TerminalNode* ExprEngineParser::CaseWhenContext::ELSE() {
  return getToken(ExprEngineParser::ELSE, 0);
}

ExprEngineParser::ExpressionAtomContext* ExprEngineParser::CaseWhenContext::expressionAtom() {
  return getRuleContext<ExprEngineParser::ExpressionAtomContext>(0);
}


size_t ExprEngineParser::CaseWhenContext::getRuleIndex() const {
  return ExprEngineParser::RuleCaseWhen;
}


antlrcpp::Any ExprEngineParser::CaseWhenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprEngineVisitor*>(visitor))
    return parserVisitor->visitCaseWhen(this);
  else
    return visitor->visitChildren(this);
}

ExprEngineParser::CaseWhenContext* ExprEngineParser::caseWhen() {
  CaseWhenContext *_localctx = _tracker.createInstance<CaseWhenContext>(_ctx, getState());
  enterRule(_localctx, 16, ExprEngineParser::RuleCaseWhen);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    match(ExprEngineParser::CASE);
    setState(132); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(131);
      caseItem();
      setState(134); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ExprEngineParser::WHEN);
    setState(138);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprEngineParser::ELSE) {
      setState(136);
      match(ExprEngineParser::ELSE);
      setState(137);
      dynamic_cast<CaseWhenContext *>(_localctx)->elseArg = expressionAtom(0);
    }
    setState(140);
    match(ExprEngineParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseItemContext ------------------------------------------------------------------

ExprEngineParser::CaseItemContext::CaseItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprEngineParser::CaseItemContext::WHEN() {
  return getToken(ExprEngineParser::WHEN, 0);
}

tree::TerminalNode* ExprEngineParser::CaseItemContext::THEN() {
  return getToken(ExprEngineParser::THEN, 0);
}

ExprEngineParser::PredicateContext* ExprEngineParser::CaseItemContext::predicate() {
  return getRuleContext<ExprEngineParser::PredicateContext>(0);
}

ExprEngineParser::ExpressionAtomContext* ExprEngineParser::CaseItemContext::expressionAtom() {
  return getRuleContext<ExprEngineParser::ExpressionAtomContext>(0);
}


size_t ExprEngineParser::CaseItemContext::getRuleIndex() const {
  return ExprEngineParser::RuleCaseItem;
}


antlrcpp::Any ExprEngineParser::CaseItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprEngineVisitor*>(visitor))
    return parserVisitor->visitCaseItem(this);
  else
    return visitor->visitChildren(this);
}

ExprEngineParser::CaseItemContext* ExprEngineParser::caseItem() {
  CaseItemContext *_localctx = _tracker.createInstance<CaseItemContext>(_ctx, getState());
  enterRule(_localctx, 18, ExprEngineParser::RuleCaseItem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    match(ExprEngineParser::WHEN);
    setState(143);
    dynamic_cast<CaseItemContext *>(_localctx)->condition = predicate(0);
    setState(144);
    match(ExprEngineParser::THEN);
    setState(145);
    dynamic_cast<CaseItemContext *>(_localctx)->consequent = expressionAtom(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

ExprEngineParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprEngineParser::StringLiteralContext* ExprEngineParser::ConstantContext::stringLiteral() {
  return getRuleContext<ExprEngineParser::StringLiteralContext>(0);
}

ExprEngineParser::DecimalLiteralContext* ExprEngineParser::ConstantContext::decimalLiteral() {
  return getRuleContext<ExprEngineParser::DecimalLiteralContext>(0);
}

ExprEngineParser::FloatLiteralContext* ExprEngineParser::ConstantContext::floatLiteral() {
  return getRuleContext<ExprEngineParser::FloatLiteralContext>(0);
}

tree::TerminalNode* ExprEngineParser::ConstantContext::MINUS() {
  return getToken(ExprEngineParser::MINUS, 0);
}

ExprEngineParser::BooleanLiteralContext* ExprEngineParser::ConstantContext::booleanLiteral() {
  return getRuleContext<ExprEngineParser::BooleanLiteralContext>(0);
}

tree::TerminalNode* ExprEngineParser::ConstantContext::IDENTIFIER() {
  return getToken(ExprEngineParser::IDENTIFIER, 0);
}


size_t ExprEngineParser::ConstantContext::getRuleIndex() const {
  return ExprEngineParser::RuleConstant;
}


antlrcpp::Any ExprEngineParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprEngineVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}

ExprEngineParser::ConstantContext* ExprEngineParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 20, ExprEngineParser::RuleConstant);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(154);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(147);
      stringLiteral();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(148);
      decimalLiteral();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(149);
      floatLiteral();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(150);
      match(ExprEngineParser::MINUS);
      setState(151);
      decimalLiteral();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(152);
      booleanLiteral();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(153);
      match(ExprEngineParser::IDENTIFIER);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringLiteralContext ------------------------------------------------------------------

ExprEngineParser::StringLiteralContext::StringLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ExprEngineParser::StringLiteralContext::STRING_LITERAL() {
  return getTokens(ExprEngineParser::STRING_LITERAL);
}

tree::TerminalNode* ExprEngineParser::StringLiteralContext::STRING_LITERAL(size_t i) {
  return getToken(ExprEngineParser::STRING_LITERAL, i);
}


size_t ExprEngineParser::StringLiteralContext::getRuleIndex() const {
  return ExprEngineParser::RuleStringLiteral;
}


antlrcpp::Any ExprEngineParser::StringLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprEngineVisitor*>(visitor))
    return parserVisitor->visitStringLiteral(this);
  else
    return visitor->visitChildren(this);
}

ExprEngineParser::StringLiteralContext* ExprEngineParser::stringLiteral() {
  StringLiteralContext *_localctx = _tracker.createInstance<StringLiteralContext>(_ctx, getState());
  enterRule(_localctx, 22, ExprEngineParser::RuleStringLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(163);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(156);
      match(ExprEngineParser::STRING_LITERAL);
      setState(158); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(157);
                match(ExprEngineParser::STRING_LITERAL);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(160); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(162);
      match(ExprEngineParser::STRING_LITERAL);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FloatLiteralContext ------------------------------------------------------------------

ExprEngineParser::FloatLiteralContext::FloatLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprEngineParser::DecimalLiteralContext *> ExprEngineParser::FloatLiteralContext::decimalLiteral() {
  return getRuleContexts<ExprEngineParser::DecimalLiteralContext>();
}

ExprEngineParser::DecimalLiteralContext* ExprEngineParser::FloatLiteralContext::decimalLiteral(size_t i) {
  return getRuleContext<ExprEngineParser::DecimalLiteralContext>(i);
}

tree::TerminalNode* ExprEngineParser::FloatLiteralContext::DOT() {
  return getToken(ExprEngineParser::DOT, 0);
}


size_t ExprEngineParser::FloatLiteralContext::getRuleIndex() const {
  return ExprEngineParser::RuleFloatLiteral;
}


antlrcpp::Any ExprEngineParser::FloatLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprEngineVisitor*>(visitor))
    return parserVisitor->visitFloatLiteral(this);
  else
    return visitor->visitChildren(this);
}

ExprEngineParser::FloatLiteralContext* ExprEngineParser::floatLiteral() {
  FloatLiteralContext *_localctx = _tracker.createInstance<FloatLiteralContext>(_ctx, getState());
  enterRule(_localctx, 24, ExprEngineParser::RuleFloatLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(165);
    decimalLiteral();
    setState(166);
    match(ExprEngineParser::DOT);
    setState(167);
    decimalLiteral();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecimalLiteralContext ------------------------------------------------------------------

ExprEngineParser::DecimalLiteralContext::DecimalLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprEngineParser::DecimalLiteralContext::DECIMAL_LITERAL() {
  return getToken(ExprEngineParser::DECIMAL_LITERAL, 0);
}


size_t ExprEngineParser::DecimalLiteralContext::getRuleIndex() const {
  return ExprEngineParser::RuleDecimalLiteral;
}


antlrcpp::Any ExprEngineParser::DecimalLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprEngineVisitor*>(visitor))
    return parserVisitor->visitDecimalLiteral(this);
  else
    return visitor->visitChildren(this);
}

ExprEngineParser::DecimalLiteralContext* ExprEngineParser::decimalLiteral() {
  DecimalLiteralContext *_localctx = _tracker.createInstance<DecimalLiteralContext>(_ctx, getState());
  enterRule(_localctx, 26, ExprEngineParser::RuleDecimalLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
    match(ExprEngineParser::DECIMAL_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanLiteralContext ------------------------------------------------------------------

ExprEngineParser::BooleanLiteralContext::BooleanLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprEngineParser::BooleanLiteralContext::TRUE() {
  return getToken(ExprEngineParser::TRUE, 0);
}

tree::TerminalNode* ExprEngineParser::BooleanLiteralContext::FALSE() {
  return getToken(ExprEngineParser::FALSE, 0);
}


size_t ExprEngineParser::BooleanLiteralContext::getRuleIndex() const {
  return ExprEngineParser::RuleBooleanLiteral;
}


antlrcpp::Any ExprEngineParser::BooleanLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprEngineVisitor*>(visitor))
    return parserVisitor->visitBooleanLiteral(this);
  else
    return visitor->visitChildren(this);
}

ExprEngineParser::BooleanLiteralContext* ExprEngineParser::booleanLiteral() {
  BooleanLiteralContext *_localctx = _tracker.createInstance<BooleanLiteralContext>(_ctx, getState());
  enterRule(_localctx, 28, ExprEngineParser::RuleBooleanLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
    _la = _input->LA(1);
    if (!(_la == ExprEngineParser::FALSE

    || _la == ExprEngineParser::TRUE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamContext ------------------------------------------------------------------

ExprEngineParser::ParamContext::ParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprEngineParser::ParamIdentifierContext* ExprEngineParser::ParamContext::paramIdentifier() {
  return getRuleContext<ExprEngineParser::ParamIdentifierContext>(0);
}


size_t ExprEngineParser::ParamContext::getRuleIndex() const {
  return ExprEngineParser::RuleParam;
}


antlrcpp::Any ExprEngineParser::ParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprEngineVisitor*>(visitor))
    return parserVisitor->visitParam(this);
  else
    return visitor->visitChildren(this);
}

ExprEngineParser::ParamContext* ExprEngineParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 30, ExprEngineParser::RuleParam);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(173);
    match(ExprEngineParser::T__6);
    setState(174);
    dynamic_cast<ParamContext *>(_localctx)->name = paramIdentifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamIdentifierContext ------------------------------------------------------------------

ExprEngineParser::ParamIdentifierContext::ParamIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ExprEngineParser::ParamIdentifierContext::IDENTIFIER() {
  return getTokens(ExprEngineParser::IDENTIFIER);
}

tree::TerminalNode* ExprEngineParser::ParamIdentifierContext::IDENTIFIER(size_t i) {
  return getToken(ExprEngineParser::IDENTIFIER, i);
}


size_t ExprEngineParser::ParamIdentifierContext::getRuleIndex() const {
  return ExprEngineParser::RuleParamIdentifier;
}


antlrcpp::Any ExprEngineParser::ParamIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprEngineVisitor*>(visitor))
    return parserVisitor->visitParamIdentifier(this);
  else
    return visitor->visitChildren(this);
}

ExprEngineParser::ParamIdentifierContext* ExprEngineParser::paramIdentifier() {
  ParamIdentifierContext *_localctx = _tracker.createInstance<ParamIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 32, ExprEngineParser::RuleParamIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(176);
    match(ExprEngineParser::IDENTIFIER);
    setState(181);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(177);
        matchWildcard();
        setState(178);
        match(ExprEngineParser::IDENTIFIER); 
      }
      setState(183);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MathPmOperatorContext ------------------------------------------------------------------

ExprEngineParser::MathPmOperatorContext::MathPmOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprEngineParser::MathPmOperatorContext::PLUS() {
  return getToken(ExprEngineParser::PLUS, 0);
}

tree::TerminalNode* ExprEngineParser::MathPmOperatorContext::MINUS() {
  return getToken(ExprEngineParser::MINUS, 0);
}


size_t ExprEngineParser::MathPmOperatorContext::getRuleIndex() const {
  return ExprEngineParser::RuleMathPmOperator;
}


antlrcpp::Any ExprEngineParser::MathPmOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprEngineVisitor*>(visitor))
    return parserVisitor->visitMathPmOperator(this);
  else
    return visitor->visitChildren(this);
}

ExprEngineParser::MathPmOperatorContext* ExprEngineParser::mathPmOperator() {
  MathPmOperatorContext *_localctx = _tracker.createInstance<MathPmOperatorContext>(_ctx, getState());
  enterRule(_localctx, 34, ExprEngineParser::RuleMathPmOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(184);
    _la = _input->LA(1);
    if (!(_la == ExprEngineParser::MINUS

    || _la == ExprEngineParser::PLUS)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MathMdOperatorContext ------------------------------------------------------------------

ExprEngineParser::MathMdOperatorContext::MathMdOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprEngineParser::MathMdOperatorContext::MUL() {
  return getToken(ExprEngineParser::MUL, 0);
}

tree::TerminalNode* ExprEngineParser::MathMdOperatorContext::DIV() {
  return getToken(ExprEngineParser::DIV, 0);
}


size_t ExprEngineParser::MathMdOperatorContext::getRuleIndex() const {
  return ExprEngineParser::RuleMathMdOperator;
}


antlrcpp::Any ExprEngineParser::MathMdOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprEngineVisitor*>(visitor))
    return parserVisitor->visitMathMdOperator(this);
  else
    return visitor->visitChildren(this);
}

ExprEngineParser::MathMdOperatorContext* ExprEngineParser::mathMdOperator() {
  MathMdOperatorContext *_localctx = _tracker.createInstance<MathMdOperatorContext>(_ctx, getState());
  enterRule(_localctx, 36, ExprEngineParser::RuleMathMdOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(186);
    _la = _input->LA(1);
    if (!(_la == ExprEngineParser::DIV

    || _la == ExprEngineParser::MUL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool ExprEngineParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return predicateSempred(dynamic_cast<PredicateContext *>(context), predicateIndex);
    case 3: return expressionAtomSempred(dynamic_cast<ExpressionAtomContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ExprEngineParser::predicateSempred(PredicateContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool ExprEngineParser::expressionAtomSempred(ExpressionAtomContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 2);
    case 3: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> ExprEngineParser::_decisionToDFA;
atn::PredictionContextCache ExprEngineParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ExprEngineParser::_atn;
std::vector<uint16_t> ExprEngineParser::_serializedATN;

std::vector<std::string> ExprEngineParser::_ruleNames = {
  "assignRule", "expression", "predicate", "expressionAtom", "funcInvoke", 
  "logicalOperator", "assignOperator", "comparisonOperator", "caseWhen", 
  "caseItem", "constant", "stringLiteral", "floatLiteral", "decimalLiteral", 
  "booleanLiteral", "param", "paramIdentifier", "mathPmOperator", "mathMdOperator"
};

std::vector<std::string> ExprEngineParser::_literalNames = {
  "", "'&'", "'|'", "'='", "'>'", "'<'", "'!'", "'$$'", "','", "'('", "')'", 
  "", "", "", "'/'", "'.'", "':='", "", "", "", "", "'-'", "'*'", "", "", 
  "'+'"
};

std::vector<std::string> ExprEngineParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "COMMA", "LPAREN", "RPAREN", "AND", "CASE", 
  "DECIMAL_LITERAL", "DIV", "DOT", "ASSIGN", "ELSE", "END", "FALSE", "LIKE", 
  "MINUS", "MUL", "NOT", "OR", "PLUS", "STRING_LITERAL", "THEN", "TRUE", 
  "WHEN", "IDENTIFIER", "SPACES"
};

dfa::Vocabulary ExprEngineParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ExprEngineParser::_tokenNames;

ExprEngineParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x21, 0xbf, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x5, 0x4, 0x32, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x5, 0x4, 0x38, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x42, 0xa, 0x4, 0xc, 0x4, 
    0xe, 0x4, 0x45, 0xb, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x50, 0xa, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x7, 0x5, 0x5a, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x5d, 0xb, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x64, 0xa, 
    0x6, 0xc, 0x6, 0xe, 0x6, 0x67, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x71, 0xa, 
    0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x83, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 
    0x6, 0xa, 0x87, 0xa, 0xa, 0xd, 0xa, 0xe, 0xa, 0x88, 0x3, 0xa, 0x3, 0xa, 
    0x5, 0xa, 0x8d, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x9d, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 
    0x6, 0xd, 0xa1, 0xa, 0xd, 0xd, 0xd, 0xe, 0xd, 0xa2, 0x3, 0xd, 0x5, 0xd, 
    0xa6, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0xb6, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 
    0xb9, 0xb, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x2, 0x4, 0x6, 0x8, 0x15, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
    0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x2, 0x5, 
    0x4, 0x2, 0x15, 0x15, 0x1e, 0x1e, 0x4, 0x2, 0x17, 0x17, 0x1b, 0x1b, 
    0x4, 0x2, 0x10, 0x10, 0x18, 0x18, 0x2, 0xca, 0x2, 0x28, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x6, 0x37, 0x3, 0x2, 0x2, 0x2, 0x8, 
    0x4f, 0x3, 0x2, 0x2, 0x2, 0xa, 0x5e, 0x3, 0x2, 0x2, 0x2, 0xc, 0x70, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x72, 0x3, 0x2, 0x2, 0x2, 0x10, 0x82, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x84, 0x3, 0x2, 0x2, 0x2, 0x14, 0x90, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x18, 0xa5, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xab, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0xad, 0x3, 0x2, 0x2, 0x2, 0x20, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0xb2, 0x3, 0x2, 0x2, 0x2, 0x24, 0xba, 0x3, 0x2, 0x2, 0x2, 0x26, 0xbc, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x5, 0x20, 0x11, 0x2, 0x29, 0x2a, 0x5, 
    0xe, 0x8, 0x2, 0x2a, 0x2b, 0x5, 0x4, 0x3, 0x2, 0x2b, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x2c, 0x2d, 0x5, 0x6, 0x4, 0x2, 0x2d, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0x2e, 0x2f, 0x8, 0x4, 0x1, 0x2, 0x2f, 0x31, 0x5, 0x8, 0x5, 0x2, 
    0x30, 0x32, 0x7, 0x19, 0x2, 0x2, 0x31, 0x30, 0x3, 0x2, 0x2, 0x2, 0x31, 
    0x32, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x3, 0x2, 0x2, 0x2, 0x33, 0x34, 
    0x7, 0x16, 0x2, 0x2, 0x34, 0x35, 0x5, 0x8, 0x5, 0x2, 0x35, 0x38, 0x3, 
    0x2, 0x2, 0x2, 0x36, 0x38, 0x5, 0x8, 0x5, 0x2, 0x37, 0x2e, 0x3, 0x2, 
    0x2, 0x2, 0x37, 0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 0x43, 0x3, 0x2, 0x2, 
    0x2, 0x39, 0x3a, 0xc, 0x6, 0x2, 0x2, 0x3a, 0x3b, 0x5, 0xc, 0x7, 0x2, 
    0x3b, 0x3c, 0x5, 0x6, 0x4, 0x7, 0x3c, 0x42, 0x3, 0x2, 0x2, 0x2, 0x3d, 
    0x3e, 0xc, 0x5, 0x2, 0x2, 0x3e, 0x3f, 0x5, 0x10, 0x9, 0x2, 0x3f, 0x40, 
    0x5, 0x6, 0x4, 0x6, 0x40, 0x42, 0x3, 0x2, 0x2, 0x2, 0x41, 0x39, 0x3, 
    0x2, 0x2, 0x2, 0x41, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x42, 0x45, 0x3, 0x2, 
    0x2, 0x2, 0x43, 0x41, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x3, 0x2, 0x2, 
    0x2, 0x44, 0x7, 0x3, 0x2, 0x2, 0x2, 0x45, 0x43, 0x3, 0x2, 0x2, 0x2, 
    0x46, 0x47, 0x8, 0x5, 0x1, 0x2, 0x47, 0x50, 0x5, 0x16, 0xc, 0x2, 0x48, 
    0x50, 0x5, 0x20, 0x11, 0x2, 0x49, 0x50, 0x5, 0x12, 0xa, 0x2, 0x4a, 0x50, 
    0x5, 0xa, 0x6, 0x2, 0x4b, 0x4c, 0x7, 0xb, 0x2, 0x2, 0x4c, 0x4d, 0x5, 
    0x4, 0x3, 0x2, 0x4d, 0x4e, 0x7, 0xc, 0x2, 0x2, 0x4e, 0x50, 0x3, 0x2, 
    0x2, 0x2, 0x4f, 0x46, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x48, 0x3, 0x2, 0x2, 
    0x2, 0x4f, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x4a, 0x3, 0x2, 0x2, 0x2, 
    0x4f, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x50, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x51, 
    0x52, 0xc, 0x4, 0x2, 0x2, 0x52, 0x53, 0x5, 0x26, 0x14, 0x2, 0x53, 0x54, 
    0x5, 0x8, 0x5, 0x5, 0x54, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0xc, 
    0x3, 0x2, 0x2, 0x56, 0x57, 0x5, 0x24, 0x13, 0x2, 0x57, 0x58, 0x5, 0x8, 
    0x5, 0x4, 0x58, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x59, 0x51, 0x3, 0x2, 0x2, 
    0x2, 0x59, 0x55, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5d, 0x3, 0x2, 0x2, 0x2, 
    0x5b, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5c, 
    0x9, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 
    0x7, 0x20, 0x2, 0x2, 0x5f, 0x60, 0x7, 0xb, 0x2, 0x2, 0x60, 0x65, 0x5, 
    0x8, 0x5, 0x2, 0x61, 0x62, 0x7, 0xa, 0x2, 0x2, 0x62, 0x64, 0x5, 0x8, 
    0x5, 0x2, 0x63, 0x61, 0x3, 0x2, 0x2, 0x2, 0x64, 0x67, 0x3, 0x2, 0x2, 
    0x2, 0x65, 0x63, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x3, 0x2, 0x2, 0x2, 
    0x66, 0x68, 0x3, 0x2, 0x2, 0x2, 0x67, 0x65, 0x3, 0x2, 0x2, 0x2, 0x68, 
    0x69, 0x7, 0xc, 0x2, 0x2, 0x69, 0xb, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x71, 
    0x7, 0xd, 0x2, 0x2, 0x6b, 0x6c, 0x7, 0x3, 0x2, 0x2, 0x6c, 0x71, 0x7, 
    0x3, 0x2, 0x2, 0x6d, 0x71, 0x7, 0x1a, 0x2, 0x2, 0x6e, 0x6f, 0x7, 0x4, 
    0x2, 0x2, 0x6f, 0x71, 0x7, 0x4, 0x2, 0x2, 0x70, 0x6a, 0x3, 0x2, 0x2, 
    0x2, 0x70, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x70, 0x6d, 0x3, 0x2, 0x2, 0x2, 
    0x70, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x71, 0xd, 0x3, 0x2, 0x2, 0x2, 0x72, 
    0x73, 0x7, 0x12, 0x2, 0x2, 0x73, 0xf, 0x3, 0x2, 0x2, 0x2, 0x74, 0x83, 
    0x7, 0x5, 0x2, 0x2, 0x75, 0x83, 0x7, 0x6, 0x2, 0x2, 0x76, 0x83, 0x7, 
    0x7, 0x2, 0x2, 0x77, 0x78, 0x7, 0x7, 0x2, 0x2, 0x78, 0x83, 0x7, 0x5, 
    0x2, 0x2, 0x79, 0x7a, 0x7, 0x6, 0x2, 0x2, 0x7a, 0x83, 0x7, 0x5, 0x2, 
    0x2, 0x7b, 0x7c, 0x7, 0x7, 0x2, 0x2, 0x7c, 0x83, 0x7, 0x6, 0x2, 0x2, 
    0x7d, 0x7e, 0x7, 0x8, 0x2, 0x2, 0x7e, 0x83, 0x7, 0x5, 0x2, 0x2, 0x7f, 
    0x80, 0x7, 0x7, 0x2, 0x2, 0x80, 0x81, 0x7, 0x5, 0x2, 0x2, 0x81, 0x83, 
    0x7, 0x6, 0x2, 0x2, 0x82, 0x74, 0x3, 0x2, 0x2, 0x2, 0x82, 0x75, 0x3, 
    0x2, 0x2, 0x2, 0x82, 0x76, 0x3, 0x2, 0x2, 0x2, 0x82, 0x77, 0x3, 0x2, 
    0x2, 0x2, 0x82, 0x79, 0x3, 0x2, 0x2, 0x2, 0x82, 0x7b, 0x3, 0x2, 0x2, 
    0x2, 0x82, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x82, 0x7f, 0x3, 0x2, 0x2, 0x2, 
    0x83, 0x11, 0x3, 0x2, 0x2, 0x2, 0x84, 0x86, 0x7, 0xe, 0x2, 0x2, 0x85, 
    0x87, 0x5, 0x14, 0xb, 0x2, 0x86, 0x85, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 
    0x3, 0x2, 0x2, 0x2, 0x88, 0x86, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x3, 
    0x2, 0x2, 0x2, 0x89, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x7, 0x13, 
    0x2, 0x2, 0x8b, 0x8d, 0x5, 0x8, 0x5, 0x2, 0x8c, 0x8a, 0x3, 0x2, 0x2, 
    0x2, 0x8c, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x3, 0x2, 0x2, 0x2, 
    0x8e, 0x8f, 0x7, 0x14, 0x2, 0x2, 0x8f, 0x13, 0x3, 0x2, 0x2, 0x2, 0x90, 
    0x91, 0x7, 0x1f, 0x2, 0x2, 0x91, 0x92, 0x5, 0x6, 0x4, 0x2, 0x92, 0x93, 
    0x7, 0x1d, 0x2, 0x2, 0x93, 0x94, 0x5, 0x8, 0x5, 0x2, 0x94, 0x15, 0x3, 
    0x2, 0x2, 0x2, 0x95, 0x9d, 0x5, 0x18, 0xd, 0x2, 0x96, 0x9d, 0x5, 0x1c, 
    0xf, 0x2, 0x97, 0x9d, 0x5, 0x1a, 0xe, 0x2, 0x98, 0x99, 0x7, 0x17, 0x2, 
    0x2, 0x99, 0x9d, 0x5, 0x1c, 0xf, 0x2, 0x9a, 0x9d, 0x5, 0x1e, 0x10, 0x2, 
    0x9b, 0x9d, 0x7, 0x20, 0x2, 0x2, 0x9c, 0x95, 0x3, 0x2, 0x2, 0x2, 0x9c, 
    0x96, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x97, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x98, 
    0x3, 0x2, 0x2, 0x2, 0x9c, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9b, 0x3, 
    0x2, 0x2, 0x2, 0x9d, 0x17, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa0, 0x7, 0x1c, 
    0x2, 0x2, 0x9f, 0xa1, 0x7, 0x1c, 0x2, 0x2, 0xa0, 0x9f, 0x3, 0x2, 0x2, 
    0x2, 0xa1, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa0, 0x3, 0x2, 0x2, 0x2, 
    0xa2, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa4, 
    0xa6, 0x7, 0x1c, 0x2, 0x2, 0xa5, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa4, 
    0x3, 0x2, 0x2, 0x2, 0xa6, 0x19, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x5, 
    0x1c, 0xf, 0x2, 0xa8, 0xa9, 0x7, 0x11, 0x2, 0x2, 0xa9, 0xaa, 0x5, 0x1c, 
    0xf, 0x2, 0xaa, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x7, 0xf, 0x2, 
    0x2, 0xac, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0x9, 0x2, 0x2, 0x2, 
    0xae, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 0x7, 0x9, 0x2, 0x2, 0xb0, 
    0xb1, 0x5, 0x22, 0x12, 0x2, 0xb1, 0x21, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb7, 
    0x7, 0x20, 0x2, 0x2, 0xb3, 0xb4, 0xb, 0x2, 0x2, 0x2, 0xb4, 0xb6, 0x7, 
    0x20, 0x2, 0x2, 0xb5, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb9, 0x3, 0x2, 
    0x2, 0x2, 0xb7, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x3, 0x2, 0x2, 
    0x2, 0xb8, 0x23, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb7, 0x3, 0x2, 0x2, 0x2, 
    0xba, 0xbb, 0x9, 0x3, 0x2, 0x2, 0xbb, 0x25, 0x3, 0x2, 0x2, 0x2, 0xbc, 
    0xbd, 0x9, 0x4, 0x2, 0x2, 0xbd, 0x27, 0x3, 0x2, 0x2, 0x2, 0x12, 0x31, 
    0x37, 0x41, 0x43, 0x4f, 0x59, 0x5b, 0x65, 0x70, 0x82, 0x88, 0x8c, 0x9c, 
    0xa2, 0xa5, 0xb7, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ExprEngineParser::Initializer ExprEngineParser::_init;
