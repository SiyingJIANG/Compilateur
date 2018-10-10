//
// Created by Gheorghe on 20-Mar-18.
//

#ifndef PROJECT_VARIABLE_H
#define PROJECT_VARIABLE_H

#include "Expression.h"
#include "Type.h"
#include <vector>
#include <string>

using namespace std;
class Identifier:public Expression
{
public:
    Identifier()
    {};
    Identifier(string name)
            :name(name)
    {};
    virtual ~Identifier(){}

    void SolveScope(Scope *scope) override;


    virtual string buildIR(CFG * cfg) override ;

    string getName()
    {
        return name;
    }
protected:
    string name;
};


#endif //PROJECT_VARIABLE_H
