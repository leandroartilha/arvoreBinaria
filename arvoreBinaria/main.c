//programa principal
#include <stdio.h>
#include <stdlib.h>
#include "arvoreBinaria.h"


int main(){
    int x;
    arvAVL *raiz;
    //programa principal
    raiz = cria_arvAVL();
    printf("\n");

    //programa principal

    x = insere_arvAVL(raiz, 150);
    x = insere_arvAVL(raiz, 110);
    x = insere_arvAVL(raiz, 100);
    x = insere_arvAVL(raiz, 130);
    x = insere_arvAVL(raiz, 120);
    x = insere_arvAVL(raiz, 140);
    x = insere_arvAVL(raiz, 160);
    if(x){
        printf("\nElemento inserido com suecsso!");
    }

    //programa principal
    if(vazia_arvAVL(raiz)){
        printf("A arvore esta vazia.");
    }else{
        printf("A Arvore possui elementos.");
    }
    printf("\n");
    //programa principal
    x = altura_arvAVL(raiz);
    printf("Altura da arvore: %d", x);

    printf("\n");
    //programa principal
    x = totalNO_arvAVL(raiz);
    printf("Total de nos na arvore: %d", x);

    printf("\nVisitando em pre-Ordem:\n");
    //programa principal
    preOrdem_arvAVL(raiz);


    printf("\nVisitando em-Ordem:\n");
    //programa principal
    emOrdem_arvAVL(raiz);

    printf("\nVisitando em pos-Ordem:\n");
    //programa principal
    posOrdem_arvAVL(raiz);


    //programa principal
    remove_arvAVL(raiz, 100);
    printf("\nVisitando em pos-Ordem depois da remocao:\n");
    posOrdem_arvAVL(raiz);


    //programa principal
    printf("\nBusca na Arvore Binaria:\n");
    if(consulta_arvAVL(raiz, 140)){
        printf("\nConsulta realizada com sucesso!");
    }else{
        printf("\nElemento nao encontrado...");
    }


    //programa principal
    liberar_arvAVL(raiz);
    printf("\n\n\n");
    printf("Hello world!\n");
    return 0;
}
