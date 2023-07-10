//Considere o trecho de código abaixo:

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
  int main(void) {
  setlocale(LC_ALL,"portuguese");
  int x, *p;
  x = 100;
  p = x;
 printf(“Valor de p = %p\tValor de *p = %d”, p, *p);
 return 0;
}
/*Se tentarmos compilar o programa (não o compile ainda), você acha que o compilador nos
fornece alguma mensagem? Se sim, responda:
a) Esta mensagem é de erro ou advertência?
b) Por que o compilador emite tal mensagem?
c) Compile e execute o programa. A execução foi bem sucedida?
d) Modifique o trecho de código acima, de modo que nenhuma mensagem seja emitida
pelo compilador.
e) Compile e execute novamente o programa. A execução foi bem sucedida?
*/

/*Resolução:

a) o codigo apresenta um erro, então o compilador irá mostrar uma mensagem de erro se tentar compilar.
b) o compilador mostra o erro porque a forma de atribuir o valor a p eatá incorreto.
c) Não.
*/

//d)

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

    int main(void) {
    setlocale(LC_ALL,"portuguese");
    int x, *p;
    x = 100;
    p = &x;
    printf("Valor de p = %p\tValor de *p = %d", p, *p);
    return 0;
    }

//e) Sim.