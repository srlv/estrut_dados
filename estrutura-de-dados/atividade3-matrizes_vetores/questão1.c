/*Escreva um programa em C que solicite ao usuário o tamanho de um vetor e, em seguida, aloque
dinamicamente memória para armazenar esse vetor. Depois disso, peça ao usuário que insira os
elementos do vetor e, por fim, imprima os elementos na ordem inversa.*/

//Resolução.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int tam, c;

    // Solicita ao usuário o tamanho do vetor
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tam);

    // Alocação dinâmica de memória para o vetor com o tamanho informado pelo usuário
    int *vetor = (int*)malloc(tam * sizeof(int));
	
    //verifica se a alocação foi feita corretamente
    if (vetor == NULL) {
        printf("Erro na alocação de memória.\n");
        exit(1);
    }

    // Coleta os elementos do vetor digitados pelo usuário
    printf("Informe os elementos do vetor:\n");
    for (c = 0; c < tam; c++) {
        printf("Elemento %d: ", c + 1);
        scanf("%d", &vetor[c]);
    }

    // Imprime os elementos do vetor em ordem inversa
    printf("Elementos do vetor em ordem inversa:\n");
    for (c = tam - 1; c >= 0; c--) {
        printf("%d ", vetor[c]);
    }
    printf("\n");

    // Libera a memória alocada dinamicamente
    free(vetor);

    return 0;
}
