#include "t.hpp"
#include <iostream>
#include <stdio.h>
#include<string>

using namespace std;



int main(){


    /*S *s;

    s = new S;

    int a = 5;

    s->n = 1;
    s->s = "String";
    s->p = &a;

    cout << s->p << endl;
    cout << &a << endl;


    if(s->p == &a){
        cout << "equal" << endl;
    }

    cout << a << endl;
    cout << *(s->p) << endl;

    a = 6;
    cout << a << endl;
    cout << *(s->p) << endl;


    *(s->p) = 10;
    cout << a << endl;
    cout << *(s->p) << endl;

    delete s;*/

    /*S s;

    s.n = 5;
    s.s = "string";
    s.p = new S;


    s.p->n = 6;
    s.p->s = "string2";
    s.p->p = nullptr;


    cout << s.n << endl;
    cout << s.s << endl;
    cout << s.p << endl;

    cout << endl << endl;

    cout << s.p->n << endl;
    cout << s.p->s << endl;
    cout << s.p->p << endl;

    cout << endl << endl;

    S *ptr;

    ptr = new S;

    ptr->n = 45;
    ptr->s = "rush";
    ptr->p = nullptr;

    ptr->p = new S;

    ptr->p->n = 69;
    ptr->p->s = "meianove";
    ptr->p->p = nullptr;

    cout << ptr->n << endl;
    cout << ptr->s << endl;
    cout << ptr->p << endl;

    cout << endl << endl;

    cout << ptr->p->n << endl;
    cout << ptr->p->s << endl;
    cout << ptr->p->p << endl;*/

    S *ptr = nullptr;

    fptr1(&ptr,0);

    if(ptr == nullptr){
        cout << "ERRO" << endl;
    }else{

        S *ptr2;

        ptr2 = ptr;

        while(ptr2 != nullptr){
            cout << ptr2->n << endl;
            ptr2 = ptr->p;
        }
    }






}
