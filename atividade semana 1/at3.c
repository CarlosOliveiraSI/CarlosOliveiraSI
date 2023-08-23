#include<stdio.h>

int main(){
	
	float vetor[5];
	int i;
	
	for(i = 0; i < 5; i++){
		printf("Digite os valores para o vetor:%d ", i);
		scanf("%f",&vetor[i]);
	}
	
float maior = vetor[5];

	for(i = 0; i < 5; i++){
		if(vetor[i] > maior){
			maior = vetor[i];
		}
	}
	
	printf("O maior valor do vetor:%f",maior);
	
	return 0;
}
