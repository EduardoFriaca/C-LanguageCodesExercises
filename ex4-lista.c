//Nome: Eduardo Honorio Friaca     Tia: 42205794
//Nome: Gabriel Mason Guerino      Tia: 42240328
//Nome: Pedro Akira Cardoso Toma   Tia: 42207002

#include <stdio.h>

//funcao para imprimir o Triângulo de Floyd
void floydTriangulo(int n) {
    int numero = 1;
    int linha, coluna;

    for (linha = 1; linha <= n; linha++) {
        for (coluna = 1; coluna <= linha; coluna++) {
            printf("%d ", numero);
            numero++;
        }
        printf("\n");
    }
}


int main() {
    int n;

    printf("Informe o numero de linhas para o Triangulo de Floyd: ");
    scanf("%d", &n);

    floydTriangulo(n);

    return 0;
}

