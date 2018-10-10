//
// Created by Gheorghe on 22-Mar-18.
//

#include "UnaryExpression.h"
#include "IR/CFG.h"

void UnaryExpression::SolveScope(Scope *scope)
{
    e->SolveScope(scope);
}

void UnaryExpression::TypePropagation()
{
    e->TypePropagation();
    if (e->getType()==CHAR)
        type=INT32_T;
    else
        type=e->getType();
}
