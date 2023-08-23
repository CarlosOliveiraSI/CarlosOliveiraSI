#include <stdio.h>

#define n 3

int main() {
    int vet1[n], vet2[n], vet3[n];
    int i;

    for (i = 0; i < n; i++) {
        printf("Digite um valor para o primeiro vetor: ");
        scanf("%d", &vet1[i]);
    }

    printf("- - - - - - - - - - - - - - - - - - - -\n");

    int j;

    for (j = 0; j < n; j++) {
        printf("Digite um valor para o segundo vetor: ");
        scanf("%d", &vet2[j]);
    }

	printf("- - - - - - - - - - - - - - - - - - - -\n");
	
	int mult;
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(vet1[i] == vet2[j]){
				mult = vet1[i] * vet2[j];
				vet3[i] = mult;
			}
		}
	}
	
	printf("Os valores armazenados no vetor três são: ");
    for (i = 0; i < n; i++) {
        printf("%d ", vet3[i]);
    }
	
    return 0;
}

