#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 typedef struct pessoa{
 	char nome[20];
 	int idade;
 	int rg;
 	float altura;
 }pessoa;
int main(void){
	setlocale(LC_ALL,"portuguese");
	pessoa var_pessoa;
	
	printf("digite o nome:\n");
	scanf("%s",var_pessoa.nome);
	
	printf("digite a idade:\n");
	scanf("%d",&var_pessoa.idade);
	
	printf("digite o rg:\n");
	scanf("%d",&var_pessoa.rg);
	
	printf("digite a altura:\n");
	scanf("%f",&var_pessoa.altura);
	
	printf("os dados informados: \n nome: %s \t idade: %d \t rg: %d \t altura %.2f", var_pessoa.nome, var_pessoa.idade, var_pessoa.rg, var_pessoa.altura);
	return 0;
}
