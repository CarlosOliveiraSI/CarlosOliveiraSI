#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matriz.h"

void geraMatriz(int m[][100], int linhas, int cols);
void printMatriz(int m[][100], int linhas, int cols);

int main() {
    int matriz[100][100];
    int linhas = 3;
    int cols = 3;

    geraMatriz(matriz, linhas, cols);
    printMatriz(matriz, linhas, cols);

    int num;
    int i,j;
    int contem = 0;

    printf("Digite um numero para verificar se existe na matriz: ");
    scanf("%d", &num);

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < cols; j++) {
            if (num == matriz[i][j]) {
                contem = 1;
                break;
            }
        }
        if (contem) {
            break;
        }
    }

    if (contem) {
        printf("O numero esta na matriz.\n");
    } else {
        printf("O numero nao esta contido na matriz, ou o numero nao e do tipo inteiro.\n");
    }

    return 0;
}

voidgeraMatriz(int m[][100], int linhas, int cols){
	int i,j;
    srand(time(NULL));
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < cols; j++) {
            m[i][j] = rand() % 50;
        }
    }
}

voidprintMatriz(int m[][100], int linhas, int cols){
	int i,j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < cols; j++) {
            printf("%3d", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

