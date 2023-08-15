#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct contabancaria {
    char nome[40];
    int numero;
    float slr;
} conta;

contabancaria*()
int main(void) {
    setlocale(LC_ALL, "portuguese");
    int np;
    printf("Informe o número de funcionários: ");
    scanf("%d", &np);

    conta *novascontas = (conta *)malloc(np * sizeof(conta));
    if (novascontas == NULL) {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    for (int i = 0; i < np; i++) {
        printf("\nRegistro do funcionário %d:\n", i + 1);
        registro(&novascontas[i]);

        printf( "Funcionário %d:\n", i + 1);
        printf( "Nome: %s\n", novascontas[i].nome);
        printf( "ID: %d\n", novascontas[i].numero);
        printf( "Salário: %.2f reais\n\n", novascontas[i].slr);
    }

    free(novascontas);

    return 0;
}