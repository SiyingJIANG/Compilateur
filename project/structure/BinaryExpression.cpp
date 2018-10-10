//
// Created by Gheorghe on 20-Mar-18.
//

#include "BinaryExpression.h"
#include "IR/CFG.h"

void BinaryExpression::SolveScope(Scope *scope)
{
    e1->SolveScope(scope);
    e2->SolveScope(scope);
}

string BinaryExpression::buildIR(CFG *cfg) {
    string var1=e1->buildIR(cfg);
    string var2=e2->buildIR(cfg);
    string var3=cfg->create_new_tempvar(e1->getType());
    vector<string> parameters;
    parameters.push_back(var3);
    switch (*op) {

        case PLUS:
            parameters.push_back(var1);
            parameters.push_back(var2);
            cfg->add_IRInstr(IRInstr::add,e1->getType(),parameters);
            break;
        case MINUS:
            parameters.push_back(var1);
            parameters.push_back(var2);
            cfg->add_IRInstr(IRInstr::sub,e1->getType(),parameters);
            break;
        case MULT:
            parameters.push_back(var1);
            parameters.push_back(var2);
            cfg->add_IRInstr(IRInstr::mul,e1->getType(),parameters);
            break;
        case DIV:
            parameters.push_back(var1);
            parameters.push_back(var2);
            cfg->add_IRInstr(IRInstr::div,e1->getType(),parameters);
            break;
        case MOD:
            parameters.push_back(var1);
            parameters.push_back(var2);
            cfg->add_IRInstr(IRInstr::mod,e1->getType(),parameters);
            break;
        case EQUAL:
            parameters.push_back(var1);
            parameters.push_back(var2);
            cfg->add_IRInstr(IRInstr::cmp_eq,e1->getType(),parameters);
            break;
        case SMALL:
            parameters.push_back(var1);
            parameters.push_back(var2);
            cfg->add_IRInstr(IRInstr::cmp_lt,e1->getType(),parameters);
            break;
        case SMALLE:
            parameters.push_back(var1);
            parameters.push_back(var2);
            cfg->add_IRInstr(IRInstr::cmp_le,e1->getType(),parameters);
            break;
        case BIG:
            parameters.push_back(var2);
            parameters.push_back(var1);
            cfg->add_IRInstr(IRInstr::cmp_lt,e1->getType(),parameters);
            break;
        case BIGE:
            parameters.push_back(var2);
            parameters.push_back(var1);
            cfg->add_IRInstr(IRInstr::cmp_le,e1->getType(),parameters);
            break;
    }
    return var3;
}

void BinaryExpression::TypePropagation()
{
    e1->TypePropagation();
    e2->TypePropagation(); 
    type=(e1->getType() > e2->getType())? e1->getType() : e2->getType();
}
