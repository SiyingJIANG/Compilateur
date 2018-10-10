//
// Created by Gheorghe on 15-Mar-18.
//

#include <iostream>
#include "Bloc.h"
#include "DeclStatement.h"
#include "StructStatement.h"
#include "CompoundStatement.h"
#include "Return.h"

#include "IR/CFG.h"
#include "VarDeclaration.h"

Bloc::Bloc(const  vector<Statement *> &vectorStatement)
        :vectorStatement(vectorStatement)
{}

Bloc::~Bloc()
{
    for (Statement *statement: vectorStatement)
    {
        delete statement;
    }
    vectorStatement.erase(vectorStatement.begin(), vectorStatement.end());
}

void Bloc::SolveScope(Scope * scope)
{
    for (Statement * statement:vectorStatement)
    {
        statement->SolveScope(scope);
    }
}

string Bloc::buildIR(CFG *cfg)
{
    for (Statement* statement:vectorStatement){
        string a=statement->buildIR(cfg);
    }
    return "";
}

void Bloc::TypePropagation()
{
    for (Statement* statement:vectorStatement)
        statement->TypePropagation();
}
