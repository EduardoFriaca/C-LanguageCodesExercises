#include <stdio.h>

int main() {
    int numero, contador = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Numeros pares ate %d:\n", numero);
    
    while (contador <= numero) {
        if (contador % 2 == 0) {
            printf("%d\n", contador);
        }
        contador++;
    }

    return 0;
}

