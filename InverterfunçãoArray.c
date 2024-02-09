#include <stdio.h>
#define TAM 5

int inverter(int vetor[], int tamanho) {
	int i;
    for (i = tamanho - 1; i >= 0; i--) {
        printf("%d\n", vetor[i]);
    }
    return 0;
}

int main() {
    int vetor[TAM], i;
    printf("Digite os valores do vetor:\n");
    for ( i = 0; i < TAM; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Vetor invertido:\n");
    inverter(vetor, TAM);

    return 0;
}

