#include <stdio.h>

int main()
{
    int numero, contador;

    printf("Digite um número: ");
    scanf("%d", &numero);

    contador = 0;
    while (contador <= numero) {
        printf("%d\n", contador);
        contador++;
    }

    return 0;
}

