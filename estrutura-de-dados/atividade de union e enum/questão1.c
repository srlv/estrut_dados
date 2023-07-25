/*Escreva um programa que implementa uma struct Pessoa com os campos nome, idade e gênero. O
gênero deve ser armazenado como um enum com os valores MASCULINO e FEMININO. O programa
deve ler os dados de uma pessoa e imprimir os dados da pessoa.*/

/*resolução:*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

enum boolean{
	masculino,
	feminino
};
typedef enum boolean bo;

typedef struct Pessoa{
	char nome[20];
    int idade;
    bo genero;
}pessoa;
 
int main(void){
	setlocale (LC_ALL,"portuguese");
    pessoa dados;
	printf("informe seu nome\n");
	scanf(" %s", dados.nome);
	
	printf("informe sua idade\n");
	scanf("%d", &dados.idade);

	bo val;
	printf("informe seu sexo: 0 para masculino ou 1 para feminino\n");
	scanf("%d", &val);
	
	if(val==0){
		printf("masculino\n");
	}
	if(val==1){
		printf("feminino\n");
	}
    
    printf("seu nome é: %s\n",dados.nome);
    printf("voce tem: %d anos\n",dados.idade); 
    printf("e seu sexo escolhido foi o número: %d\n",dados.genero);
    
	return 0;
}