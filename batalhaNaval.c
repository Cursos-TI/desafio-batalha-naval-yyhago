#include <stdio.h>

int main() {
    int i, j;

    // Nível Novato
    int tabuleiroNovato[5][5] = {0};
    for (i = 0; i < 3; i++) tabuleiroNovato[i][2] = 3;
    for (i = 1; i < 4; i++) tabuleiroNovato[4][i] = 3;
    printf("Coordenadas navio vertical:\n");
    for (i = 0; i < 3; i++) printf("(%d,%d)\n", i, 2);
    printf("Coordenadas navio horizontal:\n");
    for (i = 1; i < 4; i++) printf("(%d,%d)\n", 4, i);

    // Nível Aventureiro
    int tabuleiroAventureiro[10][10] = {0};
    for (i = 0; i < 4; i++) tabuleiroAventureiro[i][1] = 3;
    for (i = 3; i < 7; i++) tabuleiroAventureiro[8][i] = 3;
    for (i = 0; i < 4; i++) tabuleiroAventureiro[i][i] = 3;
    for (i = 0; i < 4; i++) tabuleiroAventureiro[i][9 - i] = 3;
    printf("\nTabuleiro Aventureiro:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) printf("%d ", tabuleiroAventureiro[i][j]);
        printf("\n");
    }

    // Nível Mestre
    int cone[5][5] = {0};
    cone[0][2] = 1;
    cone[1][1] = cone[1][2] = cone[1][3] = 1;
    for (j = 0; j < 5; j++) cone[2][j] = 1;

    int octaedro[5][5] = {0};
    octaedro[0][2] = 1;
    octaedro[1][1] = octaedro[1][2] = octaedro[1][3] = 1;
    octaedro[2][2] = 1;

    int cruz[5][5] = {0};
    cruz[0][2] = 1;
    for (j = 0; j < 5; j++) cruz[1][j] = 1;
    cruz[2][2] = 1;

    printf("\nCone:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) printf("%d ", cone[i][j]);
        printf("\n");
    }

    printf("\nOctaedro:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) printf("%d ", octaedro[i][j]);
        printf("\n");
    }

    printf("\nCruz:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) printf("%d ", cruz[i][j]);
        printf("\n");
    }

    return 0;
}
