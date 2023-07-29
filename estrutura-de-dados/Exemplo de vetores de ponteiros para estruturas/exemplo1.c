#include <stdio.h>
#include <stdlib.h>

struct aluno{
	
	int mat;
	char nome[81];
	char end[121];
	char tel[21];
	
};

typedef struct aluno Aluno;

#define MAX 100
Aluno* tab[MAX];


void inicializar (int n,Aluno** tab){
	
	int i;
	for(i=0;i<n;i++)
	tab[i]=NULL;
}

void preencher (int n, Aluno** tab, int i){
	if(i<0 || i>=n){
	printf("indice fora do limite do vetor\n");
	exit(1);
	}
	if(tab[i]==NULL){
		tab[i]=(Aluno*)malloc(sizeof(Aluno));
	}
	
	printf("entre com a matricula \n");
	scanf("%d",&tab[i]->mat);
	printf("entre com o nome: \n");
	scanf(" %80[^\n]",tab[i]->nome);
	printf("entre com o endereco: \n");
	scanf(" %180[^\n]",tab[i]->end);
	printf("entre com o telefone: \n");
	scanf(" %20[^\n]",tab[i]->tel);
}

void retira(int n,Aluno** tab, int i){
	if(i<0||i>=n){
		printf("indice fora do limite do vetor \n");
		exit(1);
	}
	if(tab[i]!=NULL){
		free(tab[i]);
		tab[i]=NULL;
	}	
}

void imprimir (int n,Aluno** tab,int i){
	if(i<0||i>=n){
		printf("indice fora do limite do veto\n");
		exit(1);
	}
	if (tab[i]!=NULL){
		printf("matricula:%d\n",tab[i]->mat);
		printf("nome: %s\n",tab[i]->nome);
		printf("endereco: %s\n",tab[i]->end);
		printf("telefone: %s\n",tab[i]->tel);
	}
}

void imprimi_tudo(int n, Aluno** tab){
	int i;for(i=0;i<n;i++){
		imprimir(n,tab,i);
	}
}
int main(void){
	
	Aluno* tab[10];
	inicializar(10,tab);
	preencher(10,tab,0);
	preencher(10,tab,1);
	preencher(10,tab,2);
	imprimi_tudo(10,tab);
	retira(10,tab,0);
	retira(10,tab,1);
	retira(10,tab,2);
	
	return 0;
}