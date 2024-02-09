//Nome: Eduardo Honorio Friaca     Tia: 42205794
//Nome: Gabriel Mason Guerino      Tia: 42240328
//Nome: Pedro Akira Cardoso Toma   Tia: 42207002

#include <stdio.h>
#include <stdbool.h>

//funçao para ver se um numero eh primo
bool ehPrimo(int numero) {
    if (numero <= 1) {
        return false; // 0 e 1 nao eh primo
    }
    int i;

    for ( i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false; //se encontrar um divisor, nao eh primo
        }
    }

    return true; //eh primo
}

int main() {
    int N1, N2;

    printf("Digite o valor de N1: ");
    scanf("%d", &N1);

    printf("Digite o valor de N2: ");
    scanf("%d", &N2);

    printf("Numeros primos entre %d e %d:\n", N1, N2);
    int numero;
    

    for (numero = N1; numero <= N2; numero++) {
        if (ehPrimo(numero)) {
            printf("%d ", numero);
        }
    }

    printf("\n");

    return 0;
}

