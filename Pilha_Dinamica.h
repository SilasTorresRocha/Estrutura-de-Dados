//
// Created by Silas Torres Rocha on 13/03/2020.
//

#ifndef UNTITLED_PILHA_DINAMICA_H
#define UNTITLED_PILHA_DINAMICA_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int chave;
} Objeto;

typedef struct NoPilha *PtrNoPilha;

typedef struct NoPilha{
    Objeto obj;
    PtrNoPilha proximo;
} NoPilha;

typedef struct {
    PtrNoPilha topo;
    int tamanho;
} PilhaDinamica;

void iniciaPilha(PilhaDinamica *p){
    p->topo=NULL;
    p->tamanho=0;
    return;
}
bool estaVazia(PilhaDinamica *p){
    return (p->tamanho==0);
}
void empilha(Objeto obj, PilhaDinamica *p){
    PtrNoPilha aux=(PtrNoPilha)malloc(sizeof(PtrNoPilha));
    if(!aux){
        printf("Erro: Nao foi possivel alocar menoria\n");
        return;
    }
    if(estaVazia(p)){
        aux->obj.chave=obj.chave;
        aux->proximo=NULL;
        p->topo=aux;
        p->tamanho++;
    } else{
        aux->obj.chave=obj.chave;
        aux->proximo=NULL;
        p->topo->proximo=aux;
        p->tamanho++;
    }
    return;
}
void desempilha(PilhaDinamica *p, Objeto *obj){

}
int tamanhoPilha(PilhaDinamica *p){
    return (p->tamanho);
}
void topo(PilhaDinamica *p, Objeto *obj){
    obj->chave=p->topo->obj.chave;
}
void imprimePilha(PilhaDinamica *p){
    printf("{");
    for (int i = 0; i < tamanhoPilha(p) ; ++i) {
        printf("")
    }
}


#endif //UNTITLED_PILHA_DINAMICA_H
