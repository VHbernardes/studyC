#include <stdio.h>

int main(){
    int numero, *ptr;
    numero = 79417;
    ptr = &numero;
    printf("O valor de numero é: %d\n", numero);
    *ptr = 90560;
    printf("O valor de numero é: %d\n", numero);
    printf("O valor de numero é: %d\n", *ptr);

    return 0;
}