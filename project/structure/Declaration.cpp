//
// Created by Gheorghe on 15-Mar-18.
//

#include "Declaration.h"
#include "IR/CFG.h"

Declaration::Declaration(const Type &type, string name) : type(type), name(name)
{}


string Declaration::getName()
{
    return name;
}

Type Declaration::getType()
{
    return type;
}

void Declaration::setType(Type t)
{
    type=t;
}

void Declaration::setName(string n)
{
    name=n;
}