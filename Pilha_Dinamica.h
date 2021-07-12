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
        aux->proximo=p->topo;
        p->topo=aux;
        p->tamanho++;
    }
    return;
}
void desempilha(PilhaDinamica *p, Objeto *obj){
    PtrNoPilha aux=(PtrNoPilha)malloc(sizeof(PtrNoPilha));
    if(!aux){
        printf("Erro: Nao foi possivel alocar menoria\n");
        return;
    }if(estaVazia(p)){
        printf("A pilha estar vazia\n");
    } else{
        aux=p->topo;
        p->topo=p->topo->proximo;
        obj->chave=aux->obj.chave;
        free(aux);
        p->tamanho--;
    }

}
int tamanhoPilha(PilhaDinamica *p){
    return (p->tamanho);
}
void topo(PilhaDinamica *p, Objeto *obj){
    obj->chave=p->topo->obj.chave;
}
void imprimePilha(PilhaDinamica *p){
    printf("{ ");
    for (PtrNoPilha aux=p->topo ; aux!=NULL ; aux =aux->proximo) {
        printf("%i, ",aux->obj.chave);
    }

    printf("}");
}



#endif //UNTITLED_PILHA_DINAMICA_H
