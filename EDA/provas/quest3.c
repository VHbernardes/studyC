#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 222029243
// victor hugo dos santos bernardes
// code = [c, c, c, v, c, g, c, o, t]

char *Q3(int *M, char *NC){
    int n;
    char *code = (char *) malloc(sizeof(char)*9);
    for (int i = 0; i < 9; i++){
        code[i] = NC[M[i]];
        if (code[i]==' ') code[i] = '-';
    }
    return code;
}

int main(){
    int M[9] = {2, 2, 2, 0, 2, 9, 2, 4, 3};
    char NC[10] = "victor hugo dos santos bernardes";
    printf("O código é: %s", Q3(M, NC));
    return 1;
}