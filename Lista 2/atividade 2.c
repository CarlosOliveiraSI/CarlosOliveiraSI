#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"matriz.h"

void geraMatriz(int m[][100], int linhas, int cols);
void printMatriz(int m[][100], int linhas, int cols);

int main(){
	int matriz[100][100];
	int linhas = 3;
	int cols = 3;
	
	geraMatriz(matriz, linhas, cols);
	printMatriz(matriz, linhas, cols);
	
	int menor = matriz[0][0];
	int i, j;
	
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			if(matriz[i][j] < menor){
				menor = matriz[i][j];
			}
		}
	}
	
	printf("O menor numero da matriz:  %d", menor);
	
	return 0;
}

	voidgeraMatriz(int m[][100], int linhas, int cols){
		int i,j;
		srand(time(NULL));
		for(i=0;i<linhas;i++){
			for(j=0;j<cols;j++){
				m[i][j] = rand()%50;
			}
		}
	}
	
	voidprintMatriz(int m[][100], int linhas, int cols){
		int i,j;
		for(i=0;i<linhas;i++){
			for(j=0;j<cols;j++){
				printf("%3d",m[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
