//
// Created by Gheorghe on 15-Mar-18.
//

#ifndef PROJECT_PROGRAM_H
#define PROJECT_PROGRAM_H

#include <vector>
#include "Declaration.h"
#include <map>
#include <IR/CFG.h>
#include "Scope.h"
using namespace std;
class CFG;
class Program
{
public:
    Program(const vector<Declaration *> &vectorDeclaration);

    ~Program();

    void SolveScope();
    vector<Declaration*> getVectorDeclaration ();
    void buildIR(ostream &o);
    void TypePropagation();

protected:
    vector<Declaration *> vectorDeclaration;
    Scope * scope;
    vector<CFG*> vectorCFG;
};


#endif //PROJECT_PROGRAM_H
