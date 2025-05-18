#include <stdio.h>

#define TAMANHO 10

// Função para exibir o tabuleiro completo
void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    printf("\nTabuleiro (0 = vazio | 3 = navio):\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Inicializa o tabuleiro com zeros
    int tabuleiro[TAMANHO][TAMANHO] = {0};

    // Navio 1 - Vertical (3 posições)
    int x1 = 1, y1 = 2;
    for (int i = 0; i < 3; i++) {
        tabuleiro[x1 + i][y1] = 3;
    }

    // Navio 2 - Horizontal (4 posições)
    int x2 = 5, y2 = 0;
    for (int i = 0; i < 4; i++) {
        tabuleiro[x2][y2 + i] = 3;
    }

    // Navio 3 - Diagonal Principal (↘) (3 posições)
    int x3 = 0, y3 = 0;
    for (int i = 0; i < 3; i++) {
        tabuleiro[x3 + i][y3 + i] = 3;
    }

    // Navio 4 - Diagonal Secundária (↙) (3 posições)
    int x4 = 2, y4 = 7;
    for (int i = 0; i < 3; i++) {
        tabuleiro[x4 + i][y4 - i] = 3;
    }

    // Exibe o tabuleiro completo
    exibirTabuleiro(tabuleiro);

    return 0;
}