#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*enumeração (Enum);

enum bool {
false;
true;
};
*/

enum boolean{
	false,
	true
};
typedef enum boolean bo;

int main(void){
	setlocale (LC_ALL,"portuguese");
	bo val;
	printf("digite 0 ou 1\n");
	scanf("%d", &val);
	
	if(val==true){
		printf("verdadeiro\n");
	}else{
		printf("falso\n");
	}
	return 0;
}