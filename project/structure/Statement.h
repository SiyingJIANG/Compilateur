//
// Created by Gheorghe on 15-Mar-18.
//

#ifndef PROJECT_STATEMENT_H
#define PROJECT_STATEMENT_H


#include "Scope.h"
class CFG;
class Statement
{
public:
    Statement(){};
    virtual ~Statement(){};
    virtual void SolveScope(Scope * scope) =0;
    virtual string buildIR(CFG * cfg)=0;
    virtual void TypePropagation();

};


#endif //PROJECT_STATEMENT_H
