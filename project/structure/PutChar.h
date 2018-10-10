//
// Created by Gheorghe on 23-Mar-18.
//

#ifndef PROJECT_PUTCHAR_H
#define PROJECT_PUTCHAR_H

#include "Statement.h"
#include "Expression.h"

class PutChar:public Statement
{
public:
    PutChar(Expression *e);

    virtual ~PutChar();

    void SolveScope(Scope *scope) override;
    string buildIR(CFG * cfg);

    void TypePropagation() override;

protected:
    Expression *e;
};


#endif //PROJECT_PUTCHAR_H
