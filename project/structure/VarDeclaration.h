//
// Created by Gheorghe on 18-Mar-18.
//

#ifndef PROJECT_VARDECLARATION_H
#define PROJECT_VARDECLARATION_H

#include "Declaration.h"
#include "Expression.h"
#include <vector>

using namespace std;
class VarDeclaration:public Declaration
{
public:
    VarDeclaration(Type type, string name):Declaration(type, name)
    {
        isArray= false;
        isInitialized= false;
        initialValue= nullptr;
        size=nullptr;
    };
    VarDeclaration(Type type, string name, bool isArray)
            :Declaration(type, name),isArray(isArray)
    {
        isInitialized=false;
        initialValue= nullptr;
        size=nullptr;
    };
    VarDeclaration(Type type, string name, bool isArray, Expression * size)
            :Declaration(type, name),isArray(isArray),size(size)
    {
        isInitialized=true;
        initialValue= nullptr;
    };
    VarDeclaration(Type type, string name, Expression * init)
            :Declaration(type, name),initialValue(init)
    {
        isArray= false;
        isInitialized=true;
        size=nullptr;

    };
    VarDeclaration(Type type, string name, bool isArray, const vector<Expression *> &vec_init):Declaration(type, name),
        isArray(isArray),array(vec_init)
    {
        isInitialized=true;
    };
    VarDeclaration(Type type, string name, bool isArray, Expression * size, const vector<Expression *> &vec_init):
            Declaration(type, name), isArray(isArray), size(size)
    {

        int64_t actual_size=(size->getValue()<vec_init.size()?size->getValue():vec_init.size());
        isInitialized=(size->getValue()<vec_init.size()?true: false);

        for(int i=0;i<actual_size;i++)
            array.push_back(vec_init[i]);
    };
    bool IsArray()
    {
        return  isArray;
    }
    int getSize()
    {
        return size->getValue();
    }
    ~VarDeclaration();
    string buildIR(CFG * cfg) override ;
    void Initialize();
    bool IsInitialized();

    void SolveScope(Scope *pScope);

protected:
    bool isArray;
    bool isInitialized;
    Expression * size;
    Expression * initialValue;
    std::vector<Expression *> array;
};


#endif //PROJECT_VARDECLARATION_H
