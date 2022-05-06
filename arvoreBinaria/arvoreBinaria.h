/*
*    Biblioteca Arvore binária de Busca
*
*/
//Arquivo arvoreBinaria.h
typedef struct NO *arvAVL;

//Arquivo arvoreBinaria.h
arvAVL *cria_arvAVL();

//Arquivo arvoreBinaria.h
void liberar_arvAVL(arvAVL *raiz);

//Arquivo arvoreBinaria.h
int vazia_arvAVL(arvAVL *raiz);

//Arquivo arvoreBinaria.h
int altura_arvAVL(arvAVL *raiz);

//Arquivo arvoreBinaria.h
int totalNO_arvAVL(arvAVL *raiz);

//Arquivo arvoreBinaria.h
void preOrdem_arvAVL(arvAVL *raiz);

//Arquivo arvoreBinaria.h
void emOrdem_arvAVL(arvAVL *raiz);

//Arquivo arvoreBinaria.h
void posOrdem_arvAVL(arvAVL *raiz);

//Arquivo arvoreBinaria.h
//int insere_arvAVL(arvAVL *raiz, int valor);
int insere_arvAVL(arvAVL *raiz, int valor);

//Arquivo arvoreBinaria.h
int remove_arvAVL(arvAVL *raiz, int valor);

//Arquivo arvoreBinaria.h
int consulta_arvAVL(arvAVL *raiz, int valor);
