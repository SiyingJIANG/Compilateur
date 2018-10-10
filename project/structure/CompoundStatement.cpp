//
// Created by Gheorghe on 18-Mar-18.
//

#include "CompoundStatement.h"
#include "IR/CFG.h"

CompoundStatement::CompoundStatement(const std::vector<Statement *> &vectorStatement)
        : vectorStatement(vectorStatement),scope(new Scope())
{}

CompoundStatement::~CompoundStatement()
{
    for (Statement * statement:vectorStatement)
        delete statement;

    delete scope;
}

void CompoundStatement::SolveScope(Scope * parentscope)
{
    int index=parentscope->addChild(scope)-1;
    scope->setParent(parentscope);
    scope->setSuffix(parentscope->getSuffix()+"_"+to_string(index));
    for (Statement * statement:vectorStatement)
    {
        statement->SolveScope(scope);
    }
}

void CompoundStatement::TypePropagation()
{
    for (Statement * s:vectorStatement)
        s->TypePropagation();
}

string CompoundStatement::buildIR(CFG *cfg) {
    for (auto s:vectorStatement)
    {
        s->buildIR(cfg);
    }
    return "";
}
