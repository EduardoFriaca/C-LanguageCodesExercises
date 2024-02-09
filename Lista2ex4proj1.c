#include <stdio.h>
#include <string.h>

void removerCaractere(char vetor[], char caracter) {
    int i, j = 0;
    
    for (i = 0; vetor[i] != '\0'; i++) {
        if (vetor[i] != caracter) {
            vetor[j++] = vetor[i];
        }
    }
    
    vetor[j] = '\0';
}

int main() {
    char vetor[100];
    char caracter;

    printf("Digite uma string: ");
    scanf("%s", vetor);

    printf("Digite o caracter a ser removido: ");
    scanf(" %c", &caracter); // Nota: Espa�o antes do %c para ignorar espa�os em branco

    removerCaractere(vetor, caracter);

    printf("Nova string ap�s a remo��o: %s\n", vetor);

    return 0;
}

