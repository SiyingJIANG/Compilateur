
// Generated from C:/Users/Gheorghe/Desktop/COMP/project/antlr\subC.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "subCParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by subCParser.
 */
class  subCVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by subCParser.
   */
    virtual antlrcpp::Any visitProg(subCParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDef(subCParser::FunctionDefContext *context) = 0;

    virtual antlrcpp::Any visitVariableDec(subCParser::VariableDecContext *context) = 0;

    virtual antlrcpp::Any visitChar(subCParser::CharContext *context) = 0;

    virtual antlrcpp::Any visitInt32(subCParser::Int32Context *context) = 0;

    virtual antlrcpp::Any visitInt64(subCParser::Int64Context *context) = 0;

    virtual antlrcpp::Any visitVoid(subCParser::VoidContext *context) = 0;

    virtual antlrcpp::Any visitConst_expr(subCParser::Const_exprContext *context) = 0;

    virtual antlrcpp::Any visitDecVariable(subCParser::DecVariableContext *context) = 0;

    virtual antlrcpp::Any visitVar_simple(subCParser::Var_simpleContext *context) = 0;

    virtual antlrcpp::Any visitVar_table_size(subCParser::Var_table_sizeContext *context) = 0;

    virtual antlrcpp::Any visitVar_table(subCParser::Var_tableContext *context) = 0;

    virtual antlrcpp::Any visitVarInit1(subCParser::VarInit1Context *context) = 0;

    virtual antlrcpp::Any visitVarInit2(subCParser::VarInit2Context *context) = 0;

    virtual antlrcpp::Any visitScalarInit(subCParser::ScalarInitContext *context) = 0;

    virtual antlrcpp::Any visitDefFun_param(subCParser::DefFun_paramContext *context) = 0;

    virtual antlrcpp::Any visitDefFun_no_param(subCParser::DefFun_no_paramContext *context) = 0;

    virtual antlrcpp::Any visitListeparam(subCParser::ListeparamContext *context) = 0;

    virtual antlrcpp::Any visitParam(subCParser::ParamContext *context) = 0;

    virtual antlrcpp::Any visitBloc(subCParser::BlocContext *context) = 0;

    virtual antlrcpp::Any visitStatement(subCParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitStmtCompound(subCParser::StmtCompoundContext *context) = 0;

    virtual antlrcpp::Any visitStmtExpression(subCParser::StmtExpressionContext *context) = 0;

    virtual antlrcpp::Any visitStmtWhile(subCParser::StmtWhileContext *context) = 0;

    virtual antlrcpp::Any visitStmtIf(subCParser::StmtIfContext *context) = 0;

    virtual antlrcpp::Any visitStmtElse(subCParser::StmtElseContext *context) = 0;

    virtual antlrcpp::Any visitStmtReturn(subCParser::StmtReturnContext *context) = 0;

    virtual antlrcpp::Any visitStmtPutchar(subCParser::StmtPutcharContext *context) = 0;

    virtual antlrcpp::Any visitStmtBreak(subCParser::StmtBreakContext *context) = 0;

    virtual antlrcpp::Any visitStmtContinue(subCParser::StmtContinueContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(subCParser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitNumericValue(subCParser::NumericValueContext *context) = 0;

    virtual antlrcpp::Any visitCharValue(subCParser::CharValueContext *context) = 0;

    virtual antlrcpp::Any visitParantheses(subCParser::ParanthesesContext *context) = 0;

    virtual antlrcpp::Any visitSubscript(subCParser::SubscriptContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryE(subCParser::PrimaryEContext *context) = 0;

    virtual antlrcpp::Any visitCallFunction(subCParser::CallFunctionContext *context) = 0;

    virtual antlrcpp::Any visitPostunary(subCParser::PostunaryContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCall(subCParser::FunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitArguments(subCParser::ArgumentsContext *context) = 0;

    virtual antlrcpp::Any visitPostfixE(subCParser::PostfixEContext *context) = 0;

    virtual antlrcpp::Any visitPreunary(subCParser::PreunaryContext *context) = 0;

    virtual antlrcpp::Any visitBinaryExpression(subCParser::BinaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBinaryE(subCParser::BinaryEContext *context) = 0;

    virtual antlrcpp::Any visitAssignment(subCParser::AssignmentContext *context) = 0;

    virtual antlrcpp::Any visitAffectation(subCParser::AffectationContext *context) = 0;

    virtual antlrcpp::Any visitExpression(subCParser::ExpressionContext *context) = 0;


};

