
// Generated from ExprEngine.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  ExprEngineParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    COMMA = 8, LPAREN = 9, RPAREN = 10, AND = 11, CASE = 12, DECIMAL_LITERAL = 13, 
    DIV = 14, DOT = 15, ASSIGN = 16, ELSE = 17, END = 18, FALSE = 19, LIKE = 20, 
    MINUS = 21, MUL = 22, NOT = 23, OR = 24, PLUS = 25, STRING_LITERAL = 26, 
    THEN = 27, TRUE = 28, WHEN = 29, IDENTIFIER = 30, SPACES = 31
  };

  enum {
    RuleAssignRule = 0, RuleExpression = 1, RulePredicate = 2, RuleExpressionAtom = 3, 
    RuleFuncInvoke = 4, RuleLogicalOperator = 5, RuleAssignOperator = 6, 
    RuleComparisonOperator = 7, RuleCaseWhen = 8, RuleCaseItem = 9, RuleConstant = 10, 
    RuleStringLiteral = 11, RuleFloatLiteral = 12, RuleDecimalLiteral = 13, 
    RuleBooleanLiteral = 14, RuleParam = 15, RuleParamIdentifier = 16, RuleMathPmOperator = 17, 
    RuleMathMdOperator = 18
  };

  ExprEngineParser(antlr4::TokenStream *input);
  ~ExprEngineParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class AssignRuleContext;
  class ExpressionContext;
  class PredicateContext;
  class ExpressionAtomContext;
  class FuncInvokeContext;
  class LogicalOperatorContext;
  class AssignOperatorContext;
  class ComparisonOperatorContext;
  class CaseWhenContext;
  class CaseItemContext;
  class ConstantContext;
  class StringLiteralContext;
  class FloatLiteralContext;
  class DecimalLiteralContext;
  class BooleanLiteralContext;
  class ParamContext;
  class ParamIdentifierContext;
  class MathPmOperatorContext;
  class MathMdOperatorContext; 

  class  AssignRuleContext : public antlr4::ParserRuleContext {
  public:
    AssignRuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AssignRuleContext() = default;
    void copyFrom(AssignRuleContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AssignExpressionContext : public AssignRuleContext {
  public:
    AssignExpressionContext(AssignRuleContext *ctx);

    ExprEngineParser::ParamContext *left = nullptr;
    ExprEngineParser::ExpressionContext *right = nullptr;
    AssignOperatorContext *assignOperator();
    ParamContext *param();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AssignRuleContext* assignRule();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PredicateContext *predicate();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  PredicateContext : public antlr4::ParserRuleContext {
  public:
    PredicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PredicateContext() = default;
    void copyFrom(PredicateContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExprAtomPredicateContext : public PredicateContext {
  public:
    ExprAtomPredicateContext(PredicateContext *ctx);

    ExpressionAtomContext *expressionAtom();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ComparisonPredicateContext : public PredicateContext {
  public:
    ComparisonPredicateContext(PredicateContext *ctx);

    ExprEngineParser::PredicateContext *left = nullptr;
    ExprEngineParser::PredicateContext *right = nullptr;
    ComparisonOperatorContext *comparisonOperator();
    std::vector<PredicateContext *> predicate();
    PredicateContext* predicate(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicalPredicateContext : public PredicateContext {
  public:
    LogicalPredicateContext(PredicateContext *ctx);

    ExprEngineParser::PredicateContext *left = nullptr;
    ExprEngineParser::PredicateContext *right = nullptr;
    LogicalOperatorContext *logicalOperator();
    std::vector<PredicateContext *> predicate();
    PredicateContext* predicate(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LikePredicateContext : public PredicateContext {
  public:
    LikePredicateContext(PredicateContext *ctx);

    antlr4::Token *notOperator = nullptr;
    std::vector<ExpressionAtomContext *> expressionAtom();
    ExpressionAtomContext* expressionAtom(size_t i);
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *NOT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PredicateContext* predicate();
  PredicateContext* predicate(int precedence);
  class  ExpressionAtomContext : public antlr4::ParserRuleContext {
  public:
    ExpressionAtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionAtomContext() = default;
    void copyFrom(ExpressionAtomContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BracketExprAtomContext : public ExpressionAtomContext {
  public:
    BracketExprAtomContext(ExpressionAtomContext *ctx);

    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParamExprAtomContext : public ExpressionAtomContext {
  public:
    ParamExprAtomContext(ExpressionAtomContext *ctx);

    ParamContext *param();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MathMDExprAtomContext : public ExpressionAtomContext {
  public:
    MathMDExprAtomContext(ExpressionAtomContext *ctx);

    ExprEngineParser::ExpressionAtomContext *left = nullptr;
    ExprEngineParser::ExpressionAtomContext *right = nullptr;
    MathMdOperatorContext *mathMdOperator();
    std::vector<ExpressionAtomContext *> expressionAtom();
    ExpressionAtomContext* expressionAtom(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FuncInvokeExprAtomContext : public ExpressionAtomContext {
  public:
    FuncInvokeExprAtomContext(ExpressionAtomContext *ctx);

    FuncInvokeContext *funcInvoke();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstantExprAtomContext : public ExpressionAtomContext {
  public:
    ConstantExprAtomContext(ExpressionAtomContext *ctx);

    ConstantContext *constant();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CaseWhenExprAtomContext : public ExpressionAtomContext {
  public:
    CaseWhenExprAtomContext(ExpressionAtomContext *ctx);

    CaseWhenContext *caseWhen();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MathPMExprAtomContext : public ExpressionAtomContext {
  public:
    MathPMExprAtomContext(ExpressionAtomContext *ctx);

    ExprEngineParser::ExpressionAtomContext *left = nullptr;
    ExprEngineParser::ExpressionAtomContext *right = nullptr;
    MathPmOperatorContext *mathPmOperator();
    std::vector<ExpressionAtomContext *> expressionAtom();
    ExpressionAtomContext* expressionAtom(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionAtomContext* expressionAtom();
  ExpressionAtomContext* expressionAtom(int precedence);
  class  FuncInvokeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *func_ = nullptr;;
    FuncInvokeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<ExpressionAtomContext *> expressionAtom();
    ExpressionAtomContext* expressionAtom(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *IDENTIFIER();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncInvokeContext* funcInvoke();

  class  LogicalOperatorContext : public antlr4::ParserRuleContext {
  public:
    LogicalOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalOperatorContext* logicalOperator();

  class  AssignOperatorContext : public antlr4::ParserRuleContext {
  public:
    AssignOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignOperatorContext* assignOperator();

  class  ComparisonOperatorContext : public antlr4::ParserRuleContext {
  public:
    ComparisonOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComparisonOperatorContext* comparisonOperator();

  class  CaseWhenContext : public antlr4::ParserRuleContext {
  public:
    ExprEngineParser::ExpressionAtomContext *elseArg = nullptr;;
    CaseWhenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *END();
    std::vector<CaseItemContext *> caseItem();
    CaseItemContext* caseItem(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    ExpressionAtomContext *expressionAtom();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaseWhenContext* caseWhen();

  class  CaseItemContext : public antlr4::ParserRuleContext {
  public:
    ExprEngineParser::PredicateContext *condition = nullptr;;
    ExprEngineParser::ExpressionAtomContext *consequent = nullptr;;
    CaseItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *THEN();
    PredicateContext *predicate();
    ExpressionAtomContext *expressionAtom();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaseItemContext* caseItem();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringLiteralContext *stringLiteral();
    DecimalLiteralContext *decimalLiteral();
    FloatLiteralContext *floatLiteral();
    antlr4::tree::TerminalNode *MINUS();
    BooleanLiteralContext *booleanLiteral();
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantContext* constant();

  class  StringLiteralContext : public antlr4::ParserRuleContext {
  public:
    StringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringLiteralContext* stringLiteral();

  class  FloatLiteralContext : public antlr4::ParserRuleContext {
  public:
    FloatLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);
    antlr4::tree::TerminalNode *DOT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FloatLiteralContext* floatLiteral();

  class  DecimalLiteralContext : public antlr4::ParserRuleContext {
  public:
    DecimalLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL_LITERAL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecimalLiteralContext* decimalLiteral();

  class  BooleanLiteralContext : public antlr4::ParserRuleContext {
  public:
    BooleanLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooleanLiteralContext* booleanLiteral();

  class  ParamContext : public antlr4::ParserRuleContext {
  public:
    ExprEngineParser::ParamIdentifierContext *name = nullptr;;
    ParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParamIdentifierContext *paramIdentifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamContext* param();

  class  ParamIdentifierContext : public antlr4::ParserRuleContext {
  public:
    ParamIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamIdentifierContext* paramIdentifier();

  class  MathPmOperatorContext : public antlr4::ParserRuleContext {
  public:
    MathPmOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MathPmOperatorContext* mathPmOperator();

  class  MathMdOperatorContext : public antlr4::ParserRuleContext {
  public:
    MathMdOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MathMdOperatorContext* mathMdOperator();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool predicateSempred(PredicateContext *_localctx, size_t predicateIndex);
  bool expressionAtomSempred(ExpressionAtomContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

