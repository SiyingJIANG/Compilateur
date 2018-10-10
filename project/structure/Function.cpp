//
// Created by Gheorghe on 15-Mar-18.
//

#include <iostream>
#include "Function.h"
#include "IR/CFG.h"

Function::Function(Type returnType, string name, const vector<Parameter *> &vectorParameter, Bloc * bloc)
    :Declaration(returnType,name), vectorParameter(vectorParameter), bloc(bloc), scope(new Scope())
{}

Function::Function(Type returnType, string name, Bloc * bloc)
        :Declaration(returnType,name),bloc(bloc), scope(new Scope())
{}

vector<Parameter*>& Function::getVectorParameter()
{
    return vectorParameter;
}

void Function::SolveScope(Scope *parentScope)
{
    int index=parentScope->addChild(scope)-1;
    scope->setParent(parentScope);
    scope->setSuffix(parentScope->getSuffix()+"_"+to_string(index));
    //Parameters
    for(Parameter * parameter: vectorParameter)
    {
        Declaration *declaration=parameter;
        declaration->setName(declaration->getName()+scope->getSuffix());
        if(scope->insert(declaration))
        {
        } else
        {
            //TODO error redeclaration
            std::cerr<<"redeclaration of"<<declaration->getName()<<endl;
        }
    }

    //Bloc
    bloc->SolveScope(scope);
}

string Function::buildIR(CFG *cfg)
{
    return(bloc->buildIR(cfg));
}

map<string,Declaration *> Function::getSymbolTable()
{
    map<string,Declaration *> symbolTable;
    for (pair<string,Declaration*> p:scope->getAll())
    {
        symbolTable.insert({p.first,p.second});
    }
    return  symbolTable;
}

void Function::TypePropagation()
{
    bloc->TypePropagation();
};