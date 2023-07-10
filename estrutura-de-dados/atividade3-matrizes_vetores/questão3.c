/*Crie um programa em C que leia um número inteiro positivo n do usuário e aloque dinamicamente
memória para armazenar uma matriz quadrada de ordem n. Preencha essa matriz com números
aleatórios entre 1 e 100, e em seguida, exiba a matriz resultante.*/

//Resolução


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
int main(void) {
    int n, i, c;
    setlocale(LC_ALL,"portuguese");
    printf("Informe o número da matriz quadrada: ");
    scanf("%d", &n);
    int **matriz = (int**)malloc(n * sizeof(int*));
    if (matriz == NULL) {
        printf("Erro de alocação de memória\n");
        exit(1);
    }
    else{
    	printf("memória alocada com sucesso\n");
	}
    srand(time(NULL));
    for (i = 0; i < n; i++) {
        matriz[i] = (int*)malloc(n * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Erro de alocação de memória\n");
            return 1;
        }
        for (c = 0; c < n; c++) {
            matriz[i][c] = rand() % 100 + 1;
        }
    }
    printf("sua matriz é\n");
    for (i = 0; i < n; i++) {
        for (c = 0; c < n; c++) {
            printf(" %d ", matriz[i][c]);
        }
        printf("\n");
    }
    for (i = 0; i < n; i++) {
        free(matriz);
    }
    free(matriz);
    return 0;
}