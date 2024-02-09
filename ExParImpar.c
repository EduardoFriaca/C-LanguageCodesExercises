#include <stdio.h>

int main() 
{
    float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    if ((int)numero % 2 == 0)
    {
        printf("O numero eh par.\n");
    }
    else
    {

        printf("O numero eh impar.\n");
    }

    return 0;
}

