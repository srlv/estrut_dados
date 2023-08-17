
#include"contabancaria.h"

int main(){
   char titular[40];
   int numero;
   float saldo;
   float novo;
   printf("informr o nome do titular: \n");
   scanf(" %[^\n]", titular);

   printf("informe o numero: \n");
   scanf("%d", &numero);

   printf("informe seu saldo: \n");
   scanf("%f", &saldo);

  contabancaria*contas = criaconta(titular, numero, saldo);
 
  printf("infome o seu novo salario");
  scanf("%f", &novo);

  deposita( contas, novo);

  float nsaldo;

  printf("informe seu saque: \n");
  scanf("%f", &nsaldo);

 
  saca(contas, nsaldo);


   return 0;

}