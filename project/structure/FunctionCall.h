//
// Created by Gheorghe on 18-Mar-18.
//

#ifndef PROJECT_FUNCTIONCALL_H
#define PROJECT_FUNCTIONCALL_H

#include <string>
#include <vector>
#include "Expression.h"

using namespace std;
class FunctionCall: public Expression
{
public:
    FunctionCall(string name, vector<Expression*> arguments);
    ~FunctionCall();


    void SolveScope(Scope *scope) override;
    string buildIR(CFG * cfg);

    void TypePropagation() override;

    const string &getName() const;

    const vector<Expression *> &getArguments() const;

protected:
    string name;
    vector<Expression*> arguments;
};


#endif //PROJECT_FUNCTIONCALL_H
