//
// Created by Gheorghe on 15-Mar-18.
//

#ifndef PROJECT_IF_H
#define PROJECT_IF_H


#include "StructStatement.h"
#include "Expression.h"
#include "IR/BasicBlock.h"

class If : public StructStatement
{
public:
    If(Expression * expression, Statement  *statement, Statement *elsestmt)
            : StructStatement(expression, statement),elseStatement(elsestmt)
    {};

    ~If();
    string buildIR(CFG * cfg);

    void SolveScope(Scope *scope) override;
protected:
    Statement * elseStatement;
};

#endif //PROJECT_IF_H
