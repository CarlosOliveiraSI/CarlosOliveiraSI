#include <stdio.h>

int main() {
    int n; // Número de lançamentos
    printf("Digite o número de lançamentos: ");
    scanf("%d", &n);

    int contagens[6] = {0}, i; // Inicializa o vetor de contagens com zeros

    printf("Digite os resultados dos lançamentos:\n");
    for (i = 0; i < n; i++) {
        int resultado;
        scanf("%d", &resultado);
        contagens[resultado - 1]++; // Incrementa a contagem da face correspondente
    }

    // Imprime o número de ocorrências de cada face
    for (i = 0; i < 6; i++) {
        printf("Face %d: %d ocorrências\n", i + 1, contagens[i]);
    }

    return 0;
}

