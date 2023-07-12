#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 struct aluno{
 	char nome[20];
 	int idade;
 	int matricula;
 };
int main(void){
	setlocale(LC_ALL,"portuguese");
	struct aluno var_alunos;
	
	printf("digite o nome:\n");
	scanf("%s",var_alunos.nome);
	
	printf("digite a idade:\n");
	scanf("%d",&var_alunos.idade);
	
	printf("digite a matricula:\n");
	scanf("%d",&var_alunos.matricula);
	
	printf("os dados informados: \n nome: %s \t idade: %d \t matricula: %d", var_alunos.nome, var_alunos.idade, var_alunos.matricula);
	return 0;
}