#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define numero_maximo 30

int main(){
	
	int e, numeros[numero_maximo], n_sorteio;
	
	srand(time(0));
	
	printf("Digite os numeros que seram sorteados: ");
	scanf("%d",&e);
	
int i;

	for(i = 0; i < e; i++){
		numeros[i] = rand() % 1000;
	}
	
	printf("Digite um numero para verificar se esta no vetor: ");
	scanf("%d",&n_sorteio);
	
int encontrado = 0;

	for(i = 0; i < e; i++){
		if(numeros[i] == encontrado){
			printf("O numero %d foi encontrado na posicao %d do vetor.\n", encontrado, i);
			encontrado = 1;
			break;
		}
	}
	
	if(!encontrado){
		printf("O numero não foi encontrado no vetor.\n", encontrado);
	}
	
	return 0;
}
