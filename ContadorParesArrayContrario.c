#include <stdio.h>

#define TAM 10

int main() {
    int numeros[TAM], i;
    printf("Digite os numeros:");
    for (i = 0; i < TAM; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("Numeros pares de tras para frente: ");
    for (i = TAM - 1; i >= 0; i--) { // TAM - 1 � igual a 9, � o �ndice do �ltimo elemento do array
                                     // esse i >= 0, o 0 � o in�cio da array. O i-- vai indo de tr�s para frente
        if (numeros[i] % 2 == 0) { // verifica e imprime os numeros pares
            printf("%d\n", numeros[i]);
        }
    }
    
    printf("\n"); // Adicionei uma quebra de linha aqui para formatar a sa�da corretamente

    return 0;
}

