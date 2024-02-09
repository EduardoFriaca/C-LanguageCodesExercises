#include <stdio.h>

int somarValores(int vetor[], int tamanho) {
    int soma, i;
    soma = 0;
    
    for (i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    
    return soma;
}

int main() {
    int N;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    int vetor[N], i, resultado;

    printf("Digite os valores do vetor:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    resultado = somarValores(vetor, N);

    printf("A soma dos valores do vetor eh: %d\n", resultado);

    return 0;
}

