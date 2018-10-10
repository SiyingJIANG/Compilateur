//
// Created by Gheorghe on 20-Mar-18.
//

#include "Identifier.h"
#include "VarDeclaration.h"
#include <algorithm>
#include <iostream>

void Identifier::SolveScope(Scope *scope)
{
    Declaration * declaration=scope->find(name);
    if (declaration)
    {
        this->type=declaration->getType();
        this->name=declaration->getName();
        /*if(VarDeclaration *vd= dynamic_cast<VarDeclaration *>(declaration))
            if (!vd->IsInitialized())
                cerr<<"'"<<name<<"' was not initialized"<<endl;*/
    } else
    {
        cerr<<"'"<<name<<"' undeclared"<<endl;
    }
}

string Identifier::buildIR(CFG *cfg)
{
    return name;
}


