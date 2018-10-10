//
// Created by Gheorghe on 25-Mar-18.
//

#include <iostream>
#include "Scope.h"

Scope::Scope()
{
    suffix="";
    parent= nullptr;
    symbolTable.clear();
}

Scope::~Scope()
{
    for (pair<string,Declaration*> p:symbolTable)
    {
        delete p.second;
    }
}

void Scope::setParent(Scope *p)
{
    parent=p;
}

void Scope::setSuffix(string s)
{
    suffix+=s;
}

string Scope::getSuffix()
{
    return suffix;
}

int Scope::addChild(Scope * child)
{
    children.push_back(child);
    return children.size();
}

bool Scope::insert(Declaration * declaration)
{
    string name=declaration->getName();

    return symbolTable.insert({name,declaration}).second;
}

unordered_map<string,Declaration*> Scope::getAll()
{
    unordered_map<string,Declaration*> mapS;
    for (pair<string,Declaration*> p:symbolTable)
        mapS.insert({p.first,p.second});
    for(Scope * scope:children)
    {
        for (pair<string,Declaration*> p:scope->getAll())
        {
            mapS.insert({p.first,p.second});
        }
    }
    return mapS;
}
Declaration * Scope::find(string name)
{
    unordered_map<string,Declaration*>::const_iterator it=symbolTable.find(name+suffix);
    if (it!=symbolTable.end())
    {
        return it->second;
    }
    else if (parent)
        if (Declaration * declaration=parent->find(name))
            return declaration;
        else
        {
            return nullptr;
        }
    //
}

Declaration* Scope::findInCurrentScope(string name)
{
    unordered_map<string,Declaration*>::const_iterator it=symbolTable.find(name);
    if (it!=symbolTable.end())
    {
        return it->second;
    }
    return  nullptr;
}
