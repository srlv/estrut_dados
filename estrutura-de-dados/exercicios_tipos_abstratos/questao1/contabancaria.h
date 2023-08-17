#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct contabancaria contabancaria;

contabancaria*criaconta(char *titular, int numero, float saldo);

void deposita(contabancaria *contas, float novo);

void saca(contabancaria *conta, float nsaldo);


