#include <stdio.h>

int AckermannRecursivo(int m, int n){
    if (m==0){
        return n+1;
    }

    if (n==0 && m>0){
        return AckermannRecursivo(m-1, 1);
    }

    else{
        return AckermannRecursivo(m-1, AckermannRecursivo(m, n-1));
    }
}

int main(){
    float x, y;
        printf("Digite o valor de m: ");
        scanf("%f", &x);
        scanf("%*c");
        printf("Digite o valor de n: ");
        scanf("%f", &y);
        int m = (int) x;
        int n = (int) y;
        if (m >= 0 && n >= 0){
            AckermannRecursivo(m, n);
            printf("O resultado da função de Ackermann para m = %d e para n = %d é: %d", m, n, AckermannRecursivo(m, n));
            return 1;
        } else{
            printf("Os valores de m e n devem ser positivos!");
            return 0;
        }    
}