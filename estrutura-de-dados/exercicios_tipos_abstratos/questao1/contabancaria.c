#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"contabancaria.h"


struct contabancaria{
    char titular[40];
    int numero;
    float saldo;
}

contabancaria*criaconta(char *titular, int numero, float saldo)
    contabancaria*contas=(contabancaria*)malloc(sizeof(contabancaria));

      if(contas==NULL){

       
     
        printf("memoria insuficiente\n");
        exit(1);
    }
    contas->numero = numero;
    contas->saldo = saldo;
     
    strcpy (contas->titular, titular);

    return contas;


void deposita(contabancaria*contas, float novoslr){
    contas->saldo+=novoslr;
}
void saca(contabancaria*contas, float nsaldo ){
    contas->saldo+=nsaldo;

   if(contas->saldo>0 && contas->saldo<100000){
    printf("volor suficiente para saque\n");
   }    
}
void transfere(contabancaria*contas, float transferencia){
    contas->saldo+=transferencia;

    if(contas->saldo>0 && contas->saldo<10000){
        printf("saldo disponivel para transferencia");
    }
}
float saldo(contabancaria*contas){
   float st = contas->saldo;
    return st;
}

void excluiconta(contabancaria*contas){
    free(contas);
}