#include <stdio.h>

int main() {
    int numero, contador;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Numeros ate %d:\n", numero);

    for (contador = 0; contador <= numero; contador++) {
        printf("%d\n", contador);
    }

    return 0;
}

