#include<stdio.h>

int main(){
	int i, vetor[3], valor_in_usuario;
	
	for(i = 0; i < 3; i++){
		printf("Digite os valores para o vetor%d :", i);
		scanf("%d",&vetor[i]);
	}
	
	printf("Informe um valor:");
	scanf("%d",&valor_in_usuario);
	
	for(i = 0; i < 3; i++){
		if(vetor[i] == valor_in_usuario){
			printf("O valor digitado se encontra do vetor!");
		}else{
			printf("Valor informado nao se encontra do vetor.\n");
		}
	}
	
	
	
	printf("Os valores do vetor sao:%d",vetor[i]);
	
return 0;	
	
}
