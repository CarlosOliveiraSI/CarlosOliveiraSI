#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include"matriz.h"

void printMatriz(int m[][100], int linhas, int cols);
void geraMatriz(int m[][100], int linhas, int cols);
void leiaMatriz(int m[][100], int linhas, int cols);


int main() {
    int matriz1[100][100];
    int matriz2[100][100];
    int resultado[100][100];
    int linhas, cols;
    char opcao;
    int constante;

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &cols);

    printf("Escolha uma opcao:\n");
    printf("(a) Somar as duas matrizes\n");
    printf("(b) Subtrair a primeira matriz da segunda\n");
    printf("(c) Adicionar uma constante as duas matrizes\n");
    printf("(d) Imprimir as matrizes\n");

    scanf(" %c", &opcao);

    switch (opcao) {
    	int i,j;
        case 'a':
            geraMatriz(matriz1, linhas, cols);
            geraMatriz(matriz2, linhas, cols);
            for (i = 0; i < linhas; i++) {
                for (j = 0; j < cols; j++) {
                    resultado[i][j] = matriz1[i][j] + matriz2[i][j];
                }
            }
            printf("Matriz resultante da soma:\n");
            printMatriz(resultado, linhas, cols);
            break;

        case 'b':
      
            leiaMatriz(matriz1, linhas, cols);
            leiaMatriz(matriz2, linhas, cols);
            for (i = 0; i < linhas; i++) {
                for (j = 0; j < cols; j++) {
                    resultado[i][j] = matriz1[i][j] - matriz2[i][j];
                }
            }
            printf("Matriz resultante da subtracao:\n");
            printMatriz(resultado, linhas, cols);
            break;

        case 'c':
            printf("Digite a constante a ser adicionada as matrizes: ");
            scanf("%d", &constante);
            leiaMatriz(matriz1, linhas, cols);
            leiaMatriz(matriz2, linhas, cols);
            for (i = 0; i < linhas; i++) {
                for (j = 0; j < cols; j++) {
                    matriz1[i][j] += constante;
                    matriz2[i][j] += constante;
                }
            }
            printf("Matriz 1 com a constante adicionada:\n");
            printMatriz(matriz1, linhas, cols);
            printf("Matriz 2 com a constante adicionada:\n");
            printMatriz(matriz2, linhas, cols);
            break;

        case 'd':
            printf("Digite os elementos da primeira matriz:\n");
            leiaMatriz(matriz1, linhas, cols);
            printf("Digite os elementos da segunda matriz:\n");
            leiaMatriz(matriz2, linhas, cols);
            printf("Matriz 1:\n");
            printMatriz(matriz1, linhas, cols);
            printf("Matriz 2:\n");
            printMatriz(matriz2, linhas, cols);
            break;

        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}




