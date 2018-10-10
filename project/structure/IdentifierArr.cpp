//
// Created by Gheorghe on 20-Mar-18.
//

#include "IdentifierArr.h"
#include "IR/CFG.h"


string IdentifierArr::buildIR(CFG *cfg)
{
    string temp1=subscript->buildIR(cfg);

    string temp2 = cfg->create_new_tempvar(this->getType());
    vector<string>params0{temp2,"8"};;
    cfg->add_IRInstr(IRInstr::ldconst,INT32_T,params0);

    vector<string>params1{temp2,temp1,temp2};
    cfg->add_IRInstr(IRInstr::mul,INT32_T,params1);

    string temp3 = cfg->create_new_tempvar(INT32_T);
    int id=-cfg->get_var_index(name);
    vector<string>params2{temp3,to_string(id)};
    cfg->add_IRInstr(IRInstr::ldconst,INT32_T,params2);

    vector<string>params3{temp3,temp3,temp2};;
    cfg->add_IRInstr(IRInstr::sub,INT32_T,params3);

    vector<string>params4={temp3,"!bp",temp3};
    cfg->add_IRInstr(IRInstr::add,INT32_T,params4);

        string temp4 = cfg->create_new_tempvar(this->getType());
        vector<string>params5={temp4,temp3};
        cfg->add_IRInstr(IRInstr::rmem,INT32_T,params5);

        return temp4;
}

Expression *IdentifierArr::getSubscript() const
{
    return subscript;
}

IdentifierArr::~IdentifierArr()
{
    delete subscript;
}

