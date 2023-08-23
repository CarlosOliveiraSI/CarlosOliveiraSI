#include<stdio.h>
#include<string.h>

int main(){

char caracteres[101];

	printf("Digite uma frase tamanho limite(100): ");
	fgets(caracteres, sizeof(caracteres),stdin);

int tamanho = strlen(caracteres), i;

	printf("Ordem inversa");
	for(i = tamanho - 1;i >= 0;i--){
	printf("%c", caracteres[i]);
}

	return 0;
	
}
