//Grupo (Integrantes):
//Nome: Eduardo Honorio Friaca     Tia: 42205794
//Nome: Gabriel Mason Guerino      Tia: 42240328
//Nome: Pedro Akira Cardoso Toma   Tia: 42207002
#include <stdio.h>

int soma_digitos(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10 + soma_digitos(n / 10));
}

int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("A soma dos digitos eh: %d\n", soma_digitos(num));
    return 0;
}
