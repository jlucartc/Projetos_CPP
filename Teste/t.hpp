#ifndef T_HPP_INCLUDED
#define T_HPP_INCLUDED

#include <string>

typedef struct S{
    int n;
    std::string s;
    S *p;
}S;

void fptr1(S **ptr,int n);

#endif // T_HPP_INCLUDED
