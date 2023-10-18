#include <stdio.h>
#include <stdlib.h>

int* somaelementos(int *vetor1, int *vetor2, int tamanho) {
    int *resultado = (int*)malloc(tamanho * sizeof(int));
    if (resultado == NULL) {
        printf("Erro de alocação de memória");
        exit(1);
    }
    for (int i = 0; i < tamanho; i++) { 
        resultado[i] = vetor1[i] + vetor2[i];
    }
    return resultado;
}

int main(void) {
    int vetor1[] = {1, 2, 3};
    int vetor2[] = {4, 5, 6};
    int tamanho = 3;
    printf("A soma e\n: ");
    int *soma = somaelementos(vetor1, vetor2, tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", soma[i]);
    }
    
    free(soma); 
    
    return 0;
}