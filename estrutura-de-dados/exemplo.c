#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int *soma (int *vetor1, int *vetor2, int tamanho){
	int * vetor_soma=(int*)malloc(tamanho*sizeof(int));
	if(vetor_soma==NULL){
		exit(1);
	}
	int contador;
	for(contador=0;contador<tamanho;contador++){
		vetor_soma[contador]=vetor1[contador]+vetor2[contador];
	}
	return vetor_soma;
}
int main(void){
	setlocale(LC_ALL,"portuguese");
	
	int v[]={1,2,3};
	int u[]={2,0,3};
	
	int * vetor =(int*)malloc(3*sizeof(int));
	vetor=soma(v,u,3);
	printf("vetor ={%2d%2d%2d}", vetor[0], vetor[1], vetor[2]);
	free(vetor);
	
	return 0;
	
	
	
	
	
}
