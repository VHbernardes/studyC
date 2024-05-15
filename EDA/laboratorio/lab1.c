#include <stdio.h>

int word2vec(char *texto){
    // implemente uma função que leia o nome do arquivo texto e crie um arquivo de saída contendo uma palavra do texto de entrada por linha
    
    FILE *arquivo, *arquivoCopia;          // ponteiro para o arquivo
    char palavra[100];      // variável para armazenar a palavra lida
    arquivo = fopen("texto.txt", "r"); // abre o arquivo texto.txt para leitura
    if (arquivo == NULL){   // verifica se o arquivo foi aberto corretamente
        return 0;           // retorna 0 em caso de erro
    }
    arquivoCopia = fopen("texto_vocabulo.txt", "w"); // abre o arquivo texto_vocabulo.txt para escrita
    while (fscanf(arquivo, "%s", palavra) != EOF){ // lê uma palavra do arquivo
        printf("%s\n", palavra); // imprime a palavra lida
    }
    fclose(arquivo);        // fecha o arquivo
    return 1;               // retorna 1 em caso de sucesso
    
    // if (arquivo == NULL){   // verifica se o arquivo foi aberto corretamente
    //     return 0;           // retorna 0 em caso de erro
    // }
    // while (fscanf(arquivo, "%s", palavra) != EOF){ // lê uma palavra do arquivo
    //     printf("%s\n", palavra); // imprime a palavra lida
    // }
    // fclose(arquivo);        // fecha o arquivo
    // return 1;               // retorna 1 em caso de sucesso
}

int main()
{
    if (!word2vec(texto.txt)){
        printf("Erro na geração do vocábulo!");
        //return 1;
    }

    
}
