//
// Created by Gheorghe on 15-Mar-18.
//

#ifndef PROJECT_FUNCTION_H
#define PROJECT_FUNCTION_H

#include "Bloc.h"
#include <vector>
#include "Parameter.h"
#include "Declaration.h"
#include <string>
#include "Scope.h"
#include <deque>
#include <IR/CFG.h>

using namespace std;

class Function: public Declaration
{
public:

    Function(Type returnType, string name, const vector<Parameter *> &vectorParameter, Bloc * bloc);

    Function(Type returnType, string name, Bloc * bloc);

    ~Function()
    {
        for (Parameter *p:vectorParameter)
            delete p;
        delete bloc;
        delete scope;
    };
    vector<Parameter*>& getVectorParameter();
    void SolveScope(Scope* parentScope);
    map<string,Declaration*> getSymbolTable();
    string buildIR(CFG * cfg);


    void TypePropagation();

protected:
    vector<Parameter *> vectorParameter;
    Bloc  * bloc;

    Scope * scope;
};


#endif //PROJECT_FUNCTION_H
