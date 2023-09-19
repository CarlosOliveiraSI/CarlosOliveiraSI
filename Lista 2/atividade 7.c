#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matriz.h"

void geraMatriz(int m[][100], int linhas, int cols);
void printMatriz(int m[][100], int linhas, int cols);

int main(){
    int matriz[100][100];
    int i,j;
    int linhas = 5;
    int cols = 5;
    int elr;
    


    geraMatriz(matriz, linhas, cols);
    printMatriz(matriz, linhas, cols);
    
    printf("Digite um escalar do tipo inteiro: ");
    scanf("%d", &elr);
    
    printf("Resultado:");
    
    for(i=0;i<linhas;i++){
    	for(j=0;j<cols;j++){
    		matriz[i][j] *= elr;
			printf("%3d |",matriz[i][j]);
		}
	}
    return 0;
}
