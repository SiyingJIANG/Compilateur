//
// Created by Gheorghe on 23-Mar-18.
// obsolete
// not used
//

#include "GetChar.h"
#include "IR/CFG.h"

GetChar::GetChar()
{}

GetChar::~GetChar()
{

}

void GetChar::SolveScope(Scope *scope)
{
}

void GetChar::TypePropagation()
{
}

string GetChar::buildIR(CFG *cfg) {
    string right =cfg->create_new_tempvar(CHAR);
    vector<string> params;
    params.push_back(right);
    params.push_back("_getchar");
    cfg->add_IRInstr(IRInstr::call,Types::CHAR,params);
    return right ;
}
