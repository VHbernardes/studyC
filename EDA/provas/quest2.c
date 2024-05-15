#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Q2(char *str){
    int n = strlen(str);
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (str[i] > str[j]){
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main(){
    char str[100];
    printf("Digite uma string: ");
    scanf("%s", str);
    Q2(str);
    printf("A string ordenada é: %s", str);
    return 1;
}

//ciortv