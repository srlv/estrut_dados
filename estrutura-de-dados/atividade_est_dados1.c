#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definição da estrutura "funcionarios" que armazena informações sobre um funcionário
typedef struct funcionarios {
    char nome[20];
    float salario;
    int identificador;
    char cargo[20];
} funcionario;

// Função para coletar dados de um funcionário
void dados(funcionario* rgt) {
    printf("Informe seu nome: ");
    scanf(" %[^\n]", rgt->nome);

    printf("Informe seu salário: ");
    scanf("%f", &(rgt->salario));

    printf("Informe seu identificador: ");
    scanf("%d", &(rgt->identificador));

    printf("Informe seu cargo: ");
    scanf(" %[^\n]", rgt->cargo);
}

// Função para imprimir os dados de um funcionário
void imprimirDados(const funcionario* func) {
    printf("Nome: %s\n", func->nome);
    printf("Salário: %.2f\n", func->salario);
    printf("Identificador: %d\n", func->identificador);
    printf("Cargo: %s\n", func->cargo);
}



int main(void) {
    setlocale(LC_ALL, "portuguese");

    int quantidade;
    printf("Digite a quantidade de funcionários: ");
    scanf("%d", &quantidade);

    funcionario* funcionarios = (funcionario*)malloc(quantidade * sizeof(funcionario));

    for (int i = 0; i < quantidade; i++) {
        printf("Preenchendo dados do funcionário %d:\n", i + 1);
        dados(&funcionarios[i]);
        
       
    }

  
  
   
   
   
    // Libera a memória alocada para o vetor de funcionários
    free(funcionarios);

    return 0;
}
