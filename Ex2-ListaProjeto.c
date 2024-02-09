//Grupo (Integrantes):
//Nome: Eduardo Honorio Friaca     Tia: 42205794
//Nome: Gabriel Mason Guerino      Tia: 42240328
//Nome: Pedro Akira Cardoso Toma   Tia: 42207002
#include <stdio.h>

//Funcao Recursiva
int mdc_recursivo(int x, int y) {
    if (y <= x && x % y == 0)
        return y;
    else if (x < y)
        return mdc_recursivo(y, x);
    else
        return mdc_recursivo(y, x % y);
}

//Funcao Iterativa
int mdc_iterativo(int x, int y) {
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int main() {
    int x, y;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &x, &y);
    printf("MDC Recursivo: %d\n", mdc_recursivo(x, y));
    printf("MDC Iterativo: %d\n", mdc_iterativo(x, y));
    return 0;
}

