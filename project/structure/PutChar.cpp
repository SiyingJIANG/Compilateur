//
// Created by Gheorghe on 23-Mar-18.
//

#include "PutChar.h"
#include "IR/CFG.h"

PutChar::PutChar(Expression *e) : e(e)
{}

PutChar::~PutChar()
{
    delete e;
}

void PutChar::SolveScope(Scope *scope)
{
    e->SolveScope(scope);
}

void PutChar::TypePropagation()
{
    e->TypePropagation();
}

string PutChar::buildIR(CFG *cfg) {
    vector<string> params;
    params.push_back("");
    params.push_back("putchar");
    params.push_back(e->buildIR(cfg));
    cfg->add_IRInstr(IRInstr::call,Types::CHAR,params);
    return "";
}
