#include <stdio.h>
#include <stdlib.h>

int main() {
    

    int a = 20;
    int *p = NULL;

    p = &a;

    printf("&A = %p, a = %i\n", &a, a);

    printf("&p = %p, p = %p, *p = %i", &p, p, *p);

    *p = 50;

    printf("&A = %p, a = %i\n", &a, a);
    return 0;
}