//
// Created by Gheorghe on 18-Mar-18.
//

#include "VarDeclaration.h"
#include "IR/CFG.h"

VarDeclaration::~VarDeclaration()
{
    delete size;
    delete initialValue;
    for (auto e:array)
        delete e;
}

string VarDeclaration::buildIR(CFG *cfg)
{
    if (initialValue!= nullptr)
    {
        string right=initialValue->buildIR(cfg);


        string left = cfg->create_new_tempvar(type);
        int offset=-cfg->get_var_index(name);
        vector<string>params1={left,to_string(offset)};
        cfg->add_IRInstr(IRInstr::ldconst,type,params1);
        vector<string>params2={left,"!bp",left};
        cfg->add_IRInstr(IRInstr::add,type,params2);

        vector<string> params3={left,right};
        cfg->add_IRInstr(IRInstr::wmem,type,params3);
        return "";
    }
    return "";
}

void VarDeclaration::Initialize()
{
    isInitialized=true;
}

bool VarDeclaration::IsInitialized()
{
    return isInitialized;
}

void VarDeclaration::SolveScope(Scope *pScope)
{
    if (isArray)
    {
        for (Expression * e:array)
            if (e) e->SolveScope(pScope);
    } else
    {
        if (initialValue)
            initialValue->SolveScope(pScope);
    }
}
