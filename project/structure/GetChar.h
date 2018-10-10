//
// Created by Gheorghe on 23-Mar-18.
// obbsolete
// not used
//

#ifndef PROJECT_GETCHAR_H
#define PROJECT_GETCHAR_H

#include "Statement.h"
#include "Expression.h"

class GetChar:public Statement
{
public:
    virtual ~GetChar();

public:
    GetChar();

    void SolveScope(Scope *scope) override;
    string buildIR(CFG * cfg);

    void TypePropagation() override;
};


#endif //PROJECT_GETCHAR_H
