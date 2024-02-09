#include <stdio.h>

void uniao(int A[], int tamanhoA, int B[], int tamanhoB) {
    printf("A È B = {");
    int i, j;
    for ( i = 0; i < tamanhoA; i++) {
        printf("%d", A[i]);

        if (i != tamanhoA - 1) {
            printf(", ");
        }
    }

    for ( i = 0; i < tamanhoB; i++) {
        int estaEmA = 0;

        for ( j = 0; j < tamanhoA; j++) {
            if (B[i] == A[j]) {
                estaEmA = 1;
                break;
            }
        }

        if (!estaEmA) {
            printf(", %d", B[i]);
        }
    }

    printf("}\n");
}

int main() {
    int tamanhoA, tamanhoB, i;

    printf("Digite o tamanho do vetor A: ");
    scanf("%d", &tamanhoA);

    int A[tamanhoA];
    printf("Digite os elementos do vetor A:\n");
    for (i = 0; i < tamanhoA; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite o tamanho do vetor B: ");
    scanf("%d", &tamanhoB);

    int B[tamanhoB];
    printf("Digite os elementos do vetor B:\n");
    for (i = 0; i < tamanhoB; i++) {
        scanf("%d", &B[i]);
    }

    uniao(A, tamanhoA, B, tamanhoB);

    return 0;
}


