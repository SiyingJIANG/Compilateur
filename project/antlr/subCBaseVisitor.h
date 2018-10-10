
// Generated from C:/Users/Gheorghe/Desktop/COMP/project/antlr\subC.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "subCVisitor.h"


/**
 * This class provides an empty implementation of subCVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  subCBaseVisitor : public subCVisitor {
public:

  virtual antlrcpp::Any visitProg(subCParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDef(subCParser::FunctionDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableDec(subCParser::VariableDecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChar(subCParser::CharContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInt32(subCParser::Int32Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInt64(subCParser::Int64Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVoid(subCParser::VoidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConst_expr(subCParser::Const_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecVariable(subCParser::DecVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar_simple(subCParser::Var_simpleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar_table_size(subCParser::Var_table_sizeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar_table(subCParser::Var_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarInit1(subCParser::VarInit1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarInit2(subCParser::VarInit2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScalarInit(subCParser::ScalarInitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefFun_param(subCParser::DefFun_paramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefFun_no_param(subCParser::DefFun_no_paramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitListeparam(subCParser::ListeparamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParam(subCParser::ParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBloc(subCParser::BlocContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(subCParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmtCompound(subCParser::StmtCompoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmtExpression(subCParser::StmtExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmtWhile(subCParser::StmtWhileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmtIf(subCParser::StmtIfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmtElse(subCParser::StmtElseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmtReturn(subCParser::StmtReturnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmtPutchar(subCParser::StmtPutcharContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmtBreak(subCParser::StmtBreakContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmtContinue(subCParser::StmtContinueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(subCParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumericValue(subCParser::NumericValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharValue(subCParser::CharValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParantheses(subCParser::ParanthesesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubscript(subCParser::SubscriptContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryE(subCParser::PrimaryEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCallFunction(subCParser::CallFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostunary(subCParser::PostunaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCall(subCParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArguments(subCParser::ArgumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostfixE(subCParser::PostfixEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreunary(subCParser::PreunaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinaryExpression(subCParser::BinaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinaryE(subCParser::BinaryEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment(subCParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffectation(subCParser::AffectationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(subCParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }


};

