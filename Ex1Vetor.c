#include <stdio.h>

int qtdvetor(int tamanho, int vetor[]) {
    int qtdiferentes = 0;
    int i, x;
    int encontrado[tamanho]; // Vetor auxiliar para marcar elementos encontrados
    
    for (i = 0; i < tamanho-2; i++) {
        int elemento = vetor[i];
        encontrado[i] = 0; // Inicializa vetor auxiliar como falso
        
        // Se o elemento for 0, pula para o próximo
        if (elemento == 0) {
            continue;
        }
        
        for (x = 0; x < i; x++) {
            if (vetor[x] == elemento) {
                encontrado[i] = 1; // Marca elemento como encontrado
                break;
            }
        }
        
        if (!encontrado[i]) {
            qtdiferentes++;
        }
    }

    return qtdiferentes;
}

int main() {
    int vetor[4] = {1, 2, 3, 3}; // Exemplo de vetor
    int n = sizeof(vetor) / sizeof(vetor[0]); // Tamanho do vetor

    int qtdDiferentes = qtdvetor(n, vetor); // Chamada corrigida da função

    printf("Quantidade de elementos diferentes: %d\n", qtdDiferentes);

    return 0;
}

