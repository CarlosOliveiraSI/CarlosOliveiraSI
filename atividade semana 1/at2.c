#include<stdio.h>

int main(){
	float vetor[5];
	int i;
	
	for(i = 0; i < 5; i++){
		printf("Digite os valores para o vetor %d:", i);
		scanf("%f",&vetor[i]);
}
float menor = vetor[0];

	for(i = 0; i < 5; i++){
		if(vetor[i] < menor){
			menor = vetor[i];
		}
	}
	
	printf("O menor valor do vetor é:%f",menor);
	return 0;
}
