#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};
    int i, j;

    // Navio horizontal (linha 2, colunas 4 a 6)
    tabuleiro[2][4] = 3;
    tabuleiro[2][5] = 3;
    tabuleiro[2][6] = 3;

    // Navio vertical (coluna 1, linhas 5 a 7)
    tabuleiro[5][1] = 3;
    tabuleiro[6][1] = 3;
    tabuleiro[7][1] = 3;

    // Letras do topo
    printf("   A B C D E F G H I J\n");

    // Números da lateral + tabuleiro
    for (i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
