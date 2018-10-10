//
// Created by Gheorghe on 15-Mar-18.
//

#include <IR/BasicBlock.h>
#include "Return.h"
#include "IR/CFG.h"

Return::Return(Expression *expression) : expression(expression)
{}

Return::~Return()
{
    delete  expression;
}

void Return::SolveScope(Scope *scope)
{
    expression->SolveScope(scope);
}

void Return::TypePropagation()
{
    expression->TypePropagation();
}
string Return::buildIR(CFG * cfg){
    string right=this->expression->buildIR(cfg);
    string left = cfg->create_new_tempvar(this->expression->getType());
    int offset=-cfg->get_var_index("retvalue");
    vector<string>params1={left,to_string(offset)};
    cfg->add_IRInstr(IRInstr::ldconst,this->expression->getType(),params1);
    vector<string>params2={left,"!bp",left};
    cfg->add_IRInstr(IRInstr::add,this->expression->getType(),params2);

    vector<string> params3={left,right};
    cfg->add_IRInstr(IRInstr::wmem,this->expression->getType(),params3);
    vector<string> params4={cfg->getLabel_ret()};
    cfg->add_IRInstr(IRInstr::jmp,VOID,params4);
    return "";
}
