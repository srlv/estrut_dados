/*Crie um tipo estruturado para armazenar dados de uma pessoa. Uma estrutura deste tipo possui os
seguintes campos: nome da pessoa, numero do documento e idade.
a) Escreva uma função que receba como parâmetros o endereço de uma estrutura do tipo Pessoa e
preencha seus campos com valores fornecidos pelo usuário via teclado.
b) Escreva uma função que receba como parâmetros o endereço de uma estrutura do tipo Pessoa e
imprima os valores dos seus campos.
c) Implemente uma função para realizar uma atualização da idade de uma estrutura do tipo Pessoa.
d) Escreva uma função que receba como par^ametro um vetor de estruturas do tipo Pessoa e imprima
o nome da Pessoa mais velha e mais nova. */

//resolução:

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definição da estrutura "dados_p" que armazena informações sobre uma pessoa
typedef struct dados_p {
    char nome[20];
    int ndocumento;
    int idade;
} dados;

// Função para coletar dados de uma pessoa
void pessoa(dados* rgt) {
    printf("Informe seu nome: ");
    scanf(" %[^\n]", rgt->nome);

    printf("Informe o número do seu documento: ");
    scanf("%d", &(rgt->ndocumento));

    printf("Informe sua idade: ");
    scanf("%d", &(rgt->idade));
}

// Função para imprimir os dados de uma pessoa
void imprimirDados(dados* func) {
    printf("Nome: %s\n", func->nome);
    printf("Número do documento: %d\n", func->ndocumento);
    printf("Idade: %d\n", func->idade);
}

// Função para alterar a idade de uma pessoa
void alteraridade(dados* func, int novaidade) {
    func->idade = novaidade;
}

// Função para encontrar a pessoa com maior e menor idade
void maioridemenorid(dados* dados, int tamanho) {
    int maioridade = 0;
    int menoridade = 0;

    for (int i = 1; i < tamanho; i++) {
        if (dados[i].idade > dados[maioridade].idade) {
            maioridade = i;
        }
        if (dados[i].idade < dados[menoridade].idade) {
            menoridade = i;
        }
    }

    printf("Pessoa com a maior idade:\n");
    imprimirDados(&dados[maioridade]);

    printf("Pessoa com a menor idade:\n");
    imprimirDados(&dados[menoridade]);
}

int main(void) {
    setlocale(LC_ALL, "portuguese");

    int quantidade;
    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &quantidade);

    // Alocação dinâmica de memória para o vetor de pessoas
    dados* ps = (dados*)malloc(quantidade * sizeof(dados));

    for (int i = 0; i < quantidade; i++) {
        printf("Preenchendo dados da pessoa %d:\n", i + 1);
        pessoa(&ps[i]);
    }

    // Encontra e imprime a pessoa com maior e menor idade
    maioridemenorid(ps, quantidade);

    int altera_idade;
    printf("Digite o número do documento da pessoa para alterar a idade: ");
    scanf("%d", &altera_idade);

    int novaidade;
    printf("Digite a nova idade: ");
    scanf("%d", &novaidade);

    // Altera a idade da pessoa escolhida
    alteraridade(&ps[altera_idade], novaidade);

    // Imprime os dados atualizados da pessoa escolhida
    printf("Dados atualizados da pessoa:\n");
    imprimirDados(&ps[altera_idade]);

    // Libera a memória alocada para o vetor de pessoas
    free(ps);
    return 0;
}
