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

typedef struct dados_p {
    char nome[20];
    int ndocumento;
    int idade;
} dados;

void pessoa(dados* rgt) {
    printf("Informe seu nome:\n ");
    scanf(" %[^\n]", rgt->nome);

    printf("Informe o número do seu documento:\n ");
    scanf("%d", &rgt->ndocumento);

    printf("Informe sua idade:\n ");
    scanf("%d", &rgt->idade);
}

void imprimirDados(dados* func) {
    printf("Nome: %s\n", func->nome);
    printf("Número do documento: %d\n", func->ndocumento);
    printf("Idade: %d\n", func->idade);
}

void alteraridade(dados* func, int novaidade) {
    func->idade = novaidade;
}

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
    printf("Digite a quantidade de pessoas:\n ");
    scanf("%d", &quantidade);

    dados* ps = (dados*)malloc(quantidade * sizeof(dados));

    for (int i = 0; i < quantidade; i++) {
        printf("Preenchendo dados da pessoa %d:\n", i + 1);
        pessoa(&ps[i]);
    }

    maioridemenorid(ps, quantidade);

    int altera_idade;
    printf("Digite o número do documento da pessoa para alterar a idade:\n ");
    scanf("%d", &altera_idade);

    int novaidade;
    printf("Digite a nova idade:\n ");
    scanf("%d", &novaidade);

    alteraridade(&ps[altera_idade], novaidade);

    printf("Dados atualizados da pessoa:\n");
    imprimirDados(&ps[altera_idade]);

    free(ps);
    return 0;
}