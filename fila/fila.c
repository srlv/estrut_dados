#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"fila.h"

typedef struct _fila{
    int ini, fim;
    int qtde; // num de elementos da fila
    int MAX_SIZE; // tamanho maximo da fila 
    int *val; // vetor dos valores
}Fila;
// para usar
Fila *Q;
Fila*criafila(int MAX_SIZE){
Fila*Q = (Fila*)calloc(1, sizeof(Fila));

Q->val = (int*)calloc(MAX_SIZE, sizeof(int));
Q->MAX_SIZE = MAX_SIZE;
Q->qtde = 0;
Q->ini = Q->fim = 0;

return Q;
}

void Destruirfila(Fila **Q){
    Fila *Qaux = *Q;
    free(Qaux->val);
    free(Qaux);
    *Q = NULL;
}

int Filavazia(Fila *Q){
    return(Q->qtde ==0);
}

int Filacheia(Fila *Q){
    return (Q->qtde == Q->MAX_SIZE);
}

int Inserefila(Fila *Q, int elem){
    if(Filacheia(Q)){
        printf("warning: fila esta cheia \n");
        return 0;
    }
    else{
        Q->val[Q->fim]=elem;
        Q->fim = (Q->fim+1) % Q -> MAX_SIZE;
        Q->qtde++;
        return 1;
    }
}

int Removefila(Fila *Q){
    if(Filavazia(Q)){
    printf("warning: lista esta vazia\n");
return 0;
    }
    else{
        Q->ini = (Q->ini+1) % Q->MAX_SIZE;
        Q->qtde--;
        return 1;
    }
}

int Consultarfila(Fila *Q, int *elem){
     if(Filavazia(Q)){
    printf("warning: lista esta vazia\n");
return 0;
     }
     else{
        *elem = Q->val[Q->ini]; 
        return 1;  
    }
}