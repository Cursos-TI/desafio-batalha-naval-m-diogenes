#include <stdio.h>

int main() {

    int tabuleiro[10][10] = {0};

    // Navio horizontal (linha 2, colunas 4 a 6)
    tabuleiro[2][4] = 3;
    tabuleiro[2][5] = 3;
    tabuleiro[2][6] = 3;

    // Navio vertical (coluna 1, linhas 5 a 7)
    tabuleiro[5][1] = 3;
    tabuleiro[6][1] = 3;
    tabuleiro[7][1] = 3;

    // Navio diagonal: esquerda superior a direita inferior (linhas 0 a 2, colunas 0 a 2)
    tabuleiro[0][0] = 3;
    tabuleiro[1][1] = 3;
    tabuleiro[2][2] = 3;

    // Navio diagonal: direita superior a esquerda inferior (linhas 6 a 8, colunas 6 a 8)
    tabuleiro[6][8] = 3;
    tabuleiro[7][7] = 3;
    tabuleiro[8][6] = 3;

    // Letras do topo
    printf("   A B C D E F G H I J\n");

    // Números da lateral
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);

        // Tabuleiro
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}