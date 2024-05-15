#include <stdio.h>
#include <string.h>
#include <ctype.h>

FILE *arquivo, *arquivoCopia;
char palavra[100];

int removerAcentos(char *str) {
    char *comAcento = "áàãâéêíóôõúçÁÀÃÂÉÊÍÓÔÕÚ";
    char *semAcento = "aaaaeeioooucAAAAEEIOOOU";
    int i, j, trocou;
    int len = strlen(str);
    for (i = 0; i < len; i++) {
        trocou = 0;
        for (j = 0; comAcento[j]; j++) {
            if (str[i] == comAcento[j]) {
                str[i] = semAcento[j];
                trocou = 1;
                break;
            }
        }
        if (!trocou) {
            str[i] = tolower(str[i]);
        }
    }
    return 1;
}

int word2vec(char *texto){
    arquivo = fopen("texto.txt", "r");
    if (arquivo == NULL){
        return 0;
    }
    arquivoCopia = fopen("texto_vocabulo.txt", "w");
    while (fscanf(arquivo, "%s", palavra) != EOF){
        removerAcentos(palavra);
        if (strlen(palavra)>= 4)
        {
        printf("%s\n", palavra);
        fprintf(arquivoCopia, "%s\n", palavra);
        }
    }
    fclose(arquivo);
    fclose(arquivoCopia);
    return 1;
}

int main()
{
    if (!word2vec("texto.txt")){
        printf("Erro na geração do vocábulo!");
    }
    return 0;
}
