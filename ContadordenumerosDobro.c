#include <stdio.h>

int main()
{
    int numero, contador;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    contador = 1;
    while (contador <= numero) {
        printf("%d\n", contador);
        contador = 2*contador;
    }

    return 0;
}

