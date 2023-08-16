#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct contabancaria{
    char titular[40];
    int numero;
    float saldo;
}conta;

contabancaria* criaconta(char *titular, int numero, float saldo);




