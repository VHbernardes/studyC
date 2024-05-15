#include <stdio.h>
#include <string.h>
#include <stdlib.h>

pn = 3

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

void Q2(char *str){
    int n = strlen(str);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (str[i] > str[j]){
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

char *Q3(int *M, char *NC){
    int n;
    char *code = (char *) malloc(sizeof(char)*9);
    for (int i = 0; i < 9; i++){
        code[i] = NC[M[i]];
        if (code[i]==' ') code[i] = '-';
    }
    return code;
}

int Verifica(char c){
    return (c>='a' && c<='z' && c!='a' && c!='e' && c!='i' && c!='o' && c!='u');
}

int Q4(char *NC, char L, int pos){
    if (NC[0]=='\0' || pos < 0 || pos >= strlen(NC) - 1) return -1;
    if (NC[pos] == L && Verifica(NC[pos+1])) return pos;
    return Q4(NC, L, pos+1);
}

long Q5(char *NC, int R){
    long r;
    FILE *A = fopen("Saida.txt", "w");
    for (int i = 0; i < R; i++) fprintf(A, "%s", NC);
    fclose(A);
    A = fopen("Saida.txt", "r");
    fseek(A, 0, SEEK_END);
    r = ftell(A);
    fclose(A);
    remove("Saida.txt");
    return r;
}

int main(){
    int valor;
    char str[100], NC[100], L;
    int M[9], R;
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
    printf("Digite uma string: ");
    scanf("%s", str);
    printf("Digite um código de 9 caracteres: ");
    scanf("%s", NC);
    printf("Digite um caractere: ");
    scanf(" %c", &L);
    printf("Digite um valor inteiro: ");
    scanf("%d", &R);
    printf("Q1: %d\n", Q1(valor));
    Q2(str);
    printf("Q2: %s\n", str);
    printf("Q3: %s\n", Q3(M, NC));
    printf("Q4: %d\n", Q4(NC, L, 0));
    printf("Q5: %ld\n", Q5(NC, R));
    return 0;
}