//Nome: Eduardo Honorio Friaca     Tia: 42205794
//Nome: Gabriel Mason Guerino      Tia: 42240328
//Nome: Pedro Akira Cardoso Toma   Tia: 42207002

#include <stdio.h>

#define MAX_SIZE 100  //tamanho máximo do vetor

int main() {
    int vetor[MAX_SIZE];
    int tamanho = 0;
    int numero;

    printf("Digite os numeros (digite -1 para encerrar):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == -1) {
            break;  //termina com -1 é digitado
        }

        //vi se o número já está no vetor
        int repetido = 0;
        int i;
        for (i = 0; i < tamanho; i++) {
            if (vetor[i] == numero) {
                repetido = 1;
                break;
            }
        }

        //se nao estiver repetido, adiciona ao vetor
        if (!repetido) {
            vetor[tamanho] = numero;
            tamanho++;
        }
    }

    printf("Numeros lidos sem repeticao:\n");
    int i;
    for ( i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}

