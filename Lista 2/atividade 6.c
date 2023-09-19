#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matriz.h"

void geraMatriz(int m[][100], int linhas, int cols);
void printMatriz(int m[][100], int linhas, int cols);

int main(){
    int matriz1[100][100];
    int matriz2[100][100];
    int resul[100][100];
    int i,j;
    int linhas = 5;
    int cols = 5;

    srand(time(NULL));
    
    geraMatriz(matriz1, linhas, cols);
    printMatriz(matriz1, linhas, cols);

    
    sleep(1);

    srand(time(NULL));
    
    geraMatriz(matriz2, linhas, cols);
    printMatriz(matriz2, linhas, cols);
    
    
    printf("Resultado da soma:");
    
    for(i=0;i<linhas;i++){
    	for(j=0;j<cols;j++){
    		resul[i][j] = matriz1[i][j] + matriz2[i][j];
    		printf("%3d |",resul[i][j]);
		}
	}
    return 0;
}

