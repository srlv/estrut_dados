/*Crie um tipo estruturado para armazenar dados de um funcionário. Uma estrutura deste tipo possui
os seguintes campos: nome, salário, identificador e cargo.
a) Escreva uma função que receba como  parâmetro o endereço de uma estrutura do tipo Funcionarioe preencha seus campos com valores fornecidos pelo usuário via teclado.
b) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Funcionario
e imprima os valores dos seus campos.
c) Implemente uma função para realizar uma alteração no salário de uma estrutura do tipo Funcionario.
d) Escreva uma função que receba como parâmetro um vetor de estruturas do tipo Funcionario e
imprima o cargo e salário do Funcionario com maior salário e o cargo e salário do funcionário
com o menor salário.*/

//Resolução:

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct funcionarios {
    char nome[20];
    float salario;
    int identificador;
    char cargo[20];
} funcionario;

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

void imprimirDados(const funcionario* func) {
    printf("Nome: %s\n", func->nome);
    printf("Salário: %.2f\n", func->salario);
    printf("Identificador: %d\n", func->identificador);
    printf("Cargo: %s\n", func->cargo);
}

void alterarSalario(funcionario* func, float novoSalario) {
    func->salario = novoSalario;
}

void maiorslremenorslr(const funcionario* funcionarios, int tamanho) {
    int indiceMaiorSalario = 0;
    int indiceMenorSalario = 0;

    for (int i = 1; i < tamanho; i++) {
        if (funcionarios[i].salario > funcionarios[indiceMaiorSalario].salario) {
            indiceMaiorSalario = i;
        }
        if (funcionarios[i].salario < funcionarios[indiceMenorSalario].salario) {
            indiceMenorSalario = i;
        }
    }

    printf("Funcionário com maior salário:\n");
    imprimirDados(&funcionarios[indiceMaiorSalario]);

    printf("Funcionário com menor salário:\n");
    imprimirDados(&funcionarios[indiceMenorSalario]);
}

int main(void) {
    setlocale(LC_ALL, "portuguese");

    int quantidade;
    printf("Digite a quantidade de funcionários:\n ");
    scanf("%d", &quantidade);

    funcionario* funcionarios = (funcionario*)malloc(quantidade * sizeof(funcionario));

    for (int i = 0; i < quantidade; i++) {
        printf("Preenchendo dados do funcionário %d:\n", i + 1);
        dados(&funcionarios[i]);
    }

    maiorslremenorslr(funcionarios, quantidade);

    int altera_salario;
    printf("Digite o identificador do funcionário para alterar o salário:\n ");
    scanf("%d", &altera_salario);

    float novoslr;
    printf("Digite o novo salário:\n ");
    scanf("%f", &novoslr);

    alterarSalario(&funcionarios[altera_salario], novoslr);

    printf("Dados atualizados do funcionário:\n");
    imprimirDados(&funcionarios[altera_salario]);

    free(funcionarios);
    return 0;
}