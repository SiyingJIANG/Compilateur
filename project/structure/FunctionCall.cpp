//
// Created by Gheorghe on 18-Mar-18.
//

#include <iostream>
#include "FunctionCall.h"
#include "Function.h"
#include "IR/CFG.h"

FunctionCall::FunctionCall(string name, vector<Expression *> arguments)
        :name(name),arguments(arguments)
{}

FunctionCall::~FunctionCall()
{
    for (Expression *e:arguments)
        delete e;
}

void FunctionCall::SolveScope(Scope *scope)
{
    Declaration * declaration=scope->find(name);
    if (Function * fun= dynamic_cast<Function*>(declaration))
    {
        if (fun->getVectorParameter().size()!=arguments.size())
        {
            //TODO error different number of parameters
            cerr<<"different signature number of parameters for "<<name<<" does not match with definition1"<<endl;
        }
        for (Expression * argument: arguments)
        {
            argument->SolveScope(scope);
            ///TODO verify type match
        }
        this->type=declaration->getType();
    } else{
        if (name.compare("getchar")==0)
        {}
        else
        {
            cerr<<"function "<<name<<" not declared"<<endl;
        }
    }
}

string FunctionCall::buildIR(CFG *cfg) {
    string right=cfg->create_new_tempvar(type);
    vector<string> params;
    params.push_back(right);
    params.push_back(name);
    for (auto a:arguments)
    {
        params.push_back(a->buildIR(cfg));
    }
    cfg->add_IRInstr(IRInstr::call,type,params);
    return right;
}

void FunctionCall::TypePropagation()
{
    for (Expression* e:arguments)
        e->TypePropagation();
}

const string &FunctionCall::getName() const {
    return name;
}

const vector<Expression *> &FunctionCall::getArguments() const {
    return arguments;
}

