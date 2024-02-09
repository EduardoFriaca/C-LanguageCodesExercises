#include <stdio.h>

#define TAM 10

int main() {
    int numeros[TAM], i;
    printf("Digite os numeros:");
    for (i = 0; i < TAM; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("Numeros pares de tras para frente: ");
    for (i = TAM - 1; i >= 0; i--) { // TAM - 1 é igual a 9, é o índice do último elemento do array
                                     // esse i >= 0, o 0 é o início da array. O i-- vai indo de trás para frente
        if (numeros[i] % 2 == 0) { // verifica e imprime os numeros pares
            printf("%d\n", numeros[i]);
        }
    }
    
    printf("\n"); // Adicionei uma quebra de linha aqui para formatar a saída corretamente

    return 0;
}

