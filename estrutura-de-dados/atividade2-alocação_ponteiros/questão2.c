/*Escreva um programa para corrigir provas de múltipla escolha. Cada prova tem N
questões e cada questão vale 10/N pontos. Os primeiros dados a serem lidos são o número de
questões e o gabarito da prova. Em seguida, serão lidas as respectivas respostas de um total de
10 alunos matriculados. Calcule e mostre:
a) a nota obtida para cada aluno;
b) a porcentagem de aprovação, sabendo-se que a nota mínima para ser aprovado é 6.*/

//Resolução

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void) {
    setlocale(LC_ALL, "portuguese");

    int qt, c, i;
    float np = 0, notam = 6;

    // Solicita ao usuário o número de questões da prova
    printf("Informe o número de questões da prova: ");
    scanf("%d", &qt);

    np = 10.0 / qt; // Calcula o valor de cada questão (nota parcial)

    // Alocação dinâmica de memória para armazenar o gabarito das questões
    char *gabarito = (char*)malloc(qt * sizeof(char));
    if (gabarito == NULL) {
        printf("Erro de alocação\n");
        return 1;
    }

    // Coleta as respostas do gabarito das questões
    printf("Informe o gabarito:\n");
    for (c = 0; c < qt; c++) {
        printf("Questão %d: ", c + 1);
        scanf(" %c", &gabarito[c]);
    }

    // Alocação dinâmica de memória para armazenar as respostas dos alunos
    int *resp = (int*)malloc(qt * sizeof(int));
    if (resp == NULL) {
        printf("Erro de alocação\n");
        free(gabarito);
        return 1;
    }

    // Loop para coletar as respostas de 10 alunos
    for (c = 0; c < 10; c++) {
        float nt = 0; // Variável para armazenar a nota do aluno
        printf("Informe as respostas do aluno %d:\n", c + 1);
        for (i = 0; i < qt; i++) {
            printf("Questão %d: ", i + 1);
            scanf("%d", &resp[i]);

            // Verifica se a resposta do aluno está correta e calcula a nota parcial
            if (resp[i] == gabarito[i]) {
                nt += np;
            }
        }
        printf("Aluno %d: Nota %.2f\n", c + 1, nt);
    }

    // Verificação da porcentagem de alunos aprovados (nota maior ou igual a notam)
    int countAprovados = 0;
    for (c = 0; c < 10; c++) {
        float nt = 0; // Variável para armazenar a nota do aluno
        for (i = 0; i < qt; i++) {
            if (resp[i] == gabarito[i]) {
                nt += np;
            }
        }
        if (nt >= notam) {
            countAprovados++;
        }
    }

    // Cálculo da porcentagem de alunos aprovados em relação ao total de alunos (10)
    float porcentagemAprovados = (float)countAprovados / 10 * 100;
    printf("Porcentagem de aprovação: %.2f%%\n", porcentagemAprovados);

    // Liberação da memória alocada dinamicamente
    free(gabarito);
    free(resp);

    return 0;
}
