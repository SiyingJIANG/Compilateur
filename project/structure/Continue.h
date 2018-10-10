//
// Created by Gheorghe on 23-Mar-18.
//

#ifndef PROJECT_CONTINUE_H
#define PROJECT_CONTINUE_H

#include "Statement.h"
class Continue:public Statement
{
public:
    Continue();

    virtual ~Continue();

    void SolveScope(Scope *scope) override;
    string buildIR(CFG * cfg){return "";};;

};


#endif //PROJECT_CONTINUE_H
