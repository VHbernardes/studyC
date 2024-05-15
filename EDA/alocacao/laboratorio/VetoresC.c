#include <stdio.h>
#include <stdlib.h>

// Função para alocação de vetor do tipo int
int *CriaVetInt(int tamanho) {
    // Aloca memória para o vetor
    int *vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória para o vetor!\n");
        exit(1); // Encerra o programa em caso de falha na alocação de memória
    }
    return vetor;
}

// Função para alocação de vetor do tipo float
float *CriaVetFloat(int tamanho) {
    // Aloca memória para o vetor
    float *vetor = (float *)malloc(tamanho * sizeof(float));
    if (vetor == NULL) {
        printf("Erro ao alocar memória para o vetor!\n");
        exit(1); // Encerra o programa em caso de falha na alocação de memória
    }
    return vetor;
}
