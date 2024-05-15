#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int Q1(int valor){
    int *ptr, *pnumeros, pn=valor%10, pp, psoma=0;
    if(pn<2) pn = 5 - pn;
    pnumeros = (int *)malloc(sizeof(int)*pn);
    ptr = pnumeros;
    for(pp=0; pp<pn; pp++){
        *ptr = valor%10;
        valor = valor/10;
        ptr++;
    }
    for (pp=0; pp<pn; pp++){
        if((pnumeros[pp]%2)==1) psoma = psoma + pnumeros[pp];
    }
    return psoma;
}

int main(){
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    printf("O resultado da função Q1 para o valor %d é: %d", valor, Q1(valor));
    return 1;
}

//3