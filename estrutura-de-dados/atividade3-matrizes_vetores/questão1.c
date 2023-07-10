/*Escreva um programa em C que solicite ao usuário o tamanho de um vetor e, em seguida, aloque
dinamicamente memória para armazenar esse vetor. Depois disso, peça ao usuário que insira os
elementos do vetor e, por fim, imprima os elementos na ordem inversa.*/

//Resolução.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
    int tam, c;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tam);
    int *vetor = (int*)malloc(tam * sizeof(int));
    if (vetor == NULL) {
        printf("Erro na alocação de memória.\n");
        exit(1);
    }
    printf("Informe os elementos do vetor:\n");
    for (c = 0; c < tam; c++) {
        printf("Elemento %d: ", c + 1);
        scanf("%d", &vetor[c]);
    }
    printf("Elementos do vetor em ordem inversa:\n");
    for (c= tam - 1; c>= 0; c--) {
        printf("%d ", vetor[c]);
    }
    printf("\n");
    free(vetor);
    return 0;
}