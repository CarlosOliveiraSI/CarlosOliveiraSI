#include<stdio.h>
#include"biblioteca.h"

int contaimpar(int vetor[],int n){
	int i,cont=0;
	for(i = 0; i <vetor; i++){
		if(vetor[i]%2!=0){
			cont++;
		}
	}
	
	return cont;
}

int main(){
	int vetor[100], n;
	printf("Quantidade de elementos do vetor: ");
	scanf("%d",&n);
	printf("Digite os dados para o vetor");
	leiaVetor(vetor,n);
	printf("Vetor recebido: \n");
	escrevaVetor(vetor,n);
	return 0;
}
