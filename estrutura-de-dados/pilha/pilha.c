#include<stdio.h>
#include<stdlib.h>
#include"pilha.h"

#define N 50 /*número máximo dde elementos*/

struct pilha{
    int n;
    float vet[N];
};

Pilha* pilha_cria(void){/*função para alocar pilha na mémoria*/
    Pilha* p = (Pilha*)malloc(sizeof(Pilha));
    p->n=0;
    return p;
}
void pilha_push(Pilha* p, float v){
    if(p->n == N){
        printf("capacidade da pilha estourou.\n");
        exit(1);
    }
    /*insere elemento na proxima posição livre*/
    p->vet[p->n]=v;
    p->n++;
}

int pilha_vazia(Pilha* p){
    return (p->n==0);
}

float pilha_pop(Pilha* p){
    float v;
    if(pilha_vazia(p)){
        printf("pilha vazia.\n");
        exit(1);/*aborta programa*/
    }
    /*retira elemento do topo*/
    v = p->vet[p->n-1];
    p->n--;
    return v;
}
void pilha_imprime(Pilha* p){
    int cont;
    for(cont=p->n-1;cont>=0;cont--);
    
 printf("%f ", p->vet[cont]);



}
void pilha_libera(Pilha* p){
    free(p);
}