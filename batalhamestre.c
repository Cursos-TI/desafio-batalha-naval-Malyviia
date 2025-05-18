#include <stdio.h>
#include <stdlib.h>

#define TAM 5

// Função para exibir a matriz (habilidade)
void exibirMatriz(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Função para preencher padrão em cone
void habilidadeCone(int matriz[TAM][TAM]) {
    // Zera a matriz
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            matriz[i][j] = 0;

    // Preenche o padrão de cone
    for (int i = 0; i < TAM; i++) {
        int meio = TAM / 2;
        for (int j = 0; j < TAM; j++) {
            if (j >= meio - i && j <= meio + i) {
                matriz[i][j] = 1;
            }
        }
    }
}

// Função para preencher padrão em cruz
void habilidadeCruz(int matriz[TAM][TAM]) {
    // Zera a matriz
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            matriz[i][j] = 0;

    int meio = TAM / 2;
    for (int i = 0; i < TAM; i++) {
        matriz[i][meio] = 1; // Coluna central
        matriz[meio][i] = 1; // Linha central
    }
}

// Função para preencher padrão em octaedro
void habilidadeOctaedro(int matriz[TAM][TAM]) {
    // Zera a matriz
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            matriz[i][j] = 0;

    int centro = TAM / 2;
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (abs(i - centro) + abs(j - centro) <= centro) {
                matriz[i][j] = 1;
            }
        }
    }
}

int main() {
    int matriz[TAM][TAM];

    printf("Habilidade em Cone:\n");
    habilidadeCone(matriz);
    exibirMatriz(matriz);

    printf("abilidade em Cruz:\n");
    habilidadeCruz(matriz);
    exibirMatriz(matriz);

    printf("Habilidade em Octaedro:\n");
    habilidadeOctaedro(matriz);
    exibirMatriz(matriz);

    return 0;
}