#include <stdio.h>

#define TAMANHO_TABULEIRO 10

int main() {
    // Matriz do tabuleiro (não necessária para exibir coordenadas, mas ajuda a entender)
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    // === POSICIONAMENTO MANUAL DOS NAVIOS ===
    
    // Navio vertical de tamanho 3 começando na posição (2, 3)
    int inicioX_v = 2;
    int inicioY_v = 3;

    // Navio horizontal de tamanho 4 começando na posição (6, 1)
    int inicioX_h = 6;
    int inicioY_h = 1;

    printf("Coordenadas do Navio Vertical:\n");
    for (int i = 0; i < 3; i++) {
        int x = inicioX_v + i;
        int y = inicioY_v;

        // Marca o navio na matriz
        tabuleiro[x][y] = 1;

        // Mostra no console
        printf("(%d, %d)\n", x, y);
    }

    printf("\nCoordenadas do Navio Horizontal:\n");
    for (int i = 0; i < 4; i++) {
        int x = inicioX_h;
        int y = inicioY_h + i;

        // Marca o navio na matriz
        tabuleiro[x][y] = 1;

        // Mostra no console
        printf("(%d, %d)\n", x, y);
    }

    return 0;
}