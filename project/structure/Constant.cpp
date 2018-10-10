//
// Created by Gheorghe on 20-Mar-18.
//

#include <IR/IRInstr.h>
#include "Constant.h"

Constant::Constant(Type type,int64_t value)
    :Expression(type),value(value)
{}

Constant::~Constant()
{}

void Constant::SolveScope(Scope *scope)
{}

string Constant::buildIR(CFG *cfg)
{
    string var=cfg->create_new_tempvar(this->type);
    vector<string> params;
    params.push_back(var);
    params.push_back(to_string(this->value));
    cfg->add_IRInstr(IRInstr::ldconst,this->type,params);
    return var;
}

int64_t Constant::getValue()
{
    return value;
}
