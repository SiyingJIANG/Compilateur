
// Generated from C:/Users/Gheorghe/Desktop/COMP/project/antlr\subC.g4 by ANTLR 4.7


#include "subCVisitor.h"

#include "subCParser.h"


using namespace antlrcpp;
using namespace antlr4;

subCParser::subCParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

subCParser::~subCParser() {
  delete _interpreter;
}

std::string subCParser::getGrammarFileName() const {
  return "subC.g4";
}

const std::vector<std::string>& subCParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& subCParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

subCParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<subCParser::DeclarationContext *> subCParser::ProgContext::declaration() {
  return getRuleContexts<subCParser::DeclarationContext>();
}

subCParser::DeclarationContext* subCParser::ProgContext::declaration(size_t i) {
  return getRuleContext<subCParser::DeclarationContext>(i);
}


size_t subCParser::ProgContext::getRuleIndex() const {
  return subCParser::RuleProg;
}

antlrcpp::Any subCParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

subCParser::ProgContext* subCParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, subCParser::RuleProg);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(65);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << subCParser::CHAR)
      | (1ULL << subCParser::INT32)
      | (1ULL << subCParser::INT64)
      | (1ULL << subCParser::VOID))) != 0)) {
      setState(62);
      declaration();
      setState(67);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

subCParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t subCParser::DeclarationContext::getRuleIndex() const {
  return subCParser::RuleDeclaration;
}

void subCParser::DeclarationContext::copyFrom(DeclarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FunctionDefContext ------------------------------------------------------------------

subCParser::DefFunContext* subCParser::FunctionDefContext::defFun() {
  return getRuleContext<subCParser::DefFunContext>(0);
}

subCParser::FunctionDefContext::FunctionDefContext(DeclarationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any subCParser::FunctionDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitFunctionDef(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VariableDecContext ------------------------------------------------------------------

subCParser::DecVariableContext* subCParser::VariableDecContext::decVariable() {
  return getRuleContext<subCParser::DecVariableContext>(0);
}

subCParser::VariableDecContext::VariableDecContext(DeclarationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any subCParser::VariableDecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitVariableDec(this);
  else
    return visitor->visitChildren(this);
}
subCParser::DeclarationContext* subCParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 2, subCParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(70);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<subCParser::FunctionDefContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(68);
      defFun();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<subCParser::VariableDecContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(69);
      decVariable();
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

//----------------- TypeContext ------------------------------------------------------------------

subCParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t subCParser::TypeContext::getRuleIndex() const {
  return subCParser::RuleType;
}

void subCParser::TypeContext::copyFrom(TypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VoidContext ------------------------------------------------------------------

tree::TerminalNode* subCParser::VoidContext::VOID() {
  return getToken(subCParser::VOID, 0);
}

subCParser::VoidContext::VoidContext(TypeContext *ctx) { copyFrom(ctx); }

antlrcpp::Any subCParser::VoidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitVoid(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Int32Context ------------------------------------------------------------------

tree::TerminalNode* subCParser::Int32Context::INT32() {
  return getToken(subCParser::INT32, 0);
}

subCParser::Int32Context::Int32Context(TypeContext *ctx) { copyFrom(ctx); }

antlrcpp::Any subCParser::Int32Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitInt32(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Int64Context ------------------------------------------------------------------

tree::TerminalNode* subCParser::Int64Context::INT64() {
  return getToken(subCParser::INT64, 0);
}

subCParser::Int64Context::Int64Context(TypeContext *ctx) { copyFrom(ctx); }

antlrcpp::Any subCParser::Int64Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitInt64(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CharContext ------------------------------------------------------------------

tree::TerminalNode* subCParser::CharContext::CHAR() {
  return getToken(subCParser::CHAR, 0);
}

subCParser::CharContext::CharContext(TypeContext *ctx) { copyFrom(ctx); }

antlrcpp::Any subCParser::CharContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitChar(this);
  else
    return visitor->visitChildren(this);
}
subCParser::TypeContext* subCParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 4, subCParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(76);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case subCParser::CHAR: {
        _localctx = dynamic_cast<TypeContext *>(_tracker.createInstance<subCParser::CharContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(72);
        match(subCParser::CHAR);
        break;
      }

      case subCParser::INT32: {
        _localctx = dynamic_cast<TypeContext *>(_tracker.createInstance<subCParser::Int32Context>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(73);
        match(subCParser::INT32);
        break;
      }

      case subCParser::INT64: {
        _localctx = dynamic_cast<TypeContext *>(_tracker.createInstance<subCParser::Int64Context>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(74);
        match(subCParser::INT64);
        break;
      }

      case subCParser::VOID: {
        _localctx = dynamic_cast<TypeContext *>(_tracker.createInstance<subCParser::VoidContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(75);
        match(subCParser::VOID);
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

//----------------- Const_exprContext ------------------------------------------------------------------

subCParser::Const_exprContext::Const_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* subCParser::Const_exprContext::NUMERICV() {
  return getToken(subCParser::NUMERICV, 0);
}

tree::TerminalNode* subCParser::Const_exprContext::CHARV() {
  return getToken(subCParser::CHARV, 0);
}


size_t subCParser::Const_exprContext::getRuleIndex() const {
  return subCParser::RuleConst_expr;
}

antlrcpp::Any subCParser::Const_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitConst_expr(this);
  else
    return visitor->visitChildren(this);
}

subCParser::Const_exprContext* subCParser::const_expr() {
  Const_exprContext *_localctx = _tracker.createInstance<Const_exprContext>(_ctx, getState());
  enterRule(_localctx, 6, subCParser::RuleConst_expr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    _la = _input->LA(1);
    if (!(_la == subCParser::CHARV

    || _la == subCParser::NUMERICV)) {
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

//----------------- DecVariableContext ------------------------------------------------------------------

subCParser::DecVariableContext::DecVariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

subCParser::TypeContext* subCParser::DecVariableContext::type() {
  return getRuleContext<subCParser::TypeContext>(0);
}

std::vector<subCParser::VarContext *> subCParser::DecVariableContext::var() {
  return getRuleContexts<subCParser::VarContext>();
}

subCParser::VarContext* subCParser::DecVariableContext::var(size_t i) {
  return getRuleContext<subCParser::VarContext>(i);
}


size_t subCParser::DecVariableContext::getRuleIndex() const {
  return subCParser::RuleDecVariable;
}

antlrcpp::Any subCParser::DecVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitDecVariable(this);
  else
    return visitor->visitChildren(this);
}

subCParser::DecVariableContext* subCParser::decVariable() {
  DecVariableContext *_localctx = _tracker.createInstance<DecVariableContext>(_ctx, getState());
  enterRule(_localctx, 8, subCParser::RuleDecVariable);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(80);
    type();
    setState(81);
    var();
    setState(86);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == subCParser::T__0) {
      setState(82);
      match(subCParser::T__0);
      setState(83);
      var();
      setState(88);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(89);
    match(subCParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarContext ------------------------------------------------------------------

subCParser::VarContext::VarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t subCParser::VarContext::getRuleIndex() const {
  return subCParser::RuleVar;
}

void subCParser::VarContext::copyFrom(VarContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Var_tableContext ------------------------------------------------------------------

tree::TerminalNode* subCParser::Var_tableContext::NAME() {
  return getToken(subCParser::NAME, 0);
}

subCParser::ScalarInitContext* subCParser::Var_tableContext::scalarInit() {
  return getRuleContext<subCParser::ScalarInitContext>(0);
}

subCParser::Var_tableContext::Var_tableContext(VarContext *ctx) { copyFrom(ctx); }

antlrcpp::Any subCParser::Var_tableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitVar_table(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Var_table_sizeContext ------------------------------------------------------------------

tree::TerminalNode* subCParser::Var_table_sizeContext::NAME() {
  return getToken(subCParser::NAME, 0);
}

subCParser::AssignmentExpressionContext* subCParser::Var_table_sizeContext::assignmentExpression() {
  return getRuleContext<subCParser::AssignmentExpressionContext>(0);
}

subCParser::ScalarInitContext* subCParser::Var_table_sizeContext::scalarInit() {
  return getRuleContext<subCParser::ScalarInitContext>(0);
}

subCParser::Var_table_sizeContext::Var_table_sizeContext(VarContext *ctx) { copyFrom(ctx); }

antlrcpp::Any subCParser::Var_table_sizeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitVar_table_size(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Var_simpleContext ------------------------------------------------------------------

tree::TerminalNode* subCParser::Var_simpleContext::NAME() {
  return getToken(subCParser::NAME, 0);
}

subCParser::VarInitContext* subCParser::Var_simpleContext::varInit() {
  return getRuleContext<subCParser::VarInitContext>(0);
}

subCParser::Var_simpleContext::Var_simpleContext(VarContext *ctx) { copyFrom(ctx); }

antlrcpp::Any subCParser::Var_simpleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitVar_simple(this);
  else
    return visitor->visitChildren(this);
}
subCParser::VarContext* subCParser::var() {
  VarContext *_localctx = _tracker.createInstance<VarContext>(_ctx, getState());
  enterRule(_localctx, 10, subCParser::RuleVar);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(109);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<VarContext *>(_tracker.createInstance<subCParser::Var_simpleContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(91);
      match(subCParser::NAME);
      setState(94);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == subCParser::T__2) {
        setState(92);
        match(subCParser::T__2);
        setState(93);
        varInit();
      }
      break;
    }

    case 2: {
      _localctx = dynamic_cast<VarContext *>(_tracker.createInstance<subCParser::Var_table_sizeContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(96);
      match(subCParser::NAME);
      setState(97);
      match(subCParser::T__3);
      setState(98);
      assignmentExpression();
      setState(99);
      match(subCParser::T__4);
      setState(102);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == subCParser::T__2) {
        setState(100);
        match(subCParser::T__2);
        setState(101);
        scalarInit();
      }
      break;
    }

    case 3: {
      _localctx = dynamic_cast<VarContext *>(_tracker.createInstance<subCParser::Var_tableContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(104);
      match(subCParser::NAME);
      setState(105);
      match(subCParser::T__3);
      setState(106);
      match(subCParser::T__4);

      setState(107);
      match(subCParser::T__2);
      setState(108);
      scalarInit();
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

//----------------- VarInitContext ------------------------------------------------------------------

subCParser::VarInitContext::VarInitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t subCParser::VarInitContext::getRuleIndex() const {
  return subCParser::RuleVarInit;
}

void subCParser::VarInitContext::copyFrom(VarInitContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VarInit2Context ------------------------------------------------------------------

subCParser::ScalarInitContext* subCParser::VarInit2Context::scalarInit() {
  return getRuleContext<subCParser::ScalarInitContext>(0);
}

subCParser::VarInit2Context::VarInit2Context(VarInitContext *ctx) { copyFrom(ctx); }

antlrcpp::Any subCParser::VarInit2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitVarInit2(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarInit1Context ------------------------------------------------------------------

subCParser::AssignmentExpressionContext* subCParser::VarInit1Context::assignmentExpression() {
  return getRuleContext<subCParser::AssignmentExpressionContext>(0);
}

subCParser::VarInit1Context::VarInit1Context(VarInitContext *ctx) { copyFrom(ctx); }

antlrcpp::Any subCParser::VarInit1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitVarInit1(this);
  else
    return visitor->visitChildren(this);
}
subCParser::VarInitContext* subCParser::varInit() {
  VarInitContext *_localctx = _tracker.createInstance<VarInitContext>(_ctx, getState());
  enterRule(_localctx, 12, subCParser::RuleVarInit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(113);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case subCParser::T__7:
      case subCParser::T__9:
      case subCParser::T__10:
      case subCParser::T__11:
      case subCParser::T__12:
      case subCParser::T__13:
      case subCParser::T__14:
      case subCParser::CHARV:
      case subCParser::NUMERICV:
      case subCParser::NAME: {
        _localctx = dynamic_cast<VarInitContext *>(_tracker.createInstance<subCParser::VarInit1Context>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(111);
        assignmentExpression();
        break;
      }

      case subCParser::T__5: {
        _localctx = dynamic_cast<VarInitContext *>(_tracker.createInstance<subCParser::VarInit2Context>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(112);
        scalarInit();
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

//----------------- ScalarInitContext ------------------------------------------------------------------

subCParser::ScalarInitContext::ScalarInitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<subCParser::AssignmentExpressionContext *> subCParser::ScalarInitContext::assignmentExpression() {
  return getRuleContexts<subCParser::AssignmentExpressionContext>();
}

subCParser::AssignmentExpressionContext* subCParser::ScalarInitContext::assignmentExpression(size_t i) {
  return getRuleContext<subCParser::AssignmentExpressionContext>(i);
}


size_t subCParser::ScalarInitContext::getRuleIndex() const {
  return subCParser::RuleScalarInit;
}

antlrcpp::Any subCParser::ScalarInitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitScalarInit(this);
  else
    return visitor->visitChildren(this);
}

subCParser::ScalarInitContext* subCParser::scalarInit() {
  ScalarInitContext *_localctx = _tracker.createInstance<ScalarInitContext>(_ctx, getState());
  enterRule(_localctx, 14, subCParser::RuleScalarInit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    match(subCParser::T__5);
    setState(116);
    assignmentExpression();
    setState(121);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == subCParser::T__0) {
      setState(117);
      match(subCParser::T__0);
      setState(118);
      assignmentExpression();
      setState(123);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(124);
    match(subCParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefFunContext ------------------------------------------------------------------

subCParser::DefFunContext::DefFunContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t subCParser::DefFunContext::getRuleIndex() const {
  return subCParser::RuleDefFun;
}

void subCParser::DefFunContext::copyFrom(DefFunContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DefFun_no_paramContext ------------------------------------------------------------------

subCParser::TypeContext* subCParser::DefFun_no_paramContext::type() {
  return getRuleContext<subCParser::TypeContext>(0);
}

tree::TerminalNode* subCParser::DefFun_no_paramContext::NAME() {
  return getToken(subCParser::NAME, 0);
}

subCParser::BlocContext* subCParser::DefFun_no_paramContext::bloc() {
  return getRuleContext<subCParser::BlocContext>(0);
}

tree::TerminalNode* subCParser::DefFun_no_paramContext::VOID() {
  return getToken(subCParser::VOID, 0);
}

subCParser::DefFun_no_paramContext::DefFun_no_paramContext(DefFunContext *ctx) { copyFrom(ctx); }

antlrcpp::Any subCParser::DefFun_no_paramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitDefFun_no_param(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DefFun_paramContext ------------------------------------------------------------------

subCParser::TypeContext* subCParser::DefFun_paramContext::type() {
  return getRuleContext<subCParser::TypeContext>(0);
}

tree::TerminalNode* subCParser::DefFun_paramContext::NAME() {
  return getToken(subCParser::NAME, 0);
}

subCParser::ListeparamContext* subCParser::DefFun_paramContext::listeparam() {
  return getRuleContext<subCParser::ListeparamContext>(0);
}

subCParser::BlocContext* subCParser::DefFun_paramContext::bloc() {
  return getRuleContext<subCParser::BlocContext>(0);
}

subCParser::DefFun_paramContext::DefFun_paramContext(DefFunContext *ctx) { copyFrom(ctx); }

antlrcpp::Any subCParser::DefFun_paramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitDefFun_param(this);
  else
    return visitor->visitChildren(this);
}
subCParser::DefFunContext* subCParser::defFun() {
  DefFunContext *_localctx = _tracker.createInstance<DefFunContext>(_ctx, getState());
  enterRule(_localctx, 16, subCParser::RuleDefFun);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(142);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<DefFunContext *>(_tracker.createInstance<subCParser::DefFun_paramContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(126);
      type();
      setState(127);
      match(subCParser::NAME);
      setState(128);
      match(subCParser::T__7);
      setState(129);
      listeparam();
      setState(130);
      match(subCParser::T__8);
      setState(131);
      bloc();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<DefFunContext *>(_tracker.createInstance<subCParser::DefFun_no_paramContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(133);
      type();
      setState(134);
      match(subCParser::NAME);
      setState(135);
      match(subCParser::T__7);
      setState(137);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == subCParser::VOID) {
        setState(136);
        match(subCParser::VOID);
      }
      setState(139);
      match(subCParser::T__8);
      setState(140);
      bloc();
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

//----------------- ListeparamContext ------------------------------------------------------------------

subCParser::ListeparamContext::ListeparamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<subCParser::ParamContext *> subCParser::ListeparamContext::param() {
  return getRuleContexts<subCParser::ParamContext>();
}

subCParser::ParamContext* subCParser::ListeparamContext::param(size_t i) {
  return getRuleContext<subCParser::ParamContext>(i);
}


size_t subCParser::ListeparamContext::getRuleIndex() const {
  return subCParser::RuleListeparam;
}

antlrcpp::Any subCParser::ListeparamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitListeparam(this);
  else
    return visitor->visitChildren(this);
}

subCParser::ListeparamContext* subCParser::listeparam() {
  ListeparamContext *_localctx = _tracker.createInstance<ListeparamContext>(_ctx, getState());
  enterRule(_localctx, 18, subCParser::RuleListeparam);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    param();
    setState(149);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == subCParser::T__0) {
      setState(145);
      match(subCParser::T__0);
      setState(146);
      param();
      setState(151);
      _errHandler->sync(this);
      _la = _input->LA(1);
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

subCParser::ParamContext::ParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

subCParser::TypeContext* subCParser::ParamContext::type() {
  return getRuleContext<subCParser::TypeContext>(0);
}

tree::TerminalNode* subCParser::ParamContext::NAME() {
  return getToken(subCParser::NAME, 0);
}

subCParser::ExpressionContext* subCParser::ParamContext::expression() {
  return getRuleContext<subCParser::ExpressionContext>(0);
}


size_t subCParser::ParamContext::getRuleIndex() const {
  return subCParser::RuleParam;
}

antlrcpp::Any subCParser::ParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitParam(this);
  else
    return visitor->visitChildren(this);
}

subCParser::ParamContext* subCParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 20, subCParser::RuleParam);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    type();
    setState(153);
    match(subCParser::NAME);
    setState(159);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == subCParser::T__3) {
      setState(154);
      match(subCParser::T__3);
      setState(156);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << subCParser::T__7)
        | (1ULL << subCParser::T__9)
        | (1ULL << subCParser::T__10)
        | (1ULL << subCParser::T__11)
        | (1ULL << subCParser::T__12)
        | (1ULL << subCParser::T__13)
        | (1ULL << subCParser::T__14)
        | (1ULL << subCParser::CHARV)
        | (1ULL << subCParser::NUMERICV)
        | (1ULL << subCParser::NAME))) != 0)) {
        setState(155);
        expression(0);
      }
      setState(158);
      match(subCParser::T__4);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlocContext ------------------------------------------------------------------

subCParser::BlocContext::BlocContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<subCParser::StatementContext *> subCParser::BlocContext::statement() {
  return getRuleContexts<subCParser::StatementContext>();
}

subCParser::StatementContext* subCParser::BlocContext::statement(size_t i) {
  return getRuleContext<subCParser::StatementContext>(i);
}


size_t subCParser::BlocContext::getRuleIndex() const {
  return subCParser::RuleBloc;
}

antlrcpp::Any subCParser::BlocContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitBloc(this);
  else
    return visitor->visitChildren(this);
}

subCParser::BlocContext* subCParser::bloc() {
  BlocContext *_localctx = _tracker.createInstance<BlocContext>(_ctx, getState());
  enterRule(_localctx, 22, subCParser::RuleBloc);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161);
    match(subCParser::T__5);
    setState(165);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << subCParser::T__1)
      | (1ULL << subCParser::T__5)
      | (1ULL << subCParser::T__7)
      | (1ULL << subCParser::T__9)
      | (1ULL << subCParser::T__10)
      | (1ULL << subCParser::T__11)
      | (1ULL << subCParser::T__12)
      | (1ULL << subCParser::T__13)
      | (1ULL << subCParser::T__14)
      | (1ULL << subCParser::CHAR)
      | (1ULL << subCParser::INT32)
      | (1ULL << subCParser::INT64)
      | (1ULL << subCParser::VOID)
      | (1ULL << subCParser::BREAK)
      | (1ULL << subCParser::CONTINUE)
      | (1ULL << subCParser::WHILE)
      | (1ULL << subCParser::IF)
      | (1ULL << subCParser::RETURN)
      | (1ULL << subCParser::PUTCHAR)
      | (1ULL << subCParser::CHARV)
      | (1ULL << subCParser::NUMERICV)
      | (1ULL << subCParser::NAME))) != 0)) {
      setState(162);
      statement();
      setState(167);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(168);
    match(subCParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

subCParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

subCParser::DecVariableContext* subCParser::StatementContext::decVariable() {
  return getRuleContext<subCParser::DecVariableContext>(0);
}

subCParser::StmtExpressionContext* subCParser::StatementContext::stmtExpression() {
  return getRuleContext<subCParser::StmtExpressionContext>(0);
}

subCParser::StmtCompoundContext* subCParser::StatementContext::stmtCompound() {
  return getRuleContext<subCParser::StmtCompoundContext>(0);
}

subCParser::StmtWhileContext* subCParser::StatementContext::stmtWhile() {
  return getRuleContext<subCParser::StmtWhileContext>(0);
}

subCParser::StmtIfContext* subCParser::StatementContext::stmtIf() {
  return getRuleContext<subCParser::StmtIfContext>(0);
}

subCParser::StmtReturnContext* subCParser::StatementContext::stmtReturn() {
  return getRuleContext<subCParser::StmtReturnContext>(0);
}

subCParser::StmtPutcharContext* subCParser::StatementContext::stmtPutchar() {
  return getRuleContext<subCParser::StmtPutcharContext>(0);
}

subCParser::StmtBreakContext* subCParser::StatementContext::stmtBreak() {
  return getRuleContext<subCParser::StmtBreakContext>(0);
}

subCParser::StmtContinueContext* subCParser::StatementContext::stmtContinue() {
  return getRuleContext<subCParser::StmtContinueContext>(0);
}


size_t subCParser::StatementContext::getRuleIndex() const {
  return subCParser::RuleStatement;
}

antlrcpp::Any subCParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

subCParser::StatementContext* subCParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 24, subCParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(179);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case subCParser::CHAR:
      case subCParser::INT32:
      case subCParser::INT64:
      case subCParser::VOID: {
        enterOuterAlt(_localctx, 1);
        setState(170);
        decVariable();
        break;
      }

      case subCParser::T__1:
      case subCParser::T__7:
      case subCParser::T__9:
      case subCParser::T__10:
      case subCParser::T__11:
      case subCParser::T__12:
      case subCParser::T__13:
      case subCParser::T__14:
      case subCParser::CHARV:
      case subCParser::NUMERICV:
      case subCParser::NAME: {
        enterOuterAlt(_localctx, 2);
        setState(171);
        stmtExpression();
        break;
      }

      case subCParser::T__5: {
        enterOuterAlt(_localctx, 3);
        setState(172);
        stmtCompound();
        break;
      }

      case subCParser::WHILE: {
        enterOuterAlt(_localctx, 4);
        setState(173);
        stmtWhile();
        break;
      }

      case subCParser::IF: {
        enterOuterAlt(_localctx, 5);
        setState(174);
        stmtIf();
        break;
      }

      case subCParser::RETURN: {
        enterOuterAlt(_localctx, 6);
        setState(175);
        stmtReturn();
        break;
      }

      case subCParser::PUTCHAR: {
        enterOuterAlt(_localctx, 7);
        setState(176);
        stmtPutchar();
        break;
      }

      case subCParser::BREAK: {
        enterOuterAlt(_localctx, 8);
        setState(177);
        stmtBreak();
        break;
      }

      case subCParser::CONTINUE: {
        enterOuterAlt(_localctx, 9);
        setState(178);
        stmtContinue();
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

//----------------- StmtCompoundContext ------------------------------------------------------------------

subCParser::StmtCompoundContext::StmtCompoundContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

subCParser::BlocContext* subCParser::StmtCompoundContext::bloc() {
  return getRuleContext<subCParser::BlocContext>(0);
}


size_t subCParser::StmtCompoundContext::getRuleIndex() const {
  return subCParser::RuleStmtCompound;
}

antlrcpp::Any subCParser::StmtCompoundContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitStmtCompound(this);
  else
    return visitor->visitChildren(this);
}

subCParser::StmtCompoundContext* subCParser::stmtCompound() {
  StmtCompoundContext *_localctx = _tracker.createInstance<StmtCompoundContext>(_ctx, getState());
  enterRule(_localctx, 26, subCParser::RuleStmtCompound);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(181);
    bloc();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtExpressionContext ------------------------------------------------------------------

subCParser::StmtExpressionContext::StmtExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

subCParser::ExpressionContext* subCParser::StmtExpressionContext::expression() {
  return getRuleContext<subCParser::ExpressionContext>(0);
}


size_t subCParser::StmtExpressionContext::getRuleIndex() const {
  return subCParser::RuleStmtExpression;
}

antlrcpp::Any subCParser::StmtExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitStmtExpression(this);
  else
    return visitor->visitChildren(this);
}

subCParser::StmtExpressionContext* subCParser::stmtExpression() {
  StmtExpressionContext *_localctx = _tracker.createInstance<StmtExpressionContext>(_ctx, getState());
  enterRule(_localctx, 28, subCParser::RuleStmtExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(184);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << subCParser::T__7)
      | (1ULL << subCParser::T__9)
      | (1ULL << subCParser::T__10)
      | (1ULL << subCParser::T__11)
      | (1ULL << subCParser::T__12)
      | (1ULL << subCParser::T__13)
      | (1ULL << subCParser::T__14)
      | (1ULL << subCParser::CHARV)
      | (1ULL << subCParser::NUMERICV)
      | (1ULL << subCParser::NAME))) != 0)) {
      setState(183);
      expression(0);
    }
    setState(186);
    match(subCParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtWhileContext ------------------------------------------------------------------

subCParser::StmtWhileContext::StmtWhileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* subCParser::StmtWhileContext::WHILE() {
  return getToken(subCParser::WHILE, 0);
}

subCParser::ExpressionContext* subCParser::StmtWhileContext::expression() {
  return getRuleContext<subCParser::ExpressionContext>(0);
}

subCParser::StatementContext* subCParser::StmtWhileContext::statement() {
  return getRuleContext<subCParser::StatementContext>(0);
}


size_t subCParser::StmtWhileContext::getRuleIndex() const {
  return subCParser::RuleStmtWhile;
}

antlrcpp::Any subCParser::StmtWhileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitStmtWhile(this);
  else
    return visitor->visitChildren(this);
}

subCParser::StmtWhileContext* subCParser::stmtWhile() {
  StmtWhileContext *_localctx = _tracker.createInstance<StmtWhileContext>(_ctx, getState());
  enterRule(_localctx, 30, subCParser::RuleStmtWhile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(188);
    match(subCParser::WHILE);
    setState(189);
    match(subCParser::T__7);
    setState(190);
    expression(0);
    setState(191);
    match(subCParser::T__8);
    setState(192);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtIfContext ------------------------------------------------------------------

subCParser::StmtIfContext::StmtIfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* subCParser::StmtIfContext::IF() {
  return getToken(subCParser::IF, 0);
}

subCParser::ExpressionContext* subCParser::StmtIfContext::expression() {
  return getRuleContext<subCParser::ExpressionContext>(0);
}

subCParser::StatementContext* subCParser::StmtIfContext::statement() {
  return getRuleContext<subCParser::StatementContext>(0);
}

subCParser::StmtElseContext* subCParser::StmtIfContext::stmtElse() {
  return getRuleContext<subCParser::StmtElseContext>(0);
}


size_t subCParser::StmtIfContext::getRuleIndex() const {
  return subCParser::RuleStmtIf;
}

antlrcpp::Any subCParser::StmtIfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitStmtIf(this);
  else
    return visitor->visitChildren(this);
}

subCParser::StmtIfContext* subCParser::stmtIf() {
  StmtIfContext *_localctx = _tracker.createInstance<StmtIfContext>(_ctx, getState());
  enterRule(_localctx, 32, subCParser::RuleStmtIf);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    match(subCParser::IF);
    setState(195);
    match(subCParser::T__7);
    setState(196);
    expression(0);
    setState(197);
    match(subCParser::T__8);
    setState(198);
    statement();
    setState(200);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(199);
      stmtElse();
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

//----------------- StmtElseContext ------------------------------------------------------------------

subCParser::StmtElseContext::StmtElseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* subCParser::StmtElseContext::ELSE() {
  return getToken(subCParser::ELSE, 0);
}

subCParser::StatementContext* subCParser::StmtElseContext::statement() {
  return getRuleContext<subCParser::StatementContext>(0);
}


size_t subCParser::StmtElseContext::getRuleIndex() const {
  return subCParser::RuleStmtElse;
}

antlrcpp::Any subCParser::StmtElseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitStmtElse(this);
  else
    return visitor->visitChildren(this);
}

subCParser::StmtElseContext* subCParser::stmtElse() {
  StmtElseContext *_localctx = _tracker.createInstance<StmtElseContext>(_ctx, getState());
  enterRule(_localctx, 34, subCParser::RuleStmtElse);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(202);
    match(subCParser::ELSE);
    setState(203);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtReturnContext ------------------------------------------------------------------

subCParser::StmtReturnContext::StmtReturnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* subCParser::StmtReturnContext::RETURN() {
  return getToken(subCParser::RETURN, 0);
}

subCParser::ExpressionContext* subCParser::StmtReturnContext::expression() {
  return getRuleContext<subCParser::ExpressionContext>(0);
}


size_t subCParser::StmtReturnContext::getRuleIndex() const {
  return subCParser::RuleStmtReturn;
}

antlrcpp::Any subCParser::StmtReturnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitStmtReturn(this);
  else
    return visitor->visitChildren(this);
}

subCParser::StmtReturnContext* subCParser::stmtReturn() {
  StmtReturnContext *_localctx = _tracker.createInstance<StmtReturnContext>(_ctx, getState());
  enterRule(_localctx, 36, subCParser::RuleStmtReturn);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(205);
    match(subCParser::RETURN);
    setState(206);
    expression(0);
    setState(207);
    match(subCParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtPutcharContext ------------------------------------------------------------------

subCParser::StmtPutcharContext::StmtPutcharContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* subCParser::StmtPutcharContext::PUTCHAR() {
  return getToken(subCParser::PUTCHAR, 0);
}

subCParser::AssignmentExpressionContext* subCParser::StmtPutcharContext::assignmentExpression() {
  return getRuleContext<subCParser::AssignmentExpressionContext>(0);
}


size_t subCParser::StmtPutcharContext::getRuleIndex() const {
  return subCParser::RuleStmtPutchar;
}

antlrcpp::Any subCParser::StmtPutcharContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitStmtPutchar(this);
  else
    return visitor->visitChildren(this);
}

subCParser::StmtPutcharContext* subCParser::stmtPutchar() {
  StmtPutcharContext *_localctx = _tracker.createInstance<StmtPutcharContext>(_ctx, getState());
  enterRule(_localctx, 38, subCParser::RuleStmtPutchar);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(209);
    match(subCParser::PUTCHAR);
    setState(210);
    match(subCParser::T__7);
    setState(211);
    assignmentExpression();
    setState(212);
    match(subCParser::T__8);
    setState(213);
    match(subCParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtBreakContext ------------------------------------------------------------------

subCParser::StmtBreakContext::StmtBreakContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* subCParser::StmtBreakContext::BREAK() {
  return getToken(subCParser::BREAK, 0);
}


size_t subCParser::StmtBreakContext::getRuleIndex() const {
  return subCParser::RuleStmtBreak;
}

antlrcpp::Any subCParser::StmtBreakContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitStmtBreak(this);
  else
    return visitor->visitChildren(this);
}

subCParser::StmtBreakContext* subCParser::stmtBreak() {
  StmtBreakContext *_localctx = _tracker.createInstance<StmtBreakContext>(_ctx, getState());
  enterRule(_localctx, 40, subCParser::RuleStmtBreak);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(215);
    match(subCParser::BREAK);
    setState(216);
    match(subCParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContinueContext ------------------------------------------------------------------

subCParser::StmtContinueContext::StmtContinueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* subCParser::StmtContinueContext::CONTINUE() {
  return getToken(subCParser::CONTINUE, 0);
}


size_t subCParser::StmtContinueContext::getRuleIndex() const {
  return subCParser::RuleStmtContinue;
}

antlrcpp::Any subCParser::StmtContinueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitStmtContinue(this);
  else
    return visitor->visitChildren(this);
}

subCParser::StmtContinueContext* subCParser::stmtContinue() {
  StmtContinueContext *_localctx = _tracker.createInstance<StmtContinueContext>(_ctx, getState());
  enterRule(_localctx, 42, subCParser::RuleStmtContinue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(218);
    match(subCParser::CONTINUE);
    setState(219);
    match(subCParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryExpressionContext ------------------------------------------------------------------

subCParser::PrimaryExpressionContext::PrimaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t subCParser::PrimaryExpressionContext::getRuleIndex() const {
  return subCParser::RulePrimaryExpression;
}

void subCParser::PrimaryExpressionContext::copyFrom(PrimaryExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IdentifierContext ------------------------------------------------------------------

tree::TerminalNode* subCParser::IdentifierContext::NAME() {
  return getToken(subCParser::NAME, 0);
}

subCParser::IdentifierContext::IdentifierContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any subCParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CharValueContext ------------------------------------------------------------------

tree::TerminalNode* subCParser::CharValueContext::CHARV() {
  return getToken(subCParser::CHARV, 0);
}

subCParser::CharValueContext::CharValueContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any subCParser::CharValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitCharValue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParanthesesContext ------------------------------------------------------------------

subCParser::ExpressionContext* subCParser::ParanthesesContext::expression() {
  return getRuleContext<subCParser::ExpressionContext>(0);
}

subCParser::ParanthesesContext::ParanthesesContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any subCParser::ParanthesesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitParantheses(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumericValueContext ------------------------------------------------------------------

tree::TerminalNode* subCParser::NumericValueContext::NUMERICV() {
  return getToken(subCParser::NUMERICV, 0);
}

subCParser::NumericValueContext::NumericValueContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any subCParser::NumericValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitNumericValue(this);
  else
    return visitor->visitChildren(this);
}
subCParser::PrimaryExpressionContext* subCParser::primaryExpression() {
  PrimaryExpressionContext *_localctx = _tracker.createInstance<PrimaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 44, subCParser::RulePrimaryExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(228);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case subCParser::NAME: {
        _localctx = dynamic_cast<PrimaryExpressionContext *>(_tracker.createInstance<subCParser::IdentifierContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(221);
        match(subCParser::NAME);
        break;
      }

      case subCParser::NUMERICV: {
        _localctx = dynamic_cast<PrimaryExpressionContext *>(_tracker.createInstance<subCParser::NumericValueContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(222);
        match(subCParser::NUMERICV);
        break;
      }

      case subCParser::CHARV: {
        _localctx = dynamic_cast<PrimaryExpressionContext *>(_tracker.createInstance<subCParser::CharValueContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(223);
        match(subCParser::CHARV);
        break;
      }

      case subCParser::T__7: {
        _localctx = dynamic_cast<PrimaryExpressionContext *>(_tracker.createInstance<subCParser::ParanthesesContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(224);
        match(subCParser::T__7);
        setState(225);
        expression(0);
        setState(226);
        match(subCParser::T__8);
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

//----------------- PostfixExpressionContext ------------------------------------------------------------------

subCParser::PostfixExpressionContext::PostfixExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t subCParser::PostfixExpressionContext::getRuleIndex() const {
  return subCParser::RulePostfixExpression;
}

void subCParser::PostfixExpressionContext::copyFrom(PostfixExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SubscriptContext ------------------------------------------------------------------

tree::TerminalNode* subCParser::SubscriptContext::NAME() {
  return getToken(subCParser::NAME, 0);
}

subCParser::ExpressionContext* subCParser::SubscriptContext::expression() {
  return getRuleContext<subCParser::ExpressionContext>(0);
}

subCParser::SubscriptContext::SubscriptContext(PostfixExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any subCParser::SubscriptContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitSubscript(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrimaryEContext ------------------------------------------------------------------

subCParser::PrimaryExpressionContext* subCParser::PrimaryEContext::primaryExpression() {
  return getRuleContext<subCParser::PrimaryExpressionContext>(0);
}

subCParser::PrimaryEContext::PrimaryEContext(PostfixExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any subCParser::PrimaryEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitPrimaryE(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CallFunctionContext ------------------------------------------------------------------

subCParser::FunctionCallContext* subCParser::CallFunctionContext::functionCall() {
  return getRuleContext<subCParser::FunctionCallContext>(0);
}

subCParser::CallFunctionContext::CallFunctionContext(PostfixExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any subCParser::CallFunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitCallFunction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PostunaryContext ------------------------------------------------------------------

subCParser::PostfixExpressionContext* subCParser::PostunaryContext::postfixExpression() {
  return getRuleContext<subCParser::PostfixExpressionContext>(0);
}

subCParser::PostunaryContext::PostunaryContext(PostfixExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any subCParser::PostunaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitPostunary(this);
  else
    return visitor->visitChildren(this);
}

subCParser::PostfixExpressionContext* subCParser::postfixExpression() {
   return postfixExpression(0);
}

subCParser::PostfixExpressionContext* subCParser::postfixExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  subCParser::PostfixExpressionContext *_localctx = _tracker.createInstance<PostfixExpressionContext>(_ctx, parentState);
  subCParser::PostfixExpressionContext *previousContext = _localctx;
  size_t startState = 46;
  enterRecursionRule(_localctx, 46, subCParser::RulePostfixExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(238);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<PrimaryEContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(231);
      primaryExpression();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CallFunctionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(232);
      functionCall();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<SubscriptContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(233);
      match(subCParser::NAME);
      setState(234);
      match(subCParser::T__3);
      setState(235);
      expression(0);
      setState(236);
      match(subCParser::T__4);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(246);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(244);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PostunaryContext>(_tracker.createInstance<PostfixExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RulePostfixExpression);
          setState(240);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(241);
          match(subCParser::T__9);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<PostunaryContext>(_tracker.createInstance<PostfixExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RulePostfixExpression);
          setState(242);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(243);
          match(subCParser::T__10);
          break;
        }

        } 
      }
      setState(248);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

subCParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* subCParser::FunctionCallContext::NAME() {
  return getToken(subCParser::NAME, 0);
}

subCParser::ArgumentsContext* subCParser::FunctionCallContext::arguments() {
  return getRuleContext<subCParser::ArgumentsContext>(0);
}


size_t subCParser::FunctionCallContext::getRuleIndex() const {
  return subCParser::RuleFunctionCall;
}

antlrcpp::Any subCParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

subCParser::FunctionCallContext* subCParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 48, subCParser::RuleFunctionCall);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(249);
    match(subCParser::NAME);
    setState(250);
    match(subCParser::T__7);
    setState(251);
    arguments();
    setState(252);
    match(subCParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentsContext ------------------------------------------------------------------

subCParser::ArgumentsContext::ArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<subCParser::AssignmentExpressionContext *> subCParser::ArgumentsContext::assignmentExpression() {
  return getRuleContexts<subCParser::AssignmentExpressionContext>();
}

subCParser::AssignmentExpressionContext* subCParser::ArgumentsContext::assignmentExpression(size_t i) {
  return getRuleContext<subCParser::AssignmentExpressionContext>(i);
}


size_t subCParser::ArgumentsContext::getRuleIndex() const {
  return subCParser::RuleArguments;
}

antlrcpp::Any subCParser::ArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitArguments(this);
  else
    return visitor->visitChildren(this);
}

subCParser::ArgumentsContext* subCParser::arguments() {
  ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 50, subCParser::RuleArguments);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(263);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case subCParser::T__8: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case subCParser::T__7:
      case subCParser::T__9:
      case subCParser::T__10:
      case subCParser::T__11:
      case subCParser::T__12:
      case subCParser::T__13:
      case subCParser::T__14:
      case subCParser::CHARV:
      case subCParser::NUMERICV:
      case subCParser::NAME: {
        enterOuterAlt(_localctx, 2);
        setState(255);
        assignmentExpression();
        setState(260);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == subCParser::T__0) {
          setState(256);
          match(subCParser::T__0);
          setState(257);
          assignmentExpression();
          setState(262);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
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

//----------------- UnaryExpressionContext ------------------------------------------------------------------

subCParser::UnaryExpressionContext::UnaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t subCParser::UnaryExpressionContext::getRuleIndex() const {
  return subCParser::RuleUnaryExpression;
}

void subCParser::UnaryExpressionContext::copyFrom(UnaryExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PostfixEContext ------------------------------------------------------------------

subCParser::PostfixExpressionContext* subCParser::PostfixEContext::postfixExpression() {
  return getRuleContext<subCParser::PostfixExpressionContext>(0);
}

subCParser::PostfixEContext::PostfixEContext(UnaryExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any subCParser::PostfixEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitPostfixE(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PreunaryContext ------------------------------------------------------------------

subCParser::UnaryExpressionContext* subCParser::PreunaryContext::unaryExpression() {
  return getRuleContext<subCParser::UnaryExpressionContext>(0);
}

subCParser::PreunaryContext::PreunaryContext(UnaryExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any subCParser::PreunaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitPreunary(this);
  else
    return visitor->visitChildren(this);
}
subCParser::UnaryExpressionContext* subCParser::unaryExpression() {
  UnaryExpressionContext *_localctx = _tracker.createInstance<UnaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 52, subCParser::RuleUnaryExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(278);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case subCParser::T__7:
      case subCParser::CHARV:
      case subCParser::NUMERICV:
      case subCParser::NAME: {
        _localctx = dynamic_cast<UnaryExpressionContext *>(_tracker.createInstance<subCParser::PostfixEContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(265);
        postfixExpression(0);
        break;
      }

      case subCParser::T__9: {
        _localctx = dynamic_cast<UnaryExpressionContext *>(_tracker.createInstance<subCParser::PreunaryContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(266);
        match(subCParser::T__9);
        setState(267);
        unaryExpression();
        break;
      }

      case subCParser::T__10: {
        _localctx = dynamic_cast<UnaryExpressionContext *>(_tracker.createInstance<subCParser::PreunaryContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(268);
        match(subCParser::T__10);
        setState(269);
        unaryExpression();
        break;
      }

      case subCParser::T__11: {
        _localctx = dynamic_cast<UnaryExpressionContext *>(_tracker.createInstance<subCParser::PreunaryContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(270);
        match(subCParser::T__11);
        setState(271);
        unaryExpression();
        break;
      }

      case subCParser::T__12: {
        _localctx = dynamic_cast<UnaryExpressionContext *>(_tracker.createInstance<subCParser::PreunaryContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(272);
        match(subCParser::T__12);
        setState(273);
        unaryExpression();
        break;
      }

      case subCParser::T__13: {
        _localctx = dynamic_cast<UnaryExpressionContext *>(_tracker.createInstance<subCParser::PreunaryContext>(_localctx));
        enterOuterAlt(_localctx, 6);
        setState(274);
        match(subCParser::T__13);
        setState(275);
        unaryExpression();
        break;
      }

      case subCParser::T__14: {
        _localctx = dynamic_cast<UnaryExpressionContext *>(_tracker.createInstance<subCParser::PreunaryContext>(_localctx));
        enterOuterAlt(_localctx, 7);
        setState(276);
        match(subCParser::T__14);
        setState(277);
        unaryExpression();
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

//----------------- BinaryExpressionContext ------------------------------------------------------------------

subCParser::BinaryExpressionContext::BinaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

subCParser::UnaryExpressionContext* subCParser::BinaryExpressionContext::unaryExpression() {
  return getRuleContext<subCParser::UnaryExpressionContext>(0);
}

std::vector<subCParser::BinaryExpressionContext *> subCParser::BinaryExpressionContext::binaryExpression() {
  return getRuleContexts<subCParser::BinaryExpressionContext>();
}

subCParser::BinaryExpressionContext* subCParser::BinaryExpressionContext::binaryExpression(size_t i) {
  return getRuleContext<subCParser::BinaryExpressionContext>(i);
}


size_t subCParser::BinaryExpressionContext::getRuleIndex() const {
  return subCParser::RuleBinaryExpression;
}

antlrcpp::Any subCParser::BinaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitBinaryExpression(this);
  else
    return visitor->visitChildren(this);
}


subCParser::BinaryExpressionContext* subCParser::binaryExpression() {
   return binaryExpression(0);
}

subCParser::BinaryExpressionContext* subCParser::binaryExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  subCParser::BinaryExpressionContext *_localctx = _tracker.createInstance<BinaryExpressionContext>(_ctx, parentState);
  subCParser::BinaryExpressionContext *previousContext = _localctx;
  size_t startState = 54;
  enterRecursionRule(_localctx, 54, subCParser::RuleBinaryExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(281);
    unaryExpression();
    _ctx->stop = _input->LT(-1);
    setState(315);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(313);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<BinaryExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleBinaryExpression);
          setState(283);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(284);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << subCParser::T__15)
            | (1ULL << subCParser::T__16)
            | (1ULL << subCParser::T__17))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(285);
          binaryExpression(11);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<BinaryExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleBinaryExpression);
          setState(286);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(287);
          _la = _input->LA(1);
          if (!(_la == subCParser::T__11

          || _la == subCParser::T__12)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(288);
          binaryExpression(10);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<BinaryExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleBinaryExpression);
          setState(289);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(290);
          _la = _input->LA(1);
          if (!(_la == subCParser::T__18

          || _la == subCParser::T__19)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(291);
          binaryExpression(9);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<BinaryExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleBinaryExpression);
          setState(292);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(293);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << subCParser::T__20)
            | (1ULL << subCParser::T__21)
            | (1ULL << subCParser::T__22)
            | (1ULL << subCParser::T__23))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(294);
          binaryExpression(8);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<BinaryExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleBinaryExpression);
          setState(295);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(296);
          _la = _input->LA(1);
          if (!(_la == subCParser::T__24

          || _la == subCParser::T__25)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(297);
          binaryExpression(7);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<BinaryExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleBinaryExpression);
          setState(298);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(299);
          match(subCParser::T__26);
          setState(300);
          binaryExpression(6);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<BinaryExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleBinaryExpression);
          setState(301);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(302);
          match(subCParser::T__27);
          setState(303);
          binaryExpression(5);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<BinaryExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleBinaryExpression);
          setState(304);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(305);
          match(subCParser::T__28);
          setState(306);
          binaryExpression(4);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<BinaryExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleBinaryExpression);
          setState(307);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(308);
          match(subCParser::T__29);
          setState(309);
          binaryExpression(3);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<BinaryExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleBinaryExpression);
          setState(310);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(311);
          match(subCParser::T__30);
          setState(312);
          binaryExpression(2);
          break;
        }

        } 
      }
      setState(317);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AssignmentExpressionContext ------------------------------------------------------------------

subCParser::AssignmentExpressionContext::AssignmentExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t subCParser::AssignmentExpressionContext::getRuleIndex() const {
  return subCParser::RuleAssignmentExpression;
}

void subCParser::AssignmentExpressionContext::copyFrom(AssignmentExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AssignmentContext ------------------------------------------------------------------

subCParser::AffectationContext* subCParser::AssignmentContext::affectation() {
  return getRuleContext<subCParser::AffectationContext>(0);
}

subCParser::AssignmentContext::AssignmentContext(AssignmentExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any subCParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryEContext ------------------------------------------------------------------

subCParser::BinaryExpressionContext* subCParser::BinaryEContext::binaryExpression() {
  return getRuleContext<subCParser::BinaryExpressionContext>(0);
}

subCParser::BinaryEContext::BinaryEContext(AssignmentExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any subCParser::BinaryEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitBinaryE(this);
  else
    return visitor->visitChildren(this);
}
subCParser::AssignmentExpressionContext* subCParser::assignmentExpression() {
  AssignmentExpressionContext *_localctx = _tracker.createInstance<AssignmentExpressionContext>(_ctx, getState());
  enterRule(_localctx, 56, subCParser::RuleAssignmentExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(320);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<AssignmentExpressionContext *>(_tracker.createInstance<subCParser::BinaryEContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(318);
      binaryExpression(0);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<AssignmentExpressionContext *>(_tracker.createInstance<subCParser::AssignmentContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(319);
      affectation();
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

//----------------- AffectationContext ------------------------------------------------------------------

subCParser::AffectationContext::AffectationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* subCParser::AffectationContext::NAME() {
  return getToken(subCParser::NAME, 0);
}

subCParser::AssignmentExpressionContext* subCParser::AffectationContext::assignmentExpression() {
  return getRuleContext<subCParser::AssignmentExpressionContext>(0);
}

subCParser::ExpressionContext* subCParser::AffectationContext::expression() {
  return getRuleContext<subCParser::ExpressionContext>(0);
}


size_t subCParser::AffectationContext::getRuleIndex() const {
  return subCParser::RuleAffectation;
}

antlrcpp::Any subCParser::AffectationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitAffectation(this);
  else
    return visitor->visitChildren(this);
}

subCParser::AffectationContext* subCParser::affectation() {
  AffectationContext *_localctx = _tracker.createInstance<AffectationContext>(_ctx, getState());
  enterRule(_localctx, 58, subCParser::RuleAffectation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(322);
    match(subCParser::NAME);
    setState(327);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == subCParser::T__3) {
      setState(323);
      match(subCParser::T__3);
      setState(324);
      expression(0);
      setState(325);
      match(subCParser::T__4);
    }
    setState(329);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << subCParser::T__2)
      | (1ULL << subCParser::T__31)
      | (1ULL << subCParser::T__32)
      | (1ULL << subCParser::T__33)
      | (1ULL << subCParser::T__34)
      | (1ULL << subCParser::T__35)
      | (1ULL << subCParser::T__36)
      | (1ULL << subCParser::T__37)
      | (1ULL << subCParser::T__38))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(330);
    assignmentExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

subCParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

subCParser::AssignmentExpressionContext* subCParser::ExpressionContext::assignmentExpression() {
  return getRuleContext<subCParser::AssignmentExpressionContext>(0);
}

subCParser::ExpressionContext* subCParser::ExpressionContext::expression() {
  return getRuleContext<subCParser::ExpressionContext>(0);
}


size_t subCParser::ExpressionContext::getRuleIndex() const {
  return subCParser::RuleExpression;
}

antlrcpp::Any subCParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<subCVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


subCParser::ExpressionContext* subCParser::expression() {
   return expression(0);
}

subCParser::ExpressionContext* subCParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  subCParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  subCParser::ExpressionContext *previousContext = _localctx;
  size_t startState = 60;
  enterRecursionRule(_localctx, 60, subCParser::RuleExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(333);
    assignmentExpression();
    _ctx->stop = _input->LT(-1);
    setState(340);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(335);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(336);
        match(subCParser::T__0);
        setState(337);
        assignmentExpression(); 
      }
      setState(342);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool subCParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 23: return postfixExpressionSempred(dynamic_cast<PostfixExpressionContext *>(context), predicateIndex);
    case 27: return binaryExpressionSempred(dynamic_cast<BinaryExpressionContext *>(context), predicateIndex);
    case 30: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool subCParser::postfixExpressionSempred(PostfixExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool subCParser::binaryExpressionSempred(BinaryExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 10);
    case 3: return precpred(_ctx, 9);
    case 4: return precpred(_ctx, 8);
    case 5: return precpred(_ctx, 7);
    case 6: return precpred(_ctx, 6);
    case 7: return precpred(_ctx, 5);
    case 8: return precpred(_ctx, 4);
    case 9: return precpred(_ctx, 3);
    case 10: return precpred(_ctx, 2);
    case 11: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool subCParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 12: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> subCParser::_decisionToDFA;
atn::PredictionContextCache subCParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN subCParser::_atn;
std::vector<uint16_t> subCParser::_serializedATN;

std::vector<std::string> subCParser::_ruleNames = {
  "prog", "declaration", "type", "const_expr", "decVariable", "var", "varInit", 
  "scalarInit", "defFun", "listeparam", "param", "bloc", "statement", "stmtCompound", 
  "stmtExpression", "stmtWhile", "stmtIf", "stmtElse", "stmtReturn", "stmtPutchar", 
  "stmtBreak", "stmtContinue", "primaryExpression", "postfixExpression", 
  "functionCall", "arguments", "unaryExpression", "binaryExpression", "assignmentExpression", 
  "affectation", "expression"
};

std::vector<std::string> subCParser::_literalNames = {
  "", "','", "';'", "'='", "'['", "']'", "'{'", "'}'", "'('", "')'", "'++'", 
  "'--'", "'-'", "'+'", "'!'", "'~'", "'*'", "'/'", "'%'", "'<<'", "'>>'", 
  "'>'", "'<'", "'>='", "'<='", "'=='", "'!='", "'&'", "'^'", "'|'", "'&&'", 
  "'||'", "'+='", "'-='", "'*='", "'/='", "'%='", "'&='", "'|='", "'^='", 
  "'char'", "'int32_t'", "'int64_t'", "'void'", "'break'", "'continue'", 
  "'while'", "'if'", "'else'", "'return'", "'putchar'"
};

std::vector<std::string> subCParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "CHAR", "INT32", "INT64", "VOID", "BREAK", "CONTINUE", 
  "WHILE", "IF", "ELSE", "RETURN", "PUTCHAR", "CHARV", "NUMERICV", "Whitespace", 
  "BlockComment", "LineComment", "INCLUDE", "INCLUDENAME", "NAME"
};

dfa::Vocabulary subCParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> subCParser::_tokenNames;

subCParser::Initializer::Initializer() {
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
    0x3, 0x3c, 0x15a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x3, 0x2, 0x7, 0x2, 0x42, 0xa, 
    0x2, 0xc, 0x2, 0xe, 0x2, 0x45, 0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 
    0x49, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x4f, 
    0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x7, 0x6, 0x57, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x5a, 0xb, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x61, 0xa, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x69, 
    0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 
    0x70, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x74, 0xa, 0x8, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x7a, 0xa, 0x9, 0xc, 0x9, 0xe, 
    0x9, 0x7d, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x5, 0xa, 0x8c, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 
    0xa, 0x91, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x96, 0xa, 
    0xb, 0xc, 0xb, 0xe, 0xb, 0x99, 0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x5, 0xc, 0x9f, 0xa, 0xc, 0x3, 0xc, 0x5, 0xc, 0xa2, 0xa, 0xc, 
    0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0xa6, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0xa9, 
    0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xb6, 0xa, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x5, 0x10, 0xbb, 0xa, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x5, 0x12, 0xcb, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0xe7, 0xa, 0x18, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x5, 0x19, 0xf1, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x7, 0x19, 0xf7, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0xfa, 0xb, 0x19, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 
    0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x105, 0xa, 0x1b, 0xc, 0x1b, 
    0xe, 0x1b, 0x108, 0xb, 0x1b, 0x5, 0x1b, 0x10a, 0xa, 0x1b, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
    0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 
    0x119, 0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
    0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
    0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x7, 0x1d, 0x13c, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 
    0x13f, 0xb, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x143, 0xa, 0x1e, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x14a, 
    0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 
    0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x155, 0xa, 0x20, 
    0xc, 0x20, 0xe, 0x20, 0x158, 0xb, 0x20, 0x3, 0x20, 0x2, 0x5, 0x30, 0x38, 
    0x3e, 0x21, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 
    0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 
    0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x2, 0x9, 0x3, 0x2, 
    0x35, 0x36, 0x3, 0x2, 0x12, 0x14, 0x3, 0x2, 0xe, 0xf, 0x3, 0x2, 0x15, 
    0x16, 0x3, 0x2, 0x17, 0x1a, 0x3, 0x2, 0x1b, 0x1c, 0x4, 0x2, 0x5, 0x5, 
    0x22, 0x29, 0x2, 0x172, 0x2, 0x43, 0x3, 0x2, 0x2, 0x2, 0x4, 0x48, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x8, 0x50, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0x52, 0x3, 0x2, 0x2, 0x2, 0xc, 0x6f, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0x73, 0x3, 0x2, 0x2, 0x2, 0x10, 0x75, 0x3, 0x2, 0x2, 0x2, 0x12, 0x90, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x92, 0x3, 0x2, 0x2, 0x2, 0x16, 0x9a, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xb5, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xba, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0xbe, 0x3, 0x2, 0x2, 0x2, 0x22, 0xc4, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0xcc, 0x3, 0x2, 0x2, 0x2, 0x26, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0xd3, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xdc, 
    0x3, 0x2, 0x2, 0x2, 0x2e, 0xe6, 0x3, 0x2, 0x2, 0x2, 0x30, 0xf0, 0x3, 
    0x2, 0x2, 0x2, 0x32, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x34, 0x109, 0x3, 0x2, 
    0x2, 0x2, 0x36, 0x118, 0x3, 0x2, 0x2, 0x2, 0x38, 0x11a, 0x3, 0x2, 0x2, 
    0x2, 0x3a, 0x142, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x144, 0x3, 0x2, 0x2, 0x2, 
    0x3e, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x40, 0x42, 0x5, 0x4, 0x3, 0x2, 0x41, 
    0x40, 0x3, 0x2, 0x2, 0x2, 0x42, 0x45, 0x3, 0x2, 0x2, 0x2, 0x43, 0x41, 
    0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x3, 0x2, 0x2, 0x2, 0x44, 0x3, 0x3, 
    0x2, 0x2, 0x2, 0x45, 0x43, 0x3, 0x2, 0x2, 0x2, 0x46, 0x49, 0x5, 0x12, 
    0xa, 0x2, 0x47, 0x49, 0x5, 0xa, 0x6, 0x2, 0x48, 0x46, 0x3, 0x2, 0x2, 
    0x2, 0x48, 0x47, 0x3, 0x2, 0x2, 0x2, 0x49, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0x4a, 0x4f, 0x7, 0x2a, 0x2, 0x2, 0x4b, 0x4f, 0x7, 0x2b, 0x2, 0x2, 0x4c, 
    0x4f, 0x7, 0x2c, 0x2, 0x2, 0x4d, 0x4f, 0x7, 0x2d, 0x2, 0x2, 0x4e, 0x4a, 
    0x3, 0x2, 0x2, 0x2, 0x4e, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4c, 0x3, 
    0x2, 0x2, 0x2, 0x4e, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x50, 0x51, 0x9, 0x2, 0x2, 0x2, 0x51, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x52, 0x53, 0x5, 0x6, 0x4, 0x2, 0x53, 0x58, 0x5, 0xc, 0x7, 0x2, 
    0x54, 0x55, 0x7, 0x3, 0x2, 0x2, 0x55, 0x57, 0x5, 0xc, 0x7, 0x2, 0x56, 
    0x54, 0x3, 0x2, 0x2, 0x2, 0x57, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x58, 0x56, 
    0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5b, 0x3, 
    0x2, 0x2, 0x2, 0x5a, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x7, 0x4, 
    0x2, 0x2, 0x5c, 0xb, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x60, 0x7, 0x3c, 0x2, 
    0x2, 0x5e, 0x5f, 0x7, 0x5, 0x2, 0x2, 0x5f, 0x61, 0x5, 0xe, 0x8, 0x2, 
    0x60, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x3, 0x2, 0x2, 0x2, 0x61, 
    0x70, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x7, 0x3c, 0x2, 0x2, 0x63, 0x64, 
    0x7, 0x6, 0x2, 0x2, 0x64, 0x65, 0x5, 0x3a, 0x1e, 0x2, 0x65, 0x68, 0x7, 
    0x7, 0x2, 0x2, 0x66, 0x67, 0x7, 0x5, 0x2, 0x2, 0x67, 0x69, 0x5, 0x10, 
    0x9, 0x2, 0x68, 0x66, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x3, 0x2, 0x2, 
    0x2, 0x69, 0x70, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x7, 0x3c, 0x2, 0x2, 
    0x6b, 0x6c, 0x7, 0x6, 0x2, 0x2, 0x6c, 0x6d, 0x7, 0x7, 0x2, 0x2, 0x6d, 
    0x6e, 0x7, 0x5, 0x2, 0x2, 0x6e, 0x70, 0x5, 0x10, 0x9, 0x2, 0x6f, 0x5d, 
    0x3, 0x2, 0x2, 0x2, 0x6f, 0x62, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x6a, 0x3, 
    0x2, 0x2, 0x2, 0x70, 0xd, 0x3, 0x2, 0x2, 0x2, 0x71, 0x74, 0x5, 0x3a, 
    0x1e, 0x2, 0x72, 0x74, 0x5, 0x10, 0x9, 0x2, 0x73, 0x71, 0x3, 0x2, 0x2, 
    0x2, 0x73, 0x72, 0x3, 0x2, 0x2, 0x2, 0x74, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0x75, 0x76, 0x7, 0x8, 0x2, 0x2, 0x76, 0x7b, 0x5, 0x3a, 0x1e, 0x2, 0x77, 
    0x78, 0x7, 0x3, 0x2, 0x2, 0x78, 0x7a, 0x5, 0x3a, 0x1e, 0x2, 0x79, 0x77, 
    0x3, 0x2, 0x2, 0x2, 0x7a, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x79, 0x3, 
    0x2, 0x2, 0x2, 0x7b, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7e, 0x3, 0x2, 
    0x2, 0x2, 0x7d, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x7, 0x9, 0x2, 
    0x2, 0x7f, 0x11, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x5, 0x6, 0x4, 0x2, 
    0x81, 0x82, 0x7, 0x3c, 0x2, 0x2, 0x82, 0x83, 0x7, 0xa, 0x2, 0x2, 0x83, 
    0x84, 0x5, 0x14, 0xb, 0x2, 0x84, 0x85, 0x7, 0xb, 0x2, 0x2, 0x85, 0x86, 
    0x5, 0x18, 0xd, 0x2, 0x86, 0x91, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x5, 
    0x6, 0x4, 0x2, 0x88, 0x89, 0x7, 0x3c, 0x2, 0x2, 0x89, 0x8b, 0x7, 0xa, 
    0x2, 0x2, 0x8a, 0x8c, 0x7, 0x2d, 0x2, 0x2, 0x8b, 0x8a, 0x3, 0x2, 0x2, 
    0x2, 0x8b, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x3, 0x2, 0x2, 0x2, 
    0x8d, 0x8e, 0x7, 0xb, 0x2, 0x2, 0x8e, 0x8f, 0x5, 0x18, 0xd, 0x2, 0x8f, 
    0x91, 0x3, 0x2, 0x2, 0x2, 0x90, 0x80, 0x3, 0x2, 0x2, 0x2, 0x90, 0x87, 
    0x3, 0x2, 0x2, 0x2, 0x91, 0x13, 0x3, 0x2, 0x2, 0x2, 0x92, 0x97, 0x5, 
    0x16, 0xc, 0x2, 0x93, 0x94, 0x7, 0x3, 0x2, 0x2, 0x94, 0x96, 0x5, 0x16, 
    0xc, 0x2, 0x95, 0x93, 0x3, 0x2, 0x2, 0x2, 0x96, 0x99, 0x3, 0x2, 0x2, 
    0x2, 0x97, 0x95, 0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x3, 0x2, 0x2, 0x2, 
    0x98, 0x15, 0x3, 0x2, 0x2, 0x2, 0x99, 0x97, 0x3, 0x2, 0x2, 0x2, 0x9a, 
    0x9b, 0x5, 0x6, 0x4, 0x2, 0x9b, 0xa1, 0x7, 0x3c, 0x2, 0x2, 0x9c, 0x9e, 
    0x7, 0x6, 0x2, 0x2, 0x9d, 0x9f, 0x5, 0x3e, 0x20, 0x2, 0x9e, 0x9d, 0x3, 
    0x2, 0x2, 0x2, 0x9e, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x3, 0x2, 
    0x2, 0x2, 0xa0, 0xa2, 0x7, 0x7, 0x2, 0x2, 0xa1, 0x9c, 0x3, 0x2, 0x2, 
    0x2, 0xa1, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x17, 0x3, 0x2, 0x2, 0x2, 
    0xa3, 0xa7, 0x7, 0x8, 0x2, 0x2, 0xa4, 0xa6, 0x5, 0x1a, 0xe, 0x2, 0xa5, 
    0xa4, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa5, 
    0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xaa, 0x3, 
    0x2, 0x2, 0x2, 0xa9, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x7, 0x9, 
    0x2, 0x2, 0xab, 0x19, 0x3, 0x2, 0x2, 0x2, 0xac, 0xb6, 0x5, 0xa, 0x6, 
    0x2, 0xad, 0xb6, 0x5, 0x1e, 0x10, 0x2, 0xae, 0xb6, 0x5, 0x1c, 0xf, 0x2, 
    0xaf, 0xb6, 0x5, 0x20, 0x11, 0x2, 0xb0, 0xb6, 0x5, 0x22, 0x12, 0x2, 
    0xb1, 0xb6, 0x5, 0x26, 0x14, 0x2, 0xb2, 0xb6, 0x5, 0x28, 0x15, 0x2, 
    0xb3, 0xb6, 0x5, 0x2a, 0x16, 0x2, 0xb4, 0xb6, 0x5, 0x2c, 0x17, 0x2, 
    0xb5, 0xac, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xad, 0x3, 0x2, 0x2, 0x2, 0xb5, 
    0xae, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb0, 
    0x3, 0x2, 0x2, 0x2, 0xb5, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb2, 0x3, 
    0x2, 0x2, 0x2, 0xb5, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb4, 0x3, 0x2, 
    0x2, 0x2, 0xb6, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x5, 0x18, 0xd, 
    0x2, 0xb8, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xbb, 0x5, 0x3e, 0x20, 0x2, 
    0xba, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbb, 
    0xbc, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x7, 0x4, 0x2, 0x2, 0xbd, 0x1f, 
    0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x7, 0x30, 0x2, 0x2, 0xbf, 0xc0, 0x7, 
    0xa, 0x2, 0x2, 0xc0, 0xc1, 0x5, 0x3e, 0x20, 0x2, 0xc1, 0xc2, 0x7, 0xb, 
    0x2, 0x2, 0xc2, 0xc3, 0x5, 0x1a, 0xe, 0x2, 0xc3, 0x21, 0x3, 0x2, 0x2, 
    0x2, 0xc4, 0xc5, 0x7, 0x31, 0x2, 0x2, 0xc5, 0xc6, 0x7, 0xa, 0x2, 0x2, 
    0xc6, 0xc7, 0x5, 0x3e, 0x20, 0x2, 0xc7, 0xc8, 0x7, 0xb, 0x2, 0x2, 0xc8, 
    0xca, 0x5, 0x1a, 0xe, 0x2, 0xc9, 0xcb, 0x5, 0x24, 0x13, 0x2, 0xca, 0xc9, 
    0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcb, 0x23, 0x3, 
    0x2, 0x2, 0x2, 0xcc, 0xcd, 0x7, 0x32, 0x2, 0x2, 0xcd, 0xce, 0x5, 0x1a, 
    0xe, 0x2, 0xce, 0x25, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x7, 0x33, 0x2, 
    0x2, 0xd0, 0xd1, 0x5, 0x3e, 0x20, 0x2, 0xd1, 0xd2, 0x7, 0x4, 0x2, 0x2, 
    0xd2, 0x27, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x7, 0x34, 0x2, 0x2, 0xd4, 
    0xd5, 0x7, 0xa, 0x2, 0x2, 0xd5, 0xd6, 0x5, 0x3a, 0x1e, 0x2, 0xd6, 0xd7, 
    0x7, 0xb, 0x2, 0x2, 0xd7, 0xd8, 0x7, 0x4, 0x2, 0x2, 0xd8, 0x29, 0x3, 
    0x2, 0x2, 0x2, 0xd9, 0xda, 0x7, 0x2e, 0x2, 0x2, 0xda, 0xdb, 0x7, 0x4, 
    0x2, 0x2, 0xdb, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 0x7, 0x2f, 0x2, 
    0x2, 0xdd, 0xde, 0x7, 0x4, 0x2, 0x2, 0xde, 0x2d, 0x3, 0x2, 0x2, 0x2, 
    0xdf, 0xe7, 0x7, 0x3c, 0x2, 0x2, 0xe0, 0xe7, 0x7, 0x36, 0x2, 0x2, 0xe1, 
    0xe7, 0x7, 0x35, 0x2, 0x2, 0xe2, 0xe3, 0x7, 0xa, 0x2, 0x2, 0xe3, 0xe4, 
    0x5, 0x3e, 0x20, 0x2, 0xe4, 0xe5, 0x7, 0xb, 0x2, 0x2, 0xe5, 0xe7, 0x3, 
    0x2, 0x2, 0x2, 0xe6, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe0, 0x3, 0x2, 
    0x2, 0x2, 0xe6, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe2, 0x3, 0x2, 0x2, 
    0x2, 0xe7, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe9, 0x8, 0x19, 0x1, 0x2, 
    0xe9, 0xf1, 0x5, 0x2e, 0x18, 0x2, 0xea, 0xf1, 0x5, 0x32, 0x1a, 0x2, 
    0xeb, 0xec, 0x7, 0x3c, 0x2, 0x2, 0xec, 0xed, 0x7, 0x6, 0x2, 0x2, 0xed, 
    0xee, 0x5, 0x3e, 0x20, 0x2, 0xee, 0xef, 0x7, 0x7, 0x2, 0x2, 0xef, 0xf1, 
    0x3, 0x2, 0x2, 0x2, 0xf0, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xea, 0x3, 
    0x2, 0x2, 0x2, 0xf0, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf8, 0x3, 0x2, 
    0x2, 0x2, 0xf2, 0xf3, 0xc, 0x6, 0x2, 0x2, 0xf3, 0xf7, 0x7, 0xc, 0x2, 
    0x2, 0xf4, 0xf5, 0xc, 0x5, 0x2, 0x2, 0xf5, 0xf7, 0x7, 0xd, 0x2, 0x2, 
    0xf6, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf7, 
    0xfa, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 
    0x3, 0x2, 0x2, 0x2, 0xf9, 0x31, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xf8, 0x3, 
    0x2, 0x2, 0x2, 0xfb, 0xfc, 0x7, 0x3c, 0x2, 0x2, 0xfc, 0xfd, 0x7, 0xa, 
    0x2, 0x2, 0xfd, 0xfe, 0x5, 0x34, 0x1b, 0x2, 0xfe, 0xff, 0x7, 0xb, 0x2, 
    0x2, 0xff, 0x33, 0x3, 0x2, 0x2, 0x2, 0x100, 0x10a, 0x3, 0x2, 0x2, 0x2, 
    0x101, 0x106, 0x5, 0x3a, 0x1e, 0x2, 0x102, 0x103, 0x7, 0x3, 0x2, 0x2, 
    0x103, 0x105, 0x5, 0x3a, 0x1e, 0x2, 0x104, 0x102, 0x3, 0x2, 0x2, 0x2, 
    0x105, 0x108, 0x3, 0x2, 0x2, 0x2, 0x106, 0x104, 0x3, 0x2, 0x2, 0x2, 
    0x106, 0x107, 0x3, 0x2, 0x2, 0x2, 0x107, 0x10a, 0x3, 0x2, 0x2, 0x2, 
    0x108, 0x106, 0x3, 0x2, 0x2, 0x2, 0x109, 0x100, 0x3, 0x2, 0x2, 0x2, 
    0x109, 0x101, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x35, 0x3, 0x2, 0x2, 0x2, 0x10b, 
    0x119, 0x5, 0x30, 0x19, 0x2, 0x10c, 0x10d, 0x7, 0xc, 0x2, 0x2, 0x10d, 
    0x119, 0x5, 0x36, 0x1c, 0x2, 0x10e, 0x10f, 0x7, 0xd, 0x2, 0x2, 0x10f, 
    0x119, 0x5, 0x36, 0x1c, 0x2, 0x110, 0x111, 0x7, 0xe, 0x2, 0x2, 0x111, 
    0x119, 0x5, 0x36, 0x1c, 0x2, 0x112, 0x113, 0x7, 0xf, 0x2, 0x2, 0x113, 
    0x119, 0x5, 0x36, 0x1c, 0x2, 0x114, 0x115, 0x7, 0x10, 0x2, 0x2, 0x115, 
    0x119, 0x5, 0x36, 0x1c, 0x2, 0x116, 0x117, 0x7, 0x11, 0x2, 0x2, 0x117, 
    0x119, 0x5, 0x36, 0x1c, 0x2, 0x118, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x118, 
    0x10c, 0x3, 0x2, 0x2, 0x2, 0x118, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x118, 
    0x110, 0x3, 0x2, 0x2, 0x2, 0x118, 0x112, 0x3, 0x2, 0x2, 0x2, 0x118, 
    0x114, 0x3, 0x2, 0x2, 0x2, 0x118, 0x116, 0x3, 0x2, 0x2, 0x2, 0x119, 
    0x37, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11b, 0x8, 0x1d, 0x1, 0x2, 0x11b, 
    0x11c, 0x5, 0x36, 0x1c, 0x2, 0x11c, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x11d, 
    0x11e, 0xc, 0xc, 0x2, 0x2, 0x11e, 0x11f, 0x9, 0x3, 0x2, 0x2, 0x11f, 
    0x13c, 0x5, 0x38, 0x1d, 0xd, 0x120, 0x121, 0xc, 0xb, 0x2, 0x2, 0x121, 
    0x122, 0x9, 0x4, 0x2, 0x2, 0x122, 0x13c, 0x5, 0x38, 0x1d, 0xc, 0x123, 
    0x124, 0xc, 0xa, 0x2, 0x2, 0x124, 0x125, 0x9, 0x5, 0x2, 0x2, 0x125, 
    0x13c, 0x5, 0x38, 0x1d, 0xb, 0x126, 0x127, 0xc, 0x9, 0x2, 0x2, 0x127, 
    0x128, 0x9, 0x6, 0x2, 0x2, 0x128, 0x13c, 0x5, 0x38, 0x1d, 0xa, 0x129, 
    0x12a, 0xc, 0x8, 0x2, 0x2, 0x12a, 0x12b, 0x9, 0x7, 0x2, 0x2, 0x12b, 
    0x13c, 0x5, 0x38, 0x1d, 0x9, 0x12c, 0x12d, 0xc, 0x7, 0x2, 0x2, 0x12d, 
    0x12e, 0x7, 0x1d, 0x2, 0x2, 0x12e, 0x13c, 0x5, 0x38, 0x1d, 0x8, 0x12f, 
    0x130, 0xc, 0x6, 0x2, 0x2, 0x130, 0x131, 0x7, 0x1e, 0x2, 0x2, 0x131, 
    0x13c, 0x5, 0x38, 0x1d, 0x7, 0x132, 0x133, 0xc, 0x5, 0x2, 0x2, 0x133, 
    0x134, 0x7, 0x1f, 0x2, 0x2, 0x134, 0x13c, 0x5, 0x38, 0x1d, 0x6, 0x135, 
    0x136, 0xc, 0x4, 0x2, 0x2, 0x136, 0x137, 0x7, 0x20, 0x2, 0x2, 0x137, 
    0x13c, 0x5, 0x38, 0x1d, 0x5, 0x138, 0x139, 0xc, 0x3, 0x2, 0x2, 0x139, 
    0x13a, 0x7, 0x21, 0x2, 0x2, 0x13a, 0x13c, 0x5, 0x38, 0x1d, 0x4, 0x13b, 
    0x11d, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x120, 0x3, 0x2, 0x2, 0x2, 0x13b, 
    0x123, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x126, 0x3, 0x2, 0x2, 0x2, 0x13b, 
    0x129, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x13b, 
    0x12f, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x132, 0x3, 0x2, 0x2, 0x2, 0x13b, 
    0x135, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x138, 0x3, 0x2, 0x2, 0x2, 0x13c, 
    0x13f, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13d, 
    0x13e, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x39, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x13d, 
    0x3, 0x2, 0x2, 0x2, 0x140, 0x143, 0x5, 0x38, 0x1d, 0x2, 0x141, 0x143, 
    0x5, 0x3c, 0x1f, 0x2, 0x142, 0x140, 0x3, 0x2, 0x2, 0x2, 0x142, 0x141, 
    0x3, 0x2, 0x2, 0x2, 0x143, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x144, 0x149, 0x7, 
    0x3c, 0x2, 0x2, 0x145, 0x146, 0x7, 0x6, 0x2, 0x2, 0x146, 0x147, 0x5, 
    0x3e, 0x20, 0x2, 0x147, 0x148, 0x7, 0x7, 0x2, 0x2, 0x148, 0x14a, 0x3, 
    0x2, 0x2, 0x2, 0x149, 0x145, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14a, 0x3, 
    0x2, 0x2, 0x2, 0x14a, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14c, 0x9, 
    0x8, 0x2, 0x2, 0x14c, 0x14d, 0x5, 0x3a, 0x1e, 0x2, 0x14d, 0x3d, 0x3, 
    0x2, 0x2, 0x2, 0x14e, 0x14f, 0x8, 0x20, 0x1, 0x2, 0x14f, 0x150, 0x5, 
    0x3a, 0x1e, 0x2, 0x150, 0x156, 0x3, 0x2, 0x2, 0x2, 0x151, 0x152, 0xc, 
    0x3, 0x2, 0x2, 0x152, 0x153, 0x7, 0x3, 0x2, 0x2, 0x153, 0x155, 0x5, 
    0x3a, 0x1e, 0x2, 0x154, 0x151, 0x3, 0x2, 0x2, 0x2, 0x155, 0x158, 0x3, 
    0x2, 0x2, 0x2, 0x156, 0x154, 0x3, 0x2, 0x2, 0x2, 0x156, 0x157, 0x3, 
    0x2, 0x2, 0x2, 0x157, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x158, 0x156, 0x3, 0x2, 
    0x2, 0x2, 0x20, 0x43, 0x48, 0x4e, 0x58, 0x60, 0x68, 0x6f, 0x73, 0x7b, 
    0x8b, 0x90, 0x97, 0x9e, 0xa1, 0xa7, 0xb5, 0xba, 0xca, 0xe6, 0xf0, 0xf6, 
    0xf8, 0x106, 0x109, 0x118, 0x13b, 0x13d, 0x142, 0x149, 0x156, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

subCParser::Initializer subCParser::_init;
