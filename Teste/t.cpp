#include "t.hpp"
#include <iostream>
#include <stdio.h>
#include<string>


void fptr1(S **ptr, int n){

    if(*ptr == nullptr){

        *ptr = new S;

        (*ptr)->n = 2;

        ptr->p = new S;

        ptr->p->n = 3;

    }

}
