//
// Created by Gheorghe on 18-Mar-18.
//

#include "StructStatement.h"
#include "IR/CFG.h"


void StructStatement::SolveScope(Scope *scope)
{
    expression->SolveScope(scope);
    statement->SolveScope(scope);
}

void StructStatement::TypePropagation()
{
    expression->TypePropagation();
    statement->TypePropagation();
}
