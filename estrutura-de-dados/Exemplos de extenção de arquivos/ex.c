#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(void){
	setlocale(LC_ALL,"portuguese");
	
	char  nome_arquivo[20];
	printf("informe o nome do arquivo:\n");
	scanf(" %[^\n]", nome_arquivo, "w");
	

	FILE * arquivo=fopen(nome_arquivo, "w");
	if(arquivo=NULL){
		printf("erro ao abrir arquivo\n");
		return 1;
	}
	else{
		printf("arquivo criado com sucesso\n");
			
	}
	fputs("HELLO WORLD!", arquivo);
	fputc('A', arquivo);
    fprintf(arquivo, "\n algoritmos e estruturas de dados 1\n");
	while (!feof(nome_arquivo)) {
	arquivo = fgetc(nome_arquivo);
		printf("%c", arquivo);
	}
	fclose(arquivo);
	return 0;
}