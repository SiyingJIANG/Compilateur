//
// Created by Gheorghe on 20-Mar-18.
//

#ifndef PROJECT_VARIABLETAB_H
#define PROJECT_VARIABLETAB_H

#include "Identifier.h"
#include "Expression.h"
class IdentifierArr:public Identifier

{
public:
    IdentifierArr(string name,Expression * subscript)
            :Identifier(name),subscript(subscript)
    {};

    ~IdentifierArr();

    string buildIR(CFG * cfg) override ;

protected:
    Expression * subscript;
public:
    Expression *getSubscript() const;
};


#endif //PROJECT_VARIABLETAB_H
