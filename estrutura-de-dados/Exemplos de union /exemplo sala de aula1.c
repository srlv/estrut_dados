#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
union documentos{
	long int cpf;
	long int rg;
	long int cnh;
};

typedef union documentos  docs;

int main(void){
	setlocale(LC_ALL,"portuguese");
	docs documento;
	
	printf("informe o cpf");
	scanf("%d",&documento.cpf); 
	
	printf("informe o rg");
	scanf("%d",&documento.rg);
	
	printf("informe a cnh");
	scanf("%d",&documento.cnh);  
	
		
	printf("informe um documento\n");
	scanf("%d", &documento.cpf);
	
	printf("documento: %d ", documento.cpf);
	printf("cpf: %d", documento.cpf);
	printf("rg: %d", documento.rg);
	printf("cnh: %d", documento.cnh);
	return 0;
}