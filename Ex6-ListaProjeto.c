//Grupo (Integrantes):
//Nome: Eduardo Honorio Friaca     Tia: 42205794
//Nome: Gabriel Mason Guerino      Tia: 42240328
//Nome: Pedro Akira Cardoso Toma   Tia: 42207002
#include <stdio.h>

int soma_pares(int v[], int n) {
    if (n <= 0)
        return 0;
    else
        return ((v[n-1] % 2 == 0 ? v[n-1] : 0) + soma_pares(v, n-1)); //retorna a soma dos numeros pares
}

int main() {
    int num[100], n, i;
    printf("Digite o numero de elementos no array: ");
    scanf("%d", &n);
    printf("Digite os elementos do array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    printf("A soma dos numeros pares eh: %d\n", soma_pares(num, n));
    return 0;
}
