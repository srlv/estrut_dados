#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(void){
	setlocale(LC_ALL,"portuguese");
	FILE*fp;
	fp=fopen("entrada.txt","wt");
	if(fp==NULL){
	printf("arquivo não existe\n");
}else{
	printf("arquivo criado\n");
}
if(!fclose (fp)){
	printf("arquivo fechado com sucesso\n");
}
return 0;
}