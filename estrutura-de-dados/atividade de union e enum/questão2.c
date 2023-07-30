/*Escreva um programa que implementa uma struct Produto com os campos nome, preço e tipo. O
tipo deve ser armazenado como uma union que armazena um dos tipos: ALIMENTO, BEBIDA ou
ELETR^ONICO. O programa deve ler os dados de um produto e imprimir os dados do produto.*/

//resolução:

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// Definição de uma union chamada 'tipo'
typedef union {
    int alimento;             // Campo para armazenar o tipo 'ALIMENTO' (valor 0)
    float bebida;             // Campo para armazenar o tipo 'BEBIDA' (valor 1)
    char eletronico[50];      // Campo para armazenar o tipo 'ELETRONICO' (nome do produto eletrônico)
} tipo;

// Definição da struct 'Produto'
typedef struct Produto {
    char nome[50];            // Campo para armazenar o nome do produto
    float preco;              // Campo para armazenar o preço do produto
    tipo p;                   // Campo para armazenar o tipo do produto utilizando a union 'tipo'
} produto;

int main(void) {
    produto dados;            // Declaração de uma variável do tipo 'produto'
    setlocale(LC_ALL, "portuguese");

    printf("Informe o nome do produto escolhido:\n");
    scanf(" %[^\n]", dados.nome);  // Lê o nome do produto, permitindo espaços em branco

    printf("Informe o preço do produto:\n");
    scanf("%f", &dados.preco);     // Lê o preço do produto

    printf("Informe o tipo do produto, digite [0] para alimento, [1] para bebida ou o nome do eletrônico:\n");
    scanf(" %49[^\n]", dados.p.eletronico);  // Lê o tipo do produto, podendo ser o valor numérico ou o nome do eletrônico

    printf("Nome do produto escolhido: %s\n", dados.nome);  // Imprime o nome do produto
    printf("Preço do produto: %.2f\n", dados.preco);       // Imprime o preço do produto

    // Verifica qual o tipo do produto utilizando a union 'tipo'
    if (dados.p.alimento == 0) {
        printf("Tipo: alimento\n");
    } else if (dados.p.bebida == 1) {
        printf("Tipo: bebida\n");
    } else {
        printf("Tipo: eletrônico %s\n", dados.p.eletronico);  // Imprime o tipo do produto como eletrônico, seguido do nome do eletrônico
    }

    return 0;
}