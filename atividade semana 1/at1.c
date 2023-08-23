#include <stdio.h>

int main() {
    int tamanho, soma = 0, i;

    printf("Digite o tamanho do vetor:");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for (i = 0; i < tamanho; i++) {
        printf("Digite o valor para a posição %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }

    printf("A soma dos elementos do vetor é: %d\n", soma);

    return 0;
}

