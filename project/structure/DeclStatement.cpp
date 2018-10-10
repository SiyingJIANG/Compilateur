//
// Created by Gheorghe on 18-Mar-18.
//

#include <iostream>
#include "DeclStatement.h"
#include "IR/CFG.h"
#include "VarDeclaration.h"

DeclStatement::DeclStatement(const vector <Declaration *> vVarDeclaration) : vVarDeclaration(vVarDeclaration)
{}

DeclStatement::~DeclStatement()
{
    for (Declaration * d:vVarDeclaration)
        delete d;
}

vector<Declaration *> DeclStatement::getVectorDeclaration()
{
    return vVarDeclaration;
}

void DeclStatement::SolveScope(Scope *scope)
{
    for(Declaration * declaration:vVarDeclaration)
    {
        declaration->setName(declaration->getName()+scope->getSuffix());
        if(!scope->insert(declaration))
        {
            //TODO error redeclaration
            std::cerr<<"redeclaration of"<<declaration->getName()<<endl;
        } else{
            if(VarDeclaration* v = dynamic_cast<VarDeclaration*>(declaration))
            {
                v->SolveScope(scope);
            }
        }
    }
}

string DeclStatement::buildIR(CFG *cfg)
{
    for (Declaration* d:vVarDeclaration) {
       d ->buildIR(cfg);
   }
    return "";
}
