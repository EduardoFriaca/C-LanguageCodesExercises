#include <stdio.h>
#include <stdbool.h>

int qtdivisores(int N) {
    int i, count = 0;
    for (i = 1; i <= N; i++) {
        if (N % i == 0) {
            ++ count;
        }
    }
    return count;
}

bool ehPrimo(int N) {
    if (qtdivisores(N) <= 2) {  // compara com 2 (1 e o próprio número)
        return true;
    } else {
        return false;
    }
}

int main() {
    int numero, divisores;
    bool primo;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    divisores = qtdivisores(numero);
    primo = ehPrimo(numero);

    printf("O numero %d tem %d divisores.\n", numero, divisores);
    if (primo) {
        printf("O numero %d eh primo.\n", numero);
    } else {
        printf("O numero %d nao eh primo.\n", numero);
    }

    return 0;
}

