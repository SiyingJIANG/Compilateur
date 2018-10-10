//
// Created by Gheorghe on 12-Mar-18.
//

#include <structure/Program.h>
#include <structure/Parameter.h>
#include <structure/Bloc.h>
#include <structure/Function.h>
#include <structure/VarDeclaration.h>
#include <structure/While.h>
#include <structure/If.h>
#include <structure/Return.h>
#include <structure/FunctionCall.h>
#include <structure/Break.h>
#include <structure/Identifier.h>
#include <structure/IdentifierArr.h>
#include <structure/Constant.h>
#include <structure/Assignment.h>
#include <structure/BinaryExpression.h>
#include <structure/UnaryExpression.h>
#include <structure/DeclStatement.h>
#include <structure/CompoundStatement.h>
#include <structure/Continue.h>
#include <structure/PutChar.h>
#include <structure/GetChar.h>
#include "Constructor.h"


using namespace std;

antlrcpp::Any Constructor::visitProg(subCParser::ProgContext *ctx)
{
    vector<Declaration*> vectorDeclaration;
    for (subCParser::DeclarationContext* declarationContext : ctx->declaration()) {
        vector<Declaration *> vDeclaration=visit(declarationContext);
        vectorDeclaration.insert(vectorDeclaration.end(), vDeclaration.begin(), vDeclaration.end());
    }
    return new Program(vectorDeclaration);
}

antlrcpp::Any Constructor::visitFunctionDef(subCParser::FunctionDefContext *ctx)
{
    vector<Declaration*> vDeclaration;
    Declaration * d=visit(ctx->defFun()).as<Function*>();
    vDeclaration.push_back(d);
    return vDeclaration;
}

antlrcpp::Any Constructor::visitVariableDec(subCParser::VariableDecContext *ctx)
{
    return visit(ctx->decVariable());
}

antlrcpp::Any Constructor::visitChar(subCParser::CharContext *ctx)
{
    return new Type(CHAR);
}

antlrcpp::Any Constructor::visitInt32(subCParser::Int32Context *ctx)
{
    return new Type(INT32_T);
}
antlrcpp::Any Constructor::visitInt64(subCParser::Int64Context *ctx)
{
    return new Type(INT64_T);
}

antlrcpp::Any Constructor::visitVoid(subCParser::VoidContext *ctx)
{
    return new Type(VOID);
}

antlrcpp::Any Constructor::visitConst_expr(subCParser::Const_exprContext *ctx)
{
    if (ctx->NUMERICV()!= nullptr) return stoi(ctx->NUMERICV()->getText());
    if (ctx->CHARV()!= nullptr) return int(ctx->CHARV()->getText().at(0));
}

antlrcpp::Any Constructor::visitDecVariable(subCParser::DecVariableContext *ctx)
{
    vector<Declaration*> vDeclaration;
    Type * type=visit(ctx->type());
    for (int i=0;i<ctx->var().size();i++)
    {
        Declaration * varDeclaration=visit(ctx->var(i));
        varDeclaration->setType(*type);
        vDeclaration.push_back(varDeclaration);
    }
    return vDeclaration;
}

antlrcpp::Any Constructor::visitVar_simple(subCParser::Var_simpleContext *ctx)
{
    string name=ctx->NAME()->getText();
    Expression* initialValue;
    if (ctx->varInit())
    {
        initialValue =  visit(ctx->varInit());
        return (Declaration*)new VarDeclaration(Type(UNKNOWN), name, initialValue);
    }
    return (Declaration*)new VarDeclaration(Type(UNKNOWN), name);
}

antlrcpp::Any Constructor::visitVar_table_size(subCParser::Var_table_sizeContext *ctx)
{
    string name=ctx->NAME()->getText();
    Expression *  size=visit(ctx->assignmentExpression());
    if (ctx->scalarInit())
    {
        vector<Expression *> vec = visit(ctx->scalarInit());
        return (Declaration *) new VarDeclaration(Type(UNKNOWN), name, true, size, vec);
    }
    return (Declaration *) new VarDeclaration(Type(UNKNOWN),name,size);
}

antlrcpp::Any Constructor::visitVar_table(subCParser::Var_tableContext *ctx)
{
    string name=ctx->NAME()->getText();
    vector<Expression * > vec=visit(ctx->scalarInit());
    return (Declaration*)new VarDeclaration(Type(VOID),name,true,vec);
}

antlrcpp::Any Constructor::visitVarInit1(subCParser::VarInit1Context *ctx)
{
    return visit(ctx->assignmentExpression());
}

antlrcpp::Any Constructor::visitVarInit2(subCParser::VarInit2Context *ctx)
{
    vector<Expression * > *vec=visit(ctx->scalarInit());
    return vec->at(0);
}

antlrcpp::Any Constructor::visitScalarInit(subCParser::ScalarInitContext *ctx)
{
    vector<subCParser::AssignmentExpressionContext* > vecContext=ctx->assignmentExpression();
    vector<Expression * > vecExpression;
    for(subCParser::AssignmentExpressionContext* exprContext:vecContext)
    {
        vecExpression.push_back(visit(exprContext).as<Expression*>());
    }
    return vecExpression;
}

antlrcpp::Any Constructor::visitDefFun_param(subCParser::DefFun_paramContext *ctx)
{
    Type *returnType=visit(ctx->type());
    string name =ctx->NAME()->getText();
    vector<Parameter *> vectorParameter=visit(ctx->listeparam());
    Bloc * bloc=visit(ctx->bloc());
    return new Function(*returnType, name, vectorParameter, bloc);
}

antlrcpp::Any Constructor::visitDefFun_no_param(subCParser::DefFun_no_paramContext *ctx)
{
    Type *returnType=visit(ctx->type());
    string name =ctx->NAME()->getText();
    Bloc * bloc=visit(ctx->bloc());
    return new Function(*returnType, name, bloc);
}

antlrcpp::Any Constructor::visitListeparam(subCParser::ListeparamContext *ctx)
{
    vector<Parameter *> vecParameter;
    for (subCParser::ParamContext * paramContext: ctx->param())
    {
        vecParameter.push_back(visit(paramContext).as<Parameter*>());
    }
    return vecParameter;
}

antlrcpp::Any Constructor::visitParam(subCParser::ParamContext *ctx)
{
    Type * type=visit(ctx->type());
    string name=ctx->NAME()->getText();
    if (ctx->expression()!= nullptr)
    {
        return new Parameter(*type, name,true,visit(ctx->expression()).as<Expression*>());
    }
    if (ctx->children.size()>2)
    {
        return new Parameter(*type, name,true);
    }
    return new Parameter(*type,name);


}

antlrcpp::Any Constructor::visitBloc(subCParser::BlocContext *ctx)
{
    vector<Statement*> vStatement;
    for(subCParser::StatementContext* sCtx:ctx->statement())
    {
        Statement * s=visit(sCtx);
        vStatement.push_back(s);
    }

    return new Bloc(vStatement);
}

antlrcpp::Any Constructor::visitStatement(subCParser::StatementContext *ctx)
{
    if (ctx->decVariable())
    {
        vector <Declaration *> vVarDeclaration=visit(ctx->decVariable());
        return (Statement *)new DeclStatement(vVarDeclaration);
    }
    if (ctx->stmtExpression())
        return visit(ctx->stmtExpression());
    if (ctx->stmtCompound())
        return visit(ctx->stmtCompound());
    if (ctx->stmtWhile())
        return visit(ctx->stmtWhile());
    if (ctx->stmtIf())
        return visit(ctx->stmtIf());
    if (ctx->stmtReturn())
        return visit(ctx->stmtReturn());
    if (ctx->stmtBreak())
        return visit(ctx->stmtBreak());
    if (ctx->stmtPutchar())
        return visit(ctx->stmtPutchar());
//    if (ctx->stmtGetchar())
//        return visit(ctx->stmtGetchar());
}

antlrcpp::Any Constructor::visitStmtCompound(subCParser::StmtCompoundContext *ctx)
{
    return (Statement*)new CompoundStatement(visit(ctx->bloc()).as<Bloc*>()->getVectorStatement());
}

antlrcpp::Any Constructor::visitStmtExpression(subCParser::StmtExpressionContext *ctx)
{
    return (Statement *)visit(ctx->expression()).as<Expression*>();
}

antlrcpp::Any Constructor::visitStmtWhile(subCParser::StmtWhileContext *ctx)
{
    return (Statement *)new While(visit(ctx->expression()).as<Expression*>(),visit(ctx->statement()).as<Statement*>());
}

antlrcpp::Any Constructor::visitStmtIf(subCParser::StmtIfContext *ctx)
{
    Statement * elsestmt= nullptr;
    if (ctx->stmtElse()!= nullptr)
        elsestmt= visit(ctx->stmtElse());

    return (Statement *)new If(visit(ctx->expression()).as<Expression*>(),visit(ctx->statement()).as<Statement*>(),elsestmt);
}

antlrcpp::Any Constructor::visitStmtElse(subCParser::StmtElseContext *ctx)
{
    return visit(ctx->statement());
}

antlrcpp::Any Constructor::visitStmtReturn(subCParser::StmtReturnContext *ctx)
{
    return (Statement *)new Return(visit(ctx->expression()).as<Expression*>());
}

/*antlrcpp::Any Constructor::visitStmtGetchar(subCParser::StmtGetcharContext *ctx)
{
    return (Statement *)new GetChar();
}*/

antlrcpp::Any Constructor::visitStmtPutchar(subCParser::StmtPutcharContext *ctx)
{
    return (Statement *)new PutChar(visit(ctx->assignmentExpression()).as<Expression*>());
}

antlrcpp::Any Constructor::visitStmtBreak(subCParser::StmtBreakContext *ctx)
{
    return (Statement *)new Break();
}

antlrcpp::Any Constructor::visitStmtContinue(subCParser::StmtContinueContext *ctx)
{
    return (Statement *)new Continue();
}

antlrcpp::Any Constructor::visitIdentifier(subCParser::IdentifierContext *ctx)
{
    return (Expression *)new Identifier(ctx->NAME()->getText());
}

antlrcpp::Any Constructor::visitNumericValue(subCParser::NumericValueContext *ctx)
{
    int64_t value=stoi(ctx->NUMERICV()->getText());
    if (value>INT32_MAX)
        return (Expression *)new Constant(INT64_T,value);
    else
        return (Expression *)new Constant(INT32_T,value);
}

antlrcpp::Any Constructor::visitCharValue(subCParser::CharValueContext *ctx)
{
    string character=(ctx->CHARV()->getText());
    character=character.substr(1,character.length()-2);
    char c=character.back();
    if (character.front() == '\\')
    {
        switch (character.back())
        {
            case 'a' :
                c= '\a';
                break;
            case 'b' :
                c= '\b';
                break;
            case 'f' :
                c= '\f';
                break;
            case 'n' :
                c= '\n';
                break;
            case 'r':
                c= '\r';
                break;
            case 't':
                c= '\t';
                break;
            case 'v':
                c= '\v';
                break;
            case '\\':
                c= '\\';
                break;
            case '\'':
                c= '\'';
                break;
            case '"':
                c= '\"';
                break;
            case '?':
                c= '\?';
                break;
            default:
                c= character.back();
        }
    }
    Expression *e=new Constant(CHAR,c);
    return e;

}

antlrcpp::Any Constructor::visitParantheses(subCParser::ParanthesesContext *ctx)
{
    return visit(ctx->expression()).as<Expression*>();
}

antlrcpp::Any Constructor::visitSubscript(subCParser::SubscriptContext *ctx)
{
    return (Expression *)new IdentifierArr(ctx->NAME()->getText(),visit(ctx->expression()).as<Expression*>());
}

antlrcpp::Any Constructor::visitPrimaryE(subCParser::PrimaryEContext *ctx)
{
    return visit(ctx->primaryExpression());
}

antlrcpp::Any Constructor::visitCallFunction(subCParser::CallFunctionContext *ctx)
{
    return (Expression*)visit(ctx->functionCall()).as<FunctionCall*>();
}

antlrcpp::Any Constructor::visitPostunary(subCParser::PostunaryContext *ctx)
{
    Expression *e= visit(ctx->postfixExpression());
    string op=ctx->children.at(1)->getText();
    return (Expression *)new UnaryExpression(e,op,1);
}

antlrcpp::Any Constructor::visitFunctionCall(subCParser::FunctionCallContext *ctx)
{
    vector<Expression*>v=visit(ctx->arguments()).as<vector<Expression*>>();
    return new FunctionCall(ctx->NAME()->getText(),v);
}

antlrcpp::Any Constructor::visitArguments(subCParser::ArgumentsContext *ctx)
{
    vector<Expression*> vecExpression;
    for(subCParser::AssignmentExpressionContext *expressionContext : ctx->assignmentExpression())
        vecExpression.push_back(visit(expressionContext).as<Expression*>());
    return vecExpression;
}

antlrcpp::Any Constructor::visitPostfixE(subCParser::PostfixEContext *ctx)
{
    return visit(ctx->postfixExpression());
}

antlrcpp::Any Constructor::visitPreunary(subCParser::PreunaryContext *ctx)
{
    Expression *e=visit(ctx->unaryExpression());
    string op=ctx->children.at(1)->getText();
    return (Expression *)new UnaryExpression(e,op,2);
}

antlrcpp::Any Constructor::visitBinaryExpression(subCParser::BinaryExpressionContext *ctx)
{
    if (ctx->unaryExpression())
        return visit(ctx->unaryExpression());

    Expression *e1=visit(ctx->binaryExpression().at(0));
    Expression *e2=visit(ctx->binaryExpression().at(1));
    string op=ctx->children.at(1)->getText();
    return (Expression *)new BinaryExpression(e1,e2,op);
}

antlrcpp::Any Constructor::visitBinaryE(subCParser::BinaryEContext *ctx)
{
    return visit(ctx->binaryExpression());
}

antlrcpp::Any Constructor::visitAssignment(subCParser::AssignmentContext *ctx)
{
    return (Expression *)visit(ctx->affectation()).as<Assignment*>();
}

antlrcpp::Any Constructor::visitAffectation(subCParser::AffectationContext *ctx)
{
if (ctx->expression())
    {
        string op=ctx->children.at(4)->getText();
        return new Assignment(ctx->NAME()->getText(),op,visit(ctx->expression()),visit(ctx->assignmentExpression()));
    }
    else
    {
        string op=ctx->children.at(1)->getText();
        return new Assignment(ctx->NAME()->getText(),op, nullptr,visit(ctx->assignmentExpression()));
    }
}

antlrcpp::Any Constructor::visitExpression(subCParser::ExpressionContext *ctx)
{
    if (ctx->expression()== nullptr)
        return visit(ctx->assignmentExpression());
    else (Expression *)new BinaryExpression(visit(ctx->assignmentExpression()),visit(ctx->expression()),",");
}


