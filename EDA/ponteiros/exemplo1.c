// #include <stdio.h>
// int main(){
//     int numero;
//     numero = 79417;

//     //Valor de numero
//     printf("O valor de numero é: %d\n", numero);

//     //Endereço de numero
//     printf("O endereço de numero é: %p\n", &numero);
//     return 0;
// }

#include <stdio.h>
int main(){
    int numero = 79417;
    int *ptr;

    ptr = &numero;

    //Valor de numero
    printf("O valor de numero é: %d\n", *ptr);

    //Endereço de numero
    printf("O endereço de numero é: %p\n", ptr);
    return 0;
}