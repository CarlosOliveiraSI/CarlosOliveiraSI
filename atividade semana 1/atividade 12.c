#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main() {
    char mensagem[1001];
    
    printf("Digite a mensagem codificada: ");
    fgets(mensagem, sizeof(mensagem), stdin);

    int tamanho = strlen(mensagem),i;

    for (i = 0; i < tamanho; i++) {
        if (isalpha(mensagem[i])) {
            if (mensagem[i] == 'p' || mensagem[i] == 'P') {
                i++; 
            }
            
            printf("%c:", mensagem[i]);
        }
    }
    

    printf("\n");

    return 0;
}

