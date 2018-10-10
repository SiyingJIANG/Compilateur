//
// Created by Gheorghe on 15-Mar-18.
//

#ifndef PROJECT_DECLARATION_H
#define PROJECT_DECLARATION_H


#include "Type.h"
#include <string>
#include <IR/CFG.h>

using namespace std;
class Declaration
{
public:
    Declaration();
    Declaration(const Type &type, string name);

    virtual ~Declaration(){};
    void setType(Type t);
    void setName(string name);

    string getName();
    Type getType();

    virtual string buildIR(CFG * cfg)=0;

protected:
    Type type;
    string name;
};


#endif //PROJECT_DECLARATION_H
