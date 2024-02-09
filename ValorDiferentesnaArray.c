#include <stdio.h>

int contarValoresDiferentes(int vetor[], int tamanho) {
	int i, j;
    int diferentes = 0;

    for ( i = 0; i < tamanho; i++) {
        int valorAtual = vetor[i];
        int valorDiferente = 1; // Assumimos que o valor atual é diferente até prova em contrário

        for (j = 0; j < i; j++) {
            if (vetor[j] == valorAtual) {
                valorDiferente = 0; // Valor encontrado no vetor anterior, não é diferente
                break;
            }
        }

        if (valorDiferente) {
            diferentes++;
        }
    }

    return diferentes;
}

int main() {
    int vetor[10], i;

    printf("Digite 10 valores:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    int qtdDiferentes = contarValoresDiferentes(vetor, 10);

    printf("Quantidade de valores diferentes: %d\n", qtdDiferentes);

    return 0;
}

