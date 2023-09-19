#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"matriz.h"

void geraMatriz(int m[][100], int linhas, int cols);

int main(){
	int matriz[100][100];
	int linhas = 5;
	int cols = 5;
	int i;
	
	geraMatriz(matriz, linhas, cols);
	
	printf("Diagonal principal: ");
	for(i=0;i<linhas;i++){
		printf("%3d |", matriz[i][i]);
	}

	return 0;
}




	




