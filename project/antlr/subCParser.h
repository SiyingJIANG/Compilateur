
// Generated from C:/Users/Gheorghe/Desktop/COMP/project/antlr\subC.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"




class  subCParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, CHAR = 40, INT32 = 41, INT64 = 42, VOID = 43, BREAK = 44, 
    CONTINUE = 45, WHILE = 46, IF = 47, ELSE = 48, RETURN = 49, PUTCHAR = 50, 
    CHARV = 51, NUMERICV = 52, Whitespace = 53, BlockComment = 54, LineComment = 55, 
    INCLUDE = 56, INCLUDENAME = 57, NAME = 58
  };

  enum {
    RuleProg = 0, RuleDeclaration = 1, RuleType = 2, RuleConst_expr = 3, 
    RuleDecVariable = 4, RuleVar = 5, RuleVarInit = 6, RuleScalarInit = 7, 
    RuleDefFun = 8, RuleListeparam = 9, RuleParam = 10, RuleBloc = 11, RuleStatement = 12, 
    RuleStmtCompound = 13, RuleStmtExpression = 14, RuleStmtWhile = 15, 
    RuleStmtIf = 16, RuleStmtElse = 17, RuleStmtReturn = 18, RuleStmtPutchar = 19, 
    RuleStmtBreak = 20, RuleStmtContinue = 21, RulePrimaryExpression = 22, 
    RulePostfixExpression = 23, RuleFunctionCall = 24, RuleArguments = 25, 
    RuleUnaryExpression = 26, RuleBinaryExpression = 27, RuleAssignmentExpression = 28, 
    RuleAffectation = 29, RuleExpression = 30
  };

  subCParser(antlr4::TokenStream *input);
  ~subCParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgContext;
  class DeclarationContext;
  class TypeContext;
  class Const_exprContext;
  class DecVariableContext;
  class VarContext;
  class VarInitContext;
  class ScalarInitContext;
  class DefFunContext;
  class ListeparamContext;
  class ParamContext;
  class BlocContext;
  class StatementContext;
  class StmtCompoundContext;
  class StmtExpressionContext;
  class StmtWhileContext;
  class StmtIfContext;
  class StmtElseContext;
  class StmtReturnContext;
  class StmtPutcharContext;
  class StmtBreakContext;
  class StmtContinueContext;
  class PrimaryExpressionContext;
  class PostfixExpressionContext;
  class FunctionCallContext;
  class ArgumentsContext;
  class UnaryExpressionContext;
  class BinaryExpressionContext;
  class AssignmentExpressionContext;
  class AffectationContext;
  class ExpressionContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DeclarationContext() : antlr4::ParserRuleContext() { }
    void copyFrom(DeclarationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FunctionDefContext : public DeclarationContext {
  public:
    FunctionDefContext(DeclarationContext *ctx);

    DefFunContext *defFun();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VariableDecContext : public DeclarationContext {
  public:
    VariableDecContext(DeclarationContext *ctx);

    DecVariableContext *decVariable();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DeclarationContext* declaration();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TypeContext() : antlr4::ParserRuleContext() { }
    void copyFrom(TypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  VoidContext : public TypeContext {
  public:
    VoidContext(TypeContext *ctx);

    antlr4::tree::TerminalNode *VOID();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Int32Context : public TypeContext {
  public:
    Int32Context(TypeContext *ctx);

    antlr4::tree::TerminalNode *INT32();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Int64Context : public TypeContext {
  public:
    Int64Context(TypeContext *ctx);

    antlr4::tree::TerminalNode *INT64();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CharContext : public TypeContext {
  public:
    CharContext(TypeContext *ctx);

    antlr4::tree::TerminalNode *CHAR();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TypeContext* type();

  class  Const_exprContext : public antlr4::ParserRuleContext {
  public:
    Const_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMERICV();
    antlr4::tree::TerminalNode *CHARV();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Const_exprContext* const_expr();

  class  DecVariableContext : public antlr4::ParserRuleContext {
  public:
    DecVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    std::vector<VarContext *> var();
    VarContext* var(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecVariableContext* decVariable();

  class  VarContext : public antlr4::ParserRuleContext {
  public:
    VarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    VarContext() : antlr4::ParserRuleContext() { }
    void copyFrom(VarContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Var_tableContext : public VarContext {
  public:
    Var_tableContext(VarContext *ctx);

    antlr4::tree::TerminalNode *NAME();
    ScalarInitContext *scalarInit();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Var_table_sizeContext : public VarContext {
  public:
    Var_table_sizeContext(VarContext *ctx);

    antlr4::tree::TerminalNode *NAME();
    AssignmentExpressionContext *assignmentExpression();
    ScalarInitContext *scalarInit();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Var_simpleContext : public VarContext {
  public:
    Var_simpleContext(VarContext *ctx);

    antlr4::tree::TerminalNode *NAME();
    VarInitContext *varInit();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  VarContext* var();

  class  VarInitContext : public antlr4::ParserRuleContext {
  public:
    VarInitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    VarInitContext() : antlr4::ParserRuleContext() { }
    void copyFrom(VarInitContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  VarInit2Context : public VarInitContext {
  public:
    VarInit2Context(VarInitContext *ctx);

    ScalarInitContext *scalarInit();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VarInit1Context : public VarInitContext {
  public:
    VarInit1Context(VarInitContext *ctx);

    AssignmentExpressionContext *assignmentExpression();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  VarInitContext* varInit();

  class  ScalarInitContext : public antlr4::ParserRuleContext {
  public:
    ScalarInitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AssignmentExpressionContext *> assignmentExpression();
    AssignmentExpressionContext* assignmentExpression(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ScalarInitContext* scalarInit();

  class  DefFunContext : public antlr4::ParserRuleContext {
  public:
    DefFunContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DefFunContext() : antlr4::ParserRuleContext() { }
    void copyFrom(DefFunContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DefFun_no_paramContext : public DefFunContext {
  public:
    DefFun_no_paramContext(DefFunContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *NAME();
    BlocContext *bloc();
    antlr4::tree::TerminalNode *VOID();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DefFun_paramContext : public DefFunContext {
  public:
    DefFun_paramContext(DefFunContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *NAME();
    ListeparamContext *listeparam();
    BlocContext *bloc();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DefFunContext* defFun();

  class  ListeparamContext : public antlr4::ParserRuleContext {
  public:
    ListeparamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParamContext *> param();
    ParamContext* param(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ListeparamContext* listeparam();

  class  ParamContext : public antlr4::ParserRuleContext {
  public:
    ParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *NAME();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamContext* param();

  class  BlocContext : public antlr4::ParserRuleContext {
  public:
    BlocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlocContext* bloc();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DecVariableContext *decVariable();
    StmtExpressionContext *stmtExpression();
    StmtCompoundContext *stmtCompound();
    StmtWhileContext *stmtWhile();
    StmtIfContext *stmtIf();
    StmtReturnContext *stmtReturn();
    StmtPutcharContext *stmtPutchar();
    StmtBreakContext *stmtBreak();
    StmtContinueContext *stmtContinue();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  StmtCompoundContext : public antlr4::ParserRuleContext {
  public:
    StmtCompoundContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlocContext *bloc();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtCompoundContext* stmtCompound();

  class  StmtExpressionContext : public antlr4::ParserRuleContext {
  public:
    StmtExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtExpressionContext* stmtExpression();

  class  StmtWhileContext : public antlr4::ParserRuleContext {
  public:
    StmtWhileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    ExpressionContext *expression();
    StatementContext *statement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtWhileContext* stmtWhile();

  class  StmtIfContext : public antlr4::ParserRuleContext {
  public:
    StmtIfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExpressionContext *expression();
    StatementContext *statement();
    StmtElseContext *stmtElse();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtIfContext* stmtIf();

  class  StmtElseContext : public antlr4::ParserRuleContext {
  public:
    StmtElseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();
    StatementContext *statement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtElseContext* stmtElse();

  class  StmtReturnContext : public antlr4::ParserRuleContext {
  public:
    StmtReturnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtReturnContext* stmtReturn();

  class  StmtPutcharContext : public antlr4::ParserRuleContext {
  public:
    StmtPutcharContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PUTCHAR();
    AssignmentExpressionContext *assignmentExpression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtPutcharContext* stmtPutchar();

  class  StmtBreakContext : public antlr4::ParserRuleContext {
  public:
    StmtBreakContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BREAK();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtBreakContext* stmtBreak();

  class  StmtContinueContext : public antlr4::ParserRuleContext {
  public:
    StmtContinueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONTINUE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtContinueContext* stmtContinue();

  class  PrimaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrimaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PrimaryExpressionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(PrimaryExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IdentifierContext : public PrimaryExpressionContext {
  public:
    IdentifierContext(PrimaryExpressionContext *ctx);

    antlr4::tree::TerminalNode *NAME();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CharValueContext : public PrimaryExpressionContext {
  public:
    CharValueContext(PrimaryExpressionContext *ctx);

    antlr4::tree::TerminalNode *CHARV();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParanthesesContext : public PrimaryExpressionContext {
  public:
    ParanthesesContext(PrimaryExpressionContext *ctx);

    ExpressionContext *expression();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumericValueContext : public PrimaryExpressionContext {
  public:
    NumericValueContext(PrimaryExpressionContext *ctx);

    antlr4::tree::TerminalNode *NUMERICV();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PrimaryExpressionContext* primaryExpression();

  class  PostfixExpressionContext : public antlr4::ParserRuleContext {
  public:
    PostfixExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PostfixExpressionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(PostfixExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SubscriptContext : public PostfixExpressionContext {
  public:
    SubscriptContext(PostfixExpressionContext *ctx);

    antlr4::tree::TerminalNode *NAME();
    ExpressionContext *expression();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrimaryEContext : public PostfixExpressionContext {
  public:
    PrimaryEContext(PostfixExpressionContext *ctx);

    PrimaryExpressionContext *primaryExpression();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CallFunctionContext : public PostfixExpressionContext {
  public:
    CallFunctionContext(PostfixExpressionContext *ctx);

    FunctionCallContext *functionCall();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PostunaryContext : public PostfixExpressionContext {
  public:
    PostunaryContext(PostfixExpressionContext *ctx);

    PostfixExpressionContext *postfixExpression();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PostfixExpressionContext* postfixExpression();
  PostfixExpressionContext* postfixExpression(int precedence);
  class  FunctionCallContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();
    ArgumentsContext *arguments();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionCallContext* functionCall();

  class  ArgumentsContext : public antlr4::ParserRuleContext {
  public:
    ArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AssignmentExpressionContext *> assignmentExpression();
    AssignmentExpressionContext* assignmentExpression(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentsContext* arguments();

  class  UnaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    UnaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    UnaryExpressionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(UnaryExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PostfixEContext : public UnaryExpressionContext {
  public:
    PostfixEContext(UnaryExpressionContext *ctx);

    PostfixExpressionContext *postfixExpression();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PreunaryContext : public UnaryExpressionContext {
  public:
    PreunaryContext(UnaryExpressionContext *ctx);

    UnaryExpressionContext *unaryExpression();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  UnaryExpressionContext* unaryExpression();

  class  BinaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    BinaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExpressionContext *unaryExpression();
    std::vector<BinaryExpressionContext *> binaryExpression();
    BinaryExpressionContext* binaryExpression(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BinaryExpressionContext* binaryExpression();
  BinaryExpressionContext* binaryExpression(int precedence);
  class  AssignmentExpressionContext : public antlr4::ParserRuleContext {
  public:
    AssignmentExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AssignmentExpressionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(AssignmentExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AssignmentContext : public AssignmentExpressionContext {
  public:
    AssignmentContext(AssignmentExpressionContext *ctx);

    AffectationContext *affectation();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinaryEContext : public AssignmentExpressionContext {
  public:
    BinaryEContext(AssignmentExpressionContext *ctx);

    BinaryExpressionContext *binaryExpression();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AssignmentExpressionContext* assignmentExpression();

  class  AffectationContext : public antlr4::ParserRuleContext {
  public:
    AffectationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();
    AssignmentExpressionContext *assignmentExpression();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AffectationContext* affectation();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentExpressionContext *assignmentExpression();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);

  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool postfixExpressionSempred(PostfixExpressionContext *_localctx, size_t predicateIndex);
  bool binaryExpressionSempred(BinaryExpressionContext *_localctx, size_t predicateIndex);
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

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

