#include <stdio.h>

void encontrarMaiorMenor(int *v, int tamanho, int *maior, int *menor) {
    *maior = v[0]; // Inicializa maior e menor com o primeiro elemento do vetor
    *menor = v[0];

    int i; // Declaração de 'i' fora do loop
    for (i = 1; i < tamanho; i++) {
        if (v[i] > *maior) {
            *maior = v[i]; // Atualiza o maior valor se encontrar um valor maior
        }
        if (v[i] < *menor) {
            *menor = v[i]; // Atualiza o menor valor se encontrar um valor menor
        }
    }
}

int main() {
    int vetor[] = {10, 5, 50, 3, 900}; // Exemplo de vetor
    int tamanho = sizeof(vetor) / sizeof(vetor[0]); // Calcula o tamanho do vetor

    int maior, menor;
    encontrarMaiorMenor(vetor, tamanho, &maior, &menor);

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}

