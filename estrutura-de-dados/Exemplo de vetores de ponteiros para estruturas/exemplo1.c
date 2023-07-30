#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura "aluno" com os campos matrícula, nome, endereço e telefone.
struct aluno {
    int mat;
    char nome[81];
    char end[121];
    char tel[21];
};

typedef struct aluno Aluno;

#define MAX 100

Aluno* tab[MAX]; // Vetor de ponteiros de alunos.

// Função para inicializar o vetor de ponteiros de alunos, atribuindo NULL a cada posição.
void inicializar(int n, Aluno** tab) {
    for (int i = 0; i < n; i++)
        tab[i] = NULL;
}

// Função para preencher os dados de um aluno em uma posição do vetor.
void preencher(int n, Aluno** tab, int i) {
    if (i < 0 || i >= n) {
        printf("Índice fora do limite do vetor.\n");
        exit(1);
    }
    if (tab[i] == NULL) {
        tab[i] = (Aluno*)malloc(sizeof(Aluno)); // Aloca espaço para o aluno na memória.
    }

    printf("Entre com a matrícula: ");
    scanf("%d", &tab[i]->mat);

    printf("Entre com o nome: ");
    scanf(" %80[^\n]", tab[i]->nome);

    printf("Entre com o endereço: ");
    scanf(" %120[^\n]", tab[i]->end);

    printf("Entre com o telefone: ");
    scanf(" %20[^\n]", tab[i]->tel);
}

// Função para retirar um aluno de uma posição do vetor e liberar a memória alocada para ele.
void retira(int n, Aluno** tab, int i) {
    if (i < 0 || i >= n) {
        printf("Índice fora do limite do vetor.\n");
        exit(1);
    }
    if (tab[i] != NULL) {
        free(tab[i]); // Libera o espaço de memória alocado para o aluno.
        tab[i] = NULL;
    }
}

// Função para imprimir os dados de um aluno de uma posição do vetor.
void imprimir(int n, Aluno** tab, int i) {
    if (i < 0 || i >= n) {
        printf("Índice fora do limite do vetor.\n");
        exit(1);
    }
    if (tab[i] != NULL) {
        printf("Matrícula: %d\n", tab[i]->mat);
        printf("Nome: %s\n", tab[i]->nome);
        printf("Endereço: %s\n", tab[i]->end);
        printf("Telefone: %s\n", tab[i]->tel);
    }
}

// Função para imprimir todos os alunos do vetor.
void imprimi_tudo(int n, Aluno** tab) {
    for (int i = 0; i < n; i++) {
        imprimir(n, tab, i);
    }
}

int main(void) {
    Aluno* tab[10];
    inicializar(10, tab);

    preencher(10, tab, 0);
    preencher(10, tab, 1);
    preencher(10, tab, 2);

    imprimi_tudo(10, tab);

    retira(10, tab, 0);
    retira(10, tab, 1);
    retira(10, tab, 2);

    return 0;
}
