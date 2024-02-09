#include <stdio.h>

void intersecao(int A[], int B[], int tamA, int tamB) {
    printf("A (interseccao) B = {");
    int i, j;

    for (i = 0; i < tamA; i++) {
        for (j = 0; j < tamB; j++) {
            if (A[i] == B[j]) {
                printf("%d", A[i]);

                // vírgula se não for o último elemento da interseção
                if (i != tamA - 1) {
                    printf(", ");
                }
                break;
            }
        }
    }

    printf("}\n");
}

int main() {
    int A[] = {7, 2, 5, 8, 4};
    int B[] = {4, 2, 9, 5};
    int tamA = sizeof(A) / sizeof(A[0]);
    int tamB = sizeof(B) / sizeof(B[0]);

    printf("A = {");
    int i;
    for (i = 0; i < tamA; i++) {
        printf("%d", A[i]);
        if (i != tamA - 1) {
            printf(", ");
        }
    }
    printf("}\n");

    printf("B = {");
    for (i = 0; i < tamB; i++) {
        printf("%d", B[i]);
        if (i != tamB - 1) {
            printf(", ");
        }
    }
    printf("}\n");

    intersecao(A, B, tamA, tamB);
    
    return 0;
}

