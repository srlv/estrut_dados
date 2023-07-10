/*Uma empresa fez uma pesquisa para saber se as pessoas gostaram ou não de um
novo produto. Um número N de pessoas de ambos os sexos foi entrevistado, e o questionário
consistia em apenas duas perguntas: (i) o sexo do entrevistado (M/F) e (ii) sua opinião sobre o
produto (gostou/não gostou). Escreva um programa em C que:
a) leia as respostas contidas no questionário e armazene-as em dois arrays vinculados,
um deles contendo a resposta para a primeira pergunta e o outro contendo a resposta
para a segunda pergunta.
b) determine a porcentagem de pessoas do sexo feminino que responderam que
gostaram do produto.
c) determine a porcentagem de pessoas do sexo masculino que responderam que não
gostaram do produto.*/
 
//Resolução:

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(void){
	setlocale(LC_ALL,"portuguese");
	int np, c;
	int cf=0,cm=0;
	float pm,pf;
	printf("informe a quantidade de pessoas pesquisadas ");
	scanf("%d",&np);
	char *sexo=(char*)malloc(np * sizeof(char));
    char *op=(char*)malloc(np * sizeof(char));
	if(sexo==NULL&&op==NULL){
		printf("erro de memória\n");
		return 1;
	}
	else{
	printf("memória alocada\n");
	}
     for (c = 0; c <np; c++) {
        printf("Resposta %d\n", c + 1);

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo[c]);

        printf("Opinião g (gostou) n (não gostou): ");
        scanf(" %c", &op[c]);
    }
     for (c = 0; c <np; c++) {
        if (sexo[c] == 'F' && op[c] == 'g') {
            cf++;
        } 
		else if (sexo[c] == 'M' && op[c] == 'n') {
            cm++;
        }
        pf=((cf*100)/np);
        pm=((cm*100)/np);
    }
    printf("a quantidade de pessoas do sexo feminino que gostaram são: %.2f%%\n",pf);
    printf("a quantidade de pessoas do sexo masculino que não gostaram são %.2f%%\n",pm);
 free(op);
 free(sexo);
 
	return 0;
}