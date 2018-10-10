//
// Created by Gheorghe on 15-Mar-18.
//

#ifndef PROJECT_PARAMETER_H
#define PROJECT_PARAMETER_H

#include "Type.h"
#include "VarDeclaration.h"
#include "Expression.h"
#include <string>


using namespace std;

class Parameter:public VarDeclaration
{
public:
    Parameter(Type type, string name) : VarDeclaration(type,name)
    {};
    Parameter(Type type, string name, bool isArray) : VarDeclaration(type, name, isArray)
    {};
    Parameter(Type type, string name, bool isArray,Expression * size) : VarDeclaration(type, name, isArray,size)
    {};
    ~Parameter()
    {};
    string buildIR(CFG * cfg){return "";};
};


#endif //PROJECT_PARAMETER_H
