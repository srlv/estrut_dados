#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concatenarStrings(char* string1, char* string2) {
    int tamanho1 = strlen(string1);
    int tamanho2 = strlen(string2);

    char* resultado = (char*)malloc(tamanho1 + tamanho2 + 1); 

    if (resultado == NULL) {
        printf("Erro na alocação de memória");
        exit(1);
    }

    strcpy(resultado, string1);
    strcat(resultado, string2);

    return resultado;
}

int main(void) {
    char str1[] = "Olá, ";
    char str2[] = "Mundo!";
    
    char* resultado = concatenarStrings(str1, str2);

    printf("Resultado da concatenação: %s\n", resultado);

    free(resultado); 
    return 0;
}
