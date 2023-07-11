/*Você foi contratado para desenvolver um programa em C que permita armazenar nomes completos
e idades de várias pessoas. O programa deve solicitar ao usuário o número de pessoas e, em seguida,
permitir que ele digite o nome completo e a idade de cada pessoa.
Seu programa deve alocar memória dinamicamente para armazenar os nomes em uma matriz de
strings, e as idades devem ser armazenadas em um vetor. Após a entrada de todos os nomes e idades,
o programa deve exibir os nomes armazenados.
Aqui estão as especificações do programa:
{ O programa deve começar solicitando ao usuário o número de pessoas que deseja armazenar.
{ Em seguida, o programa deve pedir ao usuário que digite o nome completo de cada pessoa.
{ Os nomes devem ser armazenados em uma matriz alocada dinamicamente.
{ Após o nome, o programa deve solicitar a idade da pessoa.
{ As idades devem ser armazenadas em um vetor alocado dinamicamente.
{ Após a entrada de todos os nomes e idades, o programa deve exibir os nomes armazenados.
{ Certifique-se de tratar adequadamente a alocação dinâmica de memória e liberar a memória
alocada corretamente após o uso.
Observação: O programa deve ser capaz de armazenar até 100 nomes completos.*/

//Resolução:

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL,"portuguese");
    int np, c;
    printf("informe a quantidade de pessoas: ");
    scanf("%d", &np);
    getchar(); 
    char **nomes = (char**)malloc(np * sizeof(char*));
    int *idade = (int*)malloc(np * sizeof(int));
    if (nomes == NULL || idade == NULL) {
        printf("Erro de alocação de memória\n");
        exit(1);
    }
     else{
     	 printf("memória alocada com sucesso\n");
	 }
    for (int c = 0; c <np; c++) {
        nomes[c] = (char*)malloc(100 * sizeof(char));
        if (nomes[c] == NULL) {
            printf("Erro de alocação de memória.\n");
            exit(1);
        }
        printf("Digite o nome da pessoa %d: ", c + 1);
        fgets(nomes[c], 100, stdin);
        printf("Digite a idade da pessoa %d: ", c + 1);
        scanf("%d", &idade[c]);
        getchar(); 
    }
    printf("os nomes e idades são:\n");
    for (int c = 0; c <np; c++) {
        printf("%sIdade: %d\n", nomes[c], idade[c]);
    }
    for (int c = 0; c <np; c++) {
        free(nomes[c]);
    }
    free(nomes);
    free(idade);

    return 0;
}