#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"matriz.h"

void geraMatriz(int m[][100], int linhas, int cols);
void printMatriz(int m[][100], int linhas, int cols);

int main(){
    int matriz[100][100];
    int linhas = 5;
    int cols = 5;
    int i;

    geraMatriz(matriz, linhas, cols);
    printMatriz(matriz, linhas, cols);

    printf("Diagonal secundaria:");
    for(i = 0; i < linhas; i++){
        printf("%d ", matriz[i][cols - i - 1]);
    }
    printf("\n");

    return 0;
}

