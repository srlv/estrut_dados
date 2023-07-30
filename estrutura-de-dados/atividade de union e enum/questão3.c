/*Escreva um programa que implementa uma struct Data com os campos dia, m^es e ano. O m^es deve
ser armazenado como um enum com os valores JANEIRO, FEVEREIRO, MARÇO, ABRIL, MAIO,
JUNHO, JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO e DEZEMBRO. O programa
deve ler a data e imprimir a data no formato dd/mm/aaaa.*/

//resolução:

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Enumeração para representar os meses do ano
typedef enum {
    JANEIRO = 1,
    FEVEREIRO,
    MARCO,
    ABRIL,
    MAIO,
    JUNHO,
    JULHO,
    AGOSTO,
    SETEMBRO,
    OUTUBRO,
    NOVEMBRO,
    DEZEMBRO
} Mes;

// Definição da struct 'Data' para armazenar a data com dia, mês e ano
typedef struct Data {
    int dia;
    Mes mes;
    int ano;
} Data;

int main(void) {
    Data data; // Declaração da variável 'data' do tipo 'Data'
    setlocale(LC_ALL, "portuguese");

    // Solicita ao usuário que insira a data no formato dia/mês/ano
    printf("Informe a data no formato dia/mês/ano:\n");
    scanf("%d/%d/%d", &data.dia, &data.mes, &data.ano);

    // Imprime a data no formato dd/mm/aaaa 
    printf("A data informada é: %d/%d/%d\n", data.dia, data.mes, data.ano);

    return 0;
}