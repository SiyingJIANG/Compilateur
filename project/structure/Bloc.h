//
// Created by Gheorghe on 15-Mar-18.
//

#ifndef PROJECT_BLOC_H
#define PROJECT_BLOC_H

#include <vector>
#include "Statement.h"
#include <deque>
#include <IR/CFG.h>
#include "Declaration.h"
#include "Scope.h"
#include <string>
using namespace std;
class Bloc
{
public:
    Bloc(const std::vector<Statement *> &vectorStatement);
    ~Bloc();
    vector<Statement*>& getVectorStatement()
    {
        return vectorStatement;
    }
    void SolveScope(Scope * scope);
    string buildIR(CFG * cfg);

    void TypePropagation();

protected:
    vector<Statement *> vectorStatement;
};


#endif //PROJECT_BLOC_H
