#include <stdio.h>

int main() {
	int i;
    double notas[5];
    double menor = 10.0, maior = 0.0, soma = 0.0;
    
    for (i = 0; i < 5; i++) {
    	printf("Digite os valores: ");
        scanf("%lf", &notas[i]);

        if (notas[i] < menor) {
            menor = notas[i];
        }
        
        if (notas[i] > maior) {
            maior = notas[i];
        }
        
        soma += notas[i];
    }
    
    double notaFinal = soma - menor - maior;
    printf("%.1lf\n", notaFinal);
    
    return 0;
}

