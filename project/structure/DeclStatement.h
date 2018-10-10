//
// Created by Gheorghe on 18-Mar-18.
//

#ifndef PROJECT_DECLSTATEMENT_H
#define PROJECT_DECLSTATEMENT_H

#include "Statement.h"
#include "Declaration.h"
#include <IR/CFG.h>
#include <vector>
class DeclStatement: public Statement
{
public:
    DeclStatement(const vector <Declaration *> vVarDeclaration);
    ~DeclStatement();
    vector<Declaration *> getVectorDeclaration();

    void SolveScope(Scope *scope) override;
    string buildIR(CFG * cfg) override;

protected:
    vector<Declaration *> vVarDeclaration;
};


#endif //PROJECT_DECLSTATEMENT_H
