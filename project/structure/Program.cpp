//
// Created by Gheorghe on 15-Mar-18.
//

#include "Program.h"
#include <utility>
#include <deque>
#include <iostream>
#include "Function.h"

Program::Program(const vector<Declaration *> &vectorDeclaration)
        :vectorDeclaration(vectorDeclaration),scope(new Scope())
{
    //scope=new Scope();
}

Program::~Program()
{
    for(Declaration* declaration:vectorDeclaration)
        delete declaration;
    delete scope;
    for (CFG* cfg:vectorCFG)
        delete cfg;
}

vector<Declaration*> Program::getVectorDeclaration()
{
    return vectorDeclaration;
}
void Program::SolveScope()
{
    for (Declaration * declaration:vectorDeclaration)
    {
        if (scope->insert(declaration))
        {
            if(Function* f = dynamic_cast<Function*>(declaration))
            {
                f->SolveScope(scope);
            }
            if(VarDeclaration* v = dynamic_cast<VarDeclaration*>(declaration))
            {
                v->SolveScope(scope);
            }
        } else
        {
            //TODO error redeclaration
            std::cerr<<"redeclaration of"<<declaration->getName()<<endl;
        }


    }
}

void Program::buildIR(ostream &o)
{
    for (Declaration* declaration:this->getVectorDeclaration())
    {
        if (Function * fun=dynamic_cast<Function*>(declaration))
        {
            CFG* cfg=new CFG(fun);
            fun->buildIR(cfg);
            vectorCFG.push_back(cfg);
            cfg->gen_asm(o);
        }
    }
}

void Program::TypePropagation()
{
    for (Declaration* declaration:this->getVectorDeclaration())
    {
        if (Function * fun=dynamic_cast<Function*>(declaration))
        {
            fun->TypePropagation();
        }
    }
}
