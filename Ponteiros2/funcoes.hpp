#ifndef FUNCOES_HPP_INCLUDED
#define FUNCOES_HPP_INCLUDED

#include<string.h>

typedef struct No{

    std::string nome;
    int intValor;
    std::string stringValor;
    unsigned int codigo;
    No *proximo;
    No *anterior;

}No;


No* iterar(No **raiz);
void inserir(No **raiz, No **novo);
void imprimir(No **raiz, unsigned int codigo);
void init(No **raiz);
void ler(No **raiz);
void atualizar(No **raiz,unsigned int codigo);
void deletar(No **raiz,unsigned int codigo);

#endif // FUNCOES_HPP_INCLUDED
