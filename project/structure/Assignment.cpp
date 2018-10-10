//
// Created by MbpQifan on 2018/3/19.
//

#include <iostream>
#include "Assignment.h"
#include "IR/CFG.h"
#include "VarDeclaration.h"
#include "FunctionCall.h"


void Assignment::SolveScope(Scope *scope)
{
    identifier->SolveScope(scope);
    expression->SolveScope(scope);
    Declaration * declaration=scope->find(identifier->getName());
    //if (VarDeclaration *vd= dynamic_cast<VarDeclaration *>(declaration))
      //  vd->Initialize();
}

string Assignment::buildIR(CFG * cfg){
    string right = expression->buildIR(cfg);
    if (IdentifierArr * idA= dynamic_cast<IdentifierArr*>(identifier))
    {
        string temp1=idA->getSubscript()->buildIR(cfg);

        string temp2 = cfg->create_new_tempvar(this->getType());
        vector<string>params0{temp2,"8"};;
        cfg->add_IRInstr(IRInstr::ldconst,INT32_T,params0);

        vector<string>params1{temp2,temp1,temp2};
        cfg->add_IRInstr(IRInstr::mul,INT32_T,params1);

        string temp3 = cfg->create_new_tempvar(INT32_T);
        int id=-cfg->get_var_index(idA->getName());
        vector<string>params2{temp3,to_string(id)};
        cfg->add_IRInstr(IRInstr::ldconst,INT32_T,params2);

        vector<string>params3{temp3,temp3,temp2};;
        cfg->add_IRInstr(IRInstr::sub,INT32_T,params3);

        vector<string>params4={temp3,"!bp",temp3};
        cfg->add_IRInstr(IRInstr::add,INT32_T,params4);

        vector<string> params5={temp3,right};
        cfg->add_IRInstr(IRInstr::wmem,identifier->getType(),params5);
        return right;
    } else
    {
        string left = cfg->create_new_tempvar(identifier->getType());
        int offset=-cfg->get_var_index(identifier->getName());
        vector<string>params1={left,to_string(offset)};
        cfg->add_IRInstr(IRInstr::ldconst,identifier->getType(),params1);
        vector<string>params2={left,"!bp",left};
        cfg->add_IRInstr(IRInstr::add,identifier->getType(),params2);

        vector<string> params3={left,right};
        cfg->add_IRInstr(IRInstr::wmem,identifier->getType(),params3);
        return right;
    }

}

void Assignment::TypePropagation()
{
    identifier->TypePropagation();
    expression->TypePropagation();
}
