#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

typedef struct dados_p{
	char nome[30];
	char disciplina[30];
	float regime_t;
}dados;

void preenche (dados* rgt){
	struct dados;
	printf("informe o seu nome");
	scanf(" %[^\n]",&rgt->nome);
	
	printf("informe a disciplina\n");
	scanf(" %[^\n]", &rgt->disciplina);
	
	printf("informe o regime\n");
	scanf("%d",&rgt->regime_t);
}
void imprime(dados*rgt){
	
	
	printf("o seu nome é %s\n",rgt->nome);
	printf("sua disciplina é %s\n", rgt->disciplina);
	printf("o seu regime de trabalho é %d", rgt->regime_t);
}

void alteraregime(dados){
	
}


int main(void){
	setlocale(LC_ALL,"portuguese");
	imprime;
	preenche;
	return 0;
	
}