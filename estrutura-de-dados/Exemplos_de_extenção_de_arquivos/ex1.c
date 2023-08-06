#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void) {
    setlocale(LC_ALL, "portuguese");
    FILE *fp;
    
    fp = fopen("entrada.txt", "wt"); // Abre o arquivo para escrita de texto ("wt")

    if (fp == NULL) {
        printf("Erro ao abrir arquivo\n");
        exit(1);
    }

    // Escreve um caractere no arquivo
    char caracter = 'A';
    fputc(caracter, fp);

    // Fecha o arquivo
    if (!fclose(fp)) {
        printf("Arquivo fechado com sucesso\n");
    }

    return 0;
}