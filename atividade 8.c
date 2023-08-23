#include <stdio.h>

int main() {
    int n; // N�mero de lan�amentos
    printf("Digite o n�mero de lan�amentos: ");
    scanf("%d", &n);

    int contagens[6] = {0}, i; // Inicializa o vetor de contagens com zeros

    printf("Digite os resultados dos lan�amentos:\n");
    for (i = 0; i < n; i++) {
        int resultado;
        scanf("%d", &resultado);
        contagens[resultado - 1]++; // Incrementa a contagem da face correspondente
    }

    // Imprime o n�mero de ocorr�ncias de cada face
    for (i = 0; i < 6; i++) {
        printf("Face %d: %d ocorr�ncias\n", i + 1, contagens[i]);
    }

    return 0;
}

