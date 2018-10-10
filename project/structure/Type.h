//
// Created by Gheorghe on 15-Mar-18.
//

#ifndef PROJECT_TYPE_H
#define PROJECT_TYPE_H

#include <string>

using namespace std;
enum Types
{
    CHAR, INT32_T, INT64_T, VOID, UNKNOWN
};
const string Labels[] = {"char", "int32_t", "int64_t", "void", "unknown"};

class Type
{
public:
    Type(int id)
            : id(id)
    {};

    ~Type()
    {};

    operator int() const
    {
        return id;
    }

    string getText()
    {
        return Labels[id];
    }

protected:
    int id;
};


#endif //PROJECT_TYPE_H
