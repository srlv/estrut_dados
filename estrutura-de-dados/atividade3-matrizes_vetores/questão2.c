/*Implemente um programa em C que solicite ao usuário o número de linhas e colunas de uma matriz e,
em seguida, aloque dinamicamente memória para armazenar essa matriz. Peçaa ao usuário que insira
os elementos da matriz e, por fim, imprima a matriz na forma original e transposta.*/

//Resolução:

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "portuguese");

    int linhas, colunas, cont, i;

    // Solicita ao usuário o número de linhas da matriz
    printf("Informe o número de linhas: ");
    scanf("%d", &linhas);

    // Solicita ao usuário o número de colunas da matriz
    printf("Informe o número de colunas: ");
    scanf("%d", &colunas);

    // Alocação dinâmica de memória para a matriz de inteiros
    int **matriz = (int**)malloc(linhas * sizeof(int*));
    if (matriz == NULL) {
        printf("Erro de alocação de memória.\n");
        exit(1);
    } else {
        printf("Memória alocada com sucesso.\n");
    }

    // Aloca dinamicamente memória para cada linha da matriz
    for (cont = 0; cont < linhas; cont++) {
        matriz[cont] = (int*)malloc(colunas * sizeof(int));

    // verifica se a alocação foi feita
        if (matriz[cont] == NULL) {
            printf("Erro de alocação de memória.\n");
            exit(1);
        }
    }

    // Coleta os elementos da matriz digitados pelo usuário
    printf("Informe os elementos da matriz:\n");
    for (cont = 0; cont < linhas; cont++) {
        for (i = 0; i < colunas; i++) {
            printf("Informe o valor da linha %d da coluna %d: ", cont + 1, i + 1);
            scanf("%d", &matriz[cont][i]);
        }
    }

    // Imprime a matriz original
    printf("Matriz original:\n");
    for (cont = 0; cont < linhas; cont++) {
        for (i = 0; i < colunas; i++) {
            printf("%d ", matriz[cont][i]);
        }
        printf("\n");
    }

    // Imprime a matriz transposta (invertendo linhas por colunas)
    printf("Matriz transposta:\n");
    for (i = 0; i < colunas; i++) {
        for (cont = 0; cont < linhas; cont++) {
            printf("%d ", matriz[cont][i]);
        }
        printf("\n");
    }

    // Libera a memória alocada para cada linha da matriz
    for (cont = 0; cont < linhas; cont++) {
        free(matriz[cont]);
    }

    // Libera a memória alocada para a matriz (vetor de ponteiros)
    free(matriz);

    return 0;
}
