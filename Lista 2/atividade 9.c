#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matriz.h"

void lerMatriz(int matriz[][3], int linhas, int colunas) {
	int i,j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("Digite o elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void multiplicarMatrizes(int M[][3], int N[][2], int Mult[][2]) {
	int i,j,k;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            Mult[i][j] = 0;
            for (k = 0; k < 3; k++) {
                Mult[i][j] += M[i][k] * N[k][j];
            }
        }
    }
}

void imprimirMatriz(int matriz[][2], int linhas, int colunas) {
	int i,j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%5d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int M[2][3];
    int N[3][2];
    int Mult[2][2];

    printf("Digite os elementos da matriz M (2x3):\n");
    lerMatriz(M, 2, 3);

    printf("Digite os elementos da matriz N (3x2):\n");
    lerMatriz(N, 3, 2);

    if (3 != 2) {
        printf("A multiplicacao nao pode ser realizada devido ao numero de colunas da primeira matriz nao ser igual ao numero de linhas da segunda matriz.\n");
        return 1;
    }

    multiplicarMatrizes(M, N, Mult);

    printf("Resultado da multiplicacao (2x2):\n");
    imprimirMatriz(Mult, 2, 2);

    return 0;
}

