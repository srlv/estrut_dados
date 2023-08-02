#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<ctype.h>
int main(void){
	setlocale(LC_ALL,"portuguese");
	int c;
    char entrada[121]; //armazena nome do arquivo de entrada
    char saida[121];   //armazena nome de arquivo de saida

	FILE * e; //ponteiro de arquivo de entrada
    FILE *s;
	printf("digite o nome do arquivo de entrada");
    scanf("%120s",entrada);
    printf("digite o nome do arquivo de saida");
    scanf("%120s",saida);
    e=fopen(entrada,"rt");
    if(e==NULL){
        printf("não foi possivel abrir o arquivo de entrada");
        fclose(e);
        return 1;
    }
    s=fopen(saida,"wt");
    if(s==NULL){
        printf("não foi possivel abrir o arquivo de saida");
        fclose (s);
        return 1;
    }
    while((c=fgetc(e)) != EOF)
    fputc(toupper(c), s);

    fclose(e);
    fclose(s);    

	return 0;
}