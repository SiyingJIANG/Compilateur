//
// Created by Gheorghe on 15-Mar-18.
//

#ifndef PROJECT_BREAK_H
#define PROJECT_BREAK_H


#include "Statement.h"

class Break: public Statement
{
public:
    void SolveScope(Scope *scope) override;
    string buildIR(CFG * cfg){return "";};;

};


#endif //PROJECT_BREAK_H
