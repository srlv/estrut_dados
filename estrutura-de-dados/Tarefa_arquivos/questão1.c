#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
typedef struct {
    int funcional;
    char nome[50];
    char departamento;
    float salario;
} Funcionario;

void copia_dados(FILE* fl, int n, Funcionario** pessoal) {
    *pessoal = (Funcionario*)malloc(n * sizeof(Funcionario));
    
    for (int i = 0; i < n; i++) {
        fscanf(fl, "%d\t%s\t%c\t%f\n", &(*pessoal)[i].funcional, (*pessoal)[i].nome, &(*pessoal)[i].departamento, &(*pessoal)[i].salario);
    }
}

void imprime_folha_pagamento(int n, Funcionario** pessoal, char depto) {
    float total = 0.0;
    
    for (int i = 0; i < n; i++) {
        if ((*pessoal)[i].departamento == depto) {
            total += (*pessoal)[i].salario;
        }
    }
    
    printf("Total gasto com o departamento %c: %.2f\n", depto, total);
}

int main(void){
	setlocale(LC_ALL,"portuguese");
    FILE* arquivo;
    int num_funcionarios;
    Funcionario* lista_funcionarios;

    arquivo = fopen("funcionarios.txt", "wt");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    
    fscanf(arquivo, "%d", &num_funcionarios);
    copia_dados(arquivo, num_funcionarios, &lista_funcionarios);
    fclose(arquivo);

    imprime_folha_pagamento(num_funcionarios, &lista_funcionarios, 'A');
    imprime_folha_pagamento(num_funcionarios, &lista_funcionarios, 'B');
    imprime_folha_pagamento(num_funcionarios, &lista_funcionarios, 'C');

    free(lista_funcionarios);

    return 0;
}