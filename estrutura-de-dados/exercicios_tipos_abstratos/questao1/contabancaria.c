#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"contabancaria"

contabancaria*criaconta(char *titular, int numero, float saldo){
    conta*contas(conta*)=malloc(sizeof(conta));
    if(contas==NULL){
        printf("memoria insuficiente\n");
        exit(1);
    }
    contas->numero = numero;
    contas->saldo = saldo;
     
    strcpy (contas->titular, titular);

    return(contas);
}

void deposita(contas*contas, float novoslr){
    contas->saldo+=novoslr;
}
void saca(contas*contas, float nsaldo ){
    contas->saldo+=nsaldo;

   if(contas->saldo>0 && contas->saldo<100000){
    printf("volor suficiente para saque\n");
   }    
}
void transfere(contas*contas, float transferencia){
    contas->saldo+=transferencia;

    if(contas->saldo>0 && contas->saldo<10000){
        printf("saldo disponivel para transferencia");
    }
}
float saldo(contas*contas){
   float st = contas->saldo;
    return st;
}

void excluiconta(conta*contas){
    free(contas);
}




