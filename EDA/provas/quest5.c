#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long Q5(char *NC, int R){
    long r;
    FILE *A = fopen("Saida.txt", "w");
    for (int i = 0; i < R; i++) {
        fprintf(A, "%s", NC);
        fclose(A);
    }
    A = fopen("Saida.txt", "r");
    fseek(A, 0, SEEK_END);
    r = ftell(A);
    fclose(A);
    remove("Saida.txt");
    return r;
}

int main(){
    char NC[] = "victor hugo dos santos bernardes";
    int R = 6;
    printf("O tamanho do arquivo é: %ld", Q5(NC, R));
    return 1;
}