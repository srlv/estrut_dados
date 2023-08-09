/*Faça um programa em C que solicita ao usuário informações de funcionários via teclado. As informações digitadas pelo o usuário são: id, nome e salário do funcionário. Armazene as informações
digitadas pelo usuário em um arquivo texto.*/

//resolução:

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct funcionarios {
    char nome[40];
    int id;
    float slr;
} func;

void registro(func *rgt) {
    printf("Informe seu nome:\n ");
    scanf(" %[^\n]", rgt->nome);

    printf("Informe seu id:\n ");
    scanf("%d", &rgt->id);

    printf("Informe seu salário:\n ");
    scanf("%f", &rgt->slr);
}

int main(void) {
    setlocale(LC_ALL, "portuguese");
    
    FILE *arquivo;
    arquivo = fopen("funcionarios.txt", "w");
    if (arquivo == NULL) {
        printf("ERRO AO ABRIR ARQUIVO");
        return 1;
    }

    int np;
    printf("Informe o número de funcionários: ");
    scanf("%d", &np);

    func *funcionarios = (func *)malloc(np * sizeof(func));
    if (funcionarios == NULL) {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    for (int i = 0; i < np; i++) {
        printf("\nRegistro do funcionário %d:\n", i + 1);
        registro(&funcionarios[i]);

        fprintf(arquivo, "Funcionário %d:\n", i + 1);
        fprintf(arquivo, "Nome: %s\n", funcionarios[i].nome);
        fprintf(arquivo, "ID: %d\n", funcionarios[i].id);
        fprintf(arquivo, "Salário: %.2f reais\n\n", funcionarios[i].slr);
    }

    fclose(arquivo);

    free(funcionarios);

    return 0;
}