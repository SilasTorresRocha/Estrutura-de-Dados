#include "Pilha_Estatica.h"

int main() {
    pilhaEstatica Pilha;
    iniciaPilha(&Pilha);
    Objeto x;
    x.chave=10;
    empilha(x,&Pilha);
    x.chave=15;
    empilha(x,&Pilha);
    x.chave=20;
    empilha(x,&Pilha);
    x.chave=25;
    empilha(x,&Pilha);
    x.chave=30;
    empilha(x,&Pilha);
    x.chave=35;
    empilha(x,&Pilha);
    imprimePilha(&Pilha);
    desempilha(&Pilha);
    desempilha(&Pilha);
    imprimePilha(&Pilha);
    x.chave=100;
    empilha(x,&Pilha);
    x.chave=110;
    empilha(x,&Pilha);
    imprimePilha(&Pilha);
    
    return 0;
}
