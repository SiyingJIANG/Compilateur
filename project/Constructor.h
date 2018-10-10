//
// Created by Gheorghe on 12-Mar-18.
//

#ifndef PROJECT_CONSTRUCTOR_H
#define PROJECT_CONSTRUCTOR_H

#include <antlr/subCBaseVisitor.h>

class Constructor: public subCBaseVisitor
{
public:
    antlrcpp::Any visitProg(subCParser::ProgContext *ctx) override;

    antlrcpp::Any visitFunctionDef(subCParser::FunctionDefContext *ctx) override;

    antlrcpp::Any visitVariableDec(subCParser::VariableDecContext *ctx) override;

    antlrcpp::Any visitChar(subCParser::CharContext *ctx) override;

    antlrcpp::Any visitInt32(subCParser::Int32Context *ctx) override;

    antlrcpp::Any visitInt64(subCParser::Int64Context *ctx) override;

    antlrcpp::Any visitVoid(subCParser::VoidContext *ctx) override;

    antlrcpp::Any visitConst_expr(subCParser::Const_exprContext *ctx) override;

    antlrcpp::Any visitDecVariable(subCParser::DecVariableContext *ctx) override;

    antlrcpp::Any visitVar_simple(subCParser::Var_simpleContext *ctx) override;

    antlrcpp::Any visitVar_table_size(subCParser::Var_table_sizeContext *ctx) override;

    antlrcpp::Any visitVar_table(subCParser::Var_tableContext *ctx) override;

    antlrcpp::Any visitVarInit1(subCParser::VarInit1Context *ctx) override;

    antlrcpp::Any visitVarInit2(subCParser::VarInit2Context *ctx) override;

    antlrcpp::Any visitScalarInit(subCParser::ScalarInitContext *ctx) override;

    antlrcpp::Any visitDefFun_param(subCParser::DefFun_paramContext *ctx) override;

    antlrcpp::Any visitDefFun_no_param(subCParser::DefFun_no_paramContext *ctx) override;

    antlrcpp::Any visitListeparam(subCParser::ListeparamContext *ctx) override;

    antlrcpp::Any visitParam(subCParser::ParamContext *ctx) override;

    antlrcpp::Any visitBloc(subCParser::BlocContext *ctx) override;

    antlrcpp::Any visitStatement(subCParser::StatementContext *ctx) override;

    antlrcpp::Any visitStmtCompound(subCParser::StmtCompoundContext *ctx) override;

    antlrcpp::Any visitStmtExpression(subCParser::StmtExpressionContext *ctx) override;

    antlrcpp::Any visitStmtWhile(subCParser::StmtWhileContext *ctx) override;

    antlrcpp::Any visitStmtIf(subCParser::StmtIfContext *ctx) override;

    antlrcpp::Any visitStmtElse(subCParser::StmtElseContext *ctx) override;

    antlrcpp::Any visitStmtReturn(subCParser::StmtReturnContext *ctx) override;

 //   antlrcpp::Any visitStmtGetchar(subCParser::StmtGetcharContext *ctx) override;

    antlrcpp::Any visitStmtPutchar(subCParser::StmtPutcharContext *ctx) override;

    antlrcpp::Any visitStmtBreak(subCParser::StmtBreakContext *ctx) override;

    antlrcpp::Any visitStmtContinue(subCParser::StmtContinueContext *ctx) override;

    antlrcpp::Any visitIdentifier(subCParser::IdentifierContext *ctx) override;

    antlrcpp::Any visitNumericValue(subCParser::NumericValueContext *ctx) override;

    antlrcpp::Any visitCharValue(subCParser::CharValueContext *ctx) override;

    antlrcpp::Any visitParantheses(subCParser::ParanthesesContext *ctx) override;

    antlrcpp::Any visitSubscript(subCParser::SubscriptContext *ctx) override;

    antlrcpp::Any visitPrimaryE(subCParser::PrimaryEContext *ctx) override;

    antlrcpp::Any visitCallFunction(subCParser::CallFunctionContext *ctx) override;

    antlrcpp::Any visitPostunary(subCParser::PostunaryContext *ctx) override;

    antlrcpp::Any visitFunctionCall(subCParser::FunctionCallContext *ctx) override;

    antlrcpp::Any visitArguments(subCParser::ArgumentsContext *ctx) override;

    antlrcpp::Any visitPostfixE(subCParser::PostfixEContext *ctx) override;

    antlrcpp::Any visitPreunary(subCParser::PreunaryContext *ctx) override;

    antlrcpp::Any visitBinaryE(subCParser::BinaryEContext *ctx) override;

    antlrcpp::Any visitAssignment(subCParser::AssignmentContext *ctx) override;

    antlrcpp::Any visitAffectation(subCParser::AffectationContext *ctx) override;

    antlrcpp::Any visitExpression(subCParser::ExpressionContext *ctx) override;

    antlrcpp::Any visitBinaryExpression(subCParser::BinaryExpressionContext *ctx) override;

};


#endif //PROJECT_CONSTRUCTOR_H
