
// Generated from ExprEngine.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  ExprEngineLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    COMMA = 8, LPAREN = 9, RPAREN = 10, AND = 11, CASE = 12, DECIMAL_LITERAL = 13, 
    DIV = 14, DOT = 15, ASSIGN = 16, ELSE = 17, END = 18, FALSE = 19, LIKE = 20, 
    MINUS = 21, MUL = 22, NOT = 23, OR = 24, PLUS = 25, STRING_LITERAL = 26, 
    THEN = 27, TRUE = 28, WHEN = 29, IDENTIFIER = 30, SPACES = 31
  };

  ExprEngineLexer(antlr4::CharStream *input);
  ~ExprEngineLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

