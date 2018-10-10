//
// Created by Gheorghe on 25-Mar-18.
//

#ifndef PROJECT_SCOPE_H
#define PROJECT_SCOPE_H

#include <unordered_map>
#include "Declaration.h"
#include <utility>
#include <vector>

using namespace std;
class Scope
{
public:
    Scope();
    ~Scope();
    void setParent(Scope * p);
    int addChild(Scope *child);
    unordered_map<string,Declaration*> getAll();
    bool insert(Declaration* declaration);
    Declaration * find(string name);
    Declaration * findInCurrentScope(string name);
    void setSuffix(string s);
    string getSuffix();
protected:
    string suffix;
    Scope * parent;
    vector<Scope*> children;
    unordered_map<string,Declaration*> symbolTable;
};


#endif //PROJECT_SCOPE_H
