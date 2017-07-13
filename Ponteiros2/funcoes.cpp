#include<iostream>
#include<string.h>
#include<stdio.h>
#include "funcoes.hpp"

using namespace std;

/*

Funcoes que modificam ponteiros simples precisam receber ponteiros de ponteiros.
Na primeira implementação destas funções, foram usados ponteiros simples, que modificavam os valores dos
ponteiros dentro das funções, mas não mantinham tais valores ao chegar na main.
*/

No* iterar(No *raiz){
    if(raiz == nullptr){
        cout << "Ponteiro nulo"<< endl;
        return nullptr;
    }else{
        if(raiz->proximo == nullptr){
            return raiz->proximo;
        }else{
            return iterar(raiz->proximo);
        }
    }
}

void inserir(No *raiz,No *novo){
    if(raiz == nullptr){
        cout << "Ponteiro nulo" << endl;
    }else{
        if(raiz->proximo == nullptr){
            raiz->proximo = novo;
            cout << "No adicionado com sucesso." << endl;
        }else{
            inserir(raiz->proximo,novo);
        }
    }

}

void imprimir(No *raiz, unsigned int codigo){
    if(raiz == nullptr){
        cout << "Ponteiro nulo" << endl;
    }else{
        if(raiz->codigo == codigo){
            cout << "---------------------------------------------------------------------\n\n" << endl;
            cout << "Nome: " << raiz->nome << endl;
            cout << "Valor numerico: " << raiz->intValor << endl;
            cout << "String: " << raiz->stringValor << endl;
            cout << "Codigo: " << raiz->codigo << endl;
            cout << "\n\n---------------------------------------------------------------------" << endl;
        }else{
            imprimir(raiz->proximo, codigo);
        }
    }
}

void init(No *raiz){
    if(raiz == nullptr){
        No **r;
        r = &raiz;
        r[0] = new No;
        No **p,**a;
        p = &(raiz->proximo);
        a = &(raiz->anterior);
        p[0] = nullptr;
        a[0] = nullptr;
        if(!a[0]){cout << "Not null" << endl;}
        //cout << raiz->anterior << endl;
        /*No **a,**p;
        a = raiz->anterior;
        p = raiz->proximo;
        cout << "init" << endl;
        a[0] = nullptr;
        p[0] = nullptr;*/
    }else{
        cout << "Ponteiro nao nulo" << endl;
    }
}

void ler(No *raiz){
    if(raiz == nullptr){
    }else{
        cout << "--------------------------------------------------------" << endl;
        cout << "Nome: " << raiz->nome << endl;
        cout << "Valor numerico: " << raiz->intValor << endl;
        cout << "String: " << raiz->stringValor << endl;
        cout << "Codigo: " << raiz->codigo << endl;
        cout << "--------------------------------------------------------\n" << endl;
        ler(raiz->proximo);
    }
}

void atualizar(No *raiz, unsigned int codigo){
    if(raiz == nullptr){
        cout << "Ponteiro nulo. " << endl;
    }else{
        if(raiz->codigo == codigo){
            bool z = true;
            while(z){
                int i;
                cout << "O que você deseja modificar? "<< endl;
                cout << "1 - Nome do no" << endl;
                cout << "2 - Valor numerico do no" << endl;
                cout << "3 - String do no" << endl;
                cout << "4 - Codigo do no" << endl;
                cin >> i;

                switch(i){
                    case 1: {
                        cout << "Digite o nome do no: "<< endl;
                        cin >> raiz->nome;
                        break;
                    }
                    case 2:{
                        cout << "Digite o valor numerico do no: "<< endl;
                        cin >> raiz->intValor;
                        break;
                    }
                    case 3:{
                        cout << "Digite a string do no: "<< endl;
                        cin >> raiz->stringValor;
                        break;
                    }
                    case 4:{
                        cout << "Digite o codigo do no: "<< endl;
                        cin >> raiz->codigo;
                        break;
                    }
                    default:{
                        cout << "Entrada invalida" << endl;
                        break;
                    }
                }
                system("PAUSE");
                system("clear");
                cout << "Deseja continuar a modificar o no?" << endl;
                cout << "1 - Sim" << endl;
                cout << "2 - Nao"<< endl;
                cin >> i;
                if(i == 1){
                    continue;
                }else{
                    z = false;
                }
            }
        }else{
            atualizar(raiz->proximo, codigo);
        }
    }
}


void deletar(No *raiz, unsigned int codigo){
    if(raiz == nullptr){
        cout << "Ponteiro nulo. " << endl;
    }else{
        if(raiz->codigo == codigo){
            No *pAnt, *pProx, **pA,**pP ;
            pAnt = raiz->anterior;
            pProx = raiz->proximo;
            pA = &pAnt;
            pP = &pProx;
            pA[0]->proximo = pP[0];
            pP[0]->anterior = pA[0];
            cout << "Nó deletado com sucesso" << endl;
            cout << "-------------------------------------------------------" << endl;
            cout << "Nome: " << raiz->nome << endl << "Valor numerico: " << raiz->intValor << endl << "String: " << raiz->stringValor << endl << "Codigo: " << raiz->codigo << endl;
            cout << "-------------------------------------------------------" << endl;
            delete raiz;
        }else{
            deletar(raiz->proximo, codigo);
        }
    }
}
