/*Escreva um programa que implementa uma struct Pessoa com os campos nome, idade e gênero. O
gênero deve ser armazenado como um enum com os valores MASCULINO e FEMININO. O programa
deve ler os dados de uma pessoa e imprimir os dados da pessoa.*/

/*resolução:*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// Definição do enum "boolean" com as constantes "masculino" e "feminino"
enum boolean {
    masculino,
    feminino
};

// Criação do typedef "bo" para o enum "boolean"
typedef enum boolean bo;

// Definição da estrutura "Pessoa" com campos para o nome, idade e gênero
typedef struct Pessoa {
    char nome[20];
    int idade;
    bo genero;
} pessoa;

int main(void) {
    setlocale(LC_ALL, "portuguese");
    pessoa dados;

    // Coleta do nome da pessoa
    printf("Informe seu nome: ");
    scanf(" %s", dados.nome);

    // Coleta da idade da pessoa
    printf("Informe sua idade: ");
    scanf("%d", &dados.idade);

    // Coleta do gênero da pessoa (0 para masculino ou 1 para feminino)
    int val;
    printf("Informe seu sexo: 0 para masculino ou 1 para feminino: ");
    scanf("%d", &val);

    // Atribui o valor do gênero informado à variável "genero" da estrutura "Pessoa"
    dados.genero = (val == 0) ? masculino : feminino;

    // Imprime o gênero da pessoa com base na escolha feita
    if (val == 0) {
        printf("Masculino\n");
    }
    if (val == 1) {
        printf("Feminino\n");
    }

    // Imprime o nome, idade e gênero da pessoa
    printf("Seu nome é: %s\n", dados.nome);
    printf("Você tem: %d anos\n", dados.idade);
    printf("E seu sexo escolhido foi o número: %d\n", dados.genero);

    return 0;
}	
