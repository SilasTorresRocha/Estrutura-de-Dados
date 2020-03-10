//
// Created by Silas Torres Rocha on 10/03/2020.
//

#ifndef UNTITLED_PILHA_ESTATICA_H
#define UNTITLED_PILHA_ESTATICA_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAXTAM 100

typedef struct {
    int chave;
} Objeto;

typedef struct {
    Objeto array[MAXTAM];
    int topo;
} pilhaEstatica;


void iniciaPilha(pilhaEstatica *pilha){
    pilha->topo=0;
    return;
}
bool estaVazia(pilhaEstatica *pilha){
    return(pilha->topo==0);
}
bool estaCheia(pilhaEstatica *pilha){
    return(pilha->topo==0);
}
void empilha(Objeto item, pilhaEstatica *pilha){
    if(pilha->topo==(MAXTAM-1)){
        printf("Pilha cheia\n");
        return;
    }else{
      pilha->array[pilha->topo].chave=item.chave;
      pilha->topo++;
        return;
    }
}
void desempilha(pilhaEstatica *pilha){
    pilha->topo--;
    printf("Removido: %i\n",pilha->array[pilha->topo].chave);
    return;
}
int tamanhoPilha(pilhaEstatica *pilha){
    return (pilha->topo);
}
Objeto topo(pilhaEstatica *pilha){
    return (pilha->array[pilha->topo]);
}
void imprimePilha(pilhaEstatica *pilha){
    printf("{ ");
    for (int i = 0; i < pilha->topo; ++i) {
        printf("%i ",pilha->array[i].chave);
    }
    printf("}\n");
    printf("O tamanho da pilha: %i\nUso:%.1f%%\n",tamanhoPilha(pilha), ((float)pilha->topo/(float)MAXTAM)*100);
    return;
}

#endif

