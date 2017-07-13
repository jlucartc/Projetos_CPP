#include<iostream>
#include<stdio.h>
#include "funcoes.hpp"

using namespace std;

void fun(int **m){
    cout << m[0][0] << endl;
}

int main(){

    No *raiz;
    raiz = new No;
    raiz = nullptr;

    int o;

    cout << "---Simples CRUD---" << endl << endl;

    cout << "Escolha uma das seguintes opcoes: "<< endl << endl;
    cout << "1 - Criar nó" << endl;
    cout << "2 - Mostrar nós" << endl;
    cout << "3 - Atualizar nó" << endl;
    cout << "4 - Deletar nó" << endl;
    cin >> o;

    switch(o){
    case 1:{ // CREATE
        if(raiz == nullptr){
            cout << "init" << endl;
            init(raiz);
            if(raiz->proximo == nullptr){
                inserir(raiz,nullptr);
            }
        }

        No *ultimo;
        ultimo = iterar(raiz);
        cout << "Digite um nome para o novo nó: "<< endl;
        getline(std::cin,ultimo->nome);
        cout << "Digite um valor numerico inteiro: "<< endl;
        cin >> ultimo->intValor;
        cout << "Digite uma string: " << endl;
        cin >> ultimo->stringValor;
        cout << "Digite um numero inteiro positivo: "<< endl;
        cin >> ultimo->codigo;

        imprimir(raiz,ultimo->codigo);
        main();

        break;
    }
    case 2:{ // READ
        if(raiz == nullptr){
            cout << "Lista de nós vazia." << endl;
            system("PAUSE");
            system("clear");
            main();
        }else{
            ler(raiz);
            system("PAUSE");
            system("clear");
            main();
        }
        break;
    }
    case 3:{ // UPDATE
        if(raiz == nullptr){
            cout << "Não ha nos cadastrados." << endl;
            system("PAUSE");
            system("clear");
            main();
        }else{
            unsigned int cod;
            cout << "Digite o codigo do no a ser atualizado: "<< endl;
            cin >> cod;
            atualizar(raiz,cod);
            system("PAUSE");
            system("clear");
            main();
        }
        break;
    }
    case 4:{ // DELETE
        if(raiz == nullptr){
            cout << "Nao ha nos para serem deletados." << endl;
            system("PAUSE");
            system("clear");
            main();
        }else{
            unsigned int cod;
            cout << "Digite o codigo do no a ser deletado: " << endl;
            cin >> cod;
            deletar(raiz,cod);
            system("PAUSE");
            system("clear");
            main();
        }
        break;
    }
    default:{
        cout << "Opcao invalida." << endl<<endl;
        system("PAUSE");
        system("clear");
        main();
        break;
    }
    }
}
