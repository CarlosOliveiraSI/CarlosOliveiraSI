#include <stdio.h>
#include <string.h>

int main() {
    char DNA[51], cpt[51];
    int i;

    printf("Digite as bases do DNA (A, T, C, G): ");
    fgets(DNA, sizeof(DNA), stdin);

    int tamanho = strlen(DNA) - 1;

    for (i = 0; i < tamanho; i++) {
        if (DNA[i] == 'A') {
            cpt[i] = 'T';
        } else if (DNA[i] == 'T') {
            cpt[i] = 'A';
        } else if (DNA[i] == 'C') {
            cpt[i] = 'G';
        } else if (DNA[i] == 'G') {
            cpt[i] = 'C';
        } else {
            printf("Dados inválidos\n");
            return 1;
        }
    }

    cpt[tamanho] = '\0';
    printf("Fita do gene complementar: %s\n", cpt);

    return 0;
}

