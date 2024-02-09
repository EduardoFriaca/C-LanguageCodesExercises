//Nome: Eduardo Honorio Friaca     Tia: 42205794
//Nome: Gabriel Mason Guerino      Tia: 42240328
//Nome: Pedro Akira Cardoso Toma   Tia: 42207002


#include <stdio.h>

//funcao da raiz quadrada de newton
float raizQuadradaNewton(int N) {
    int Ni = N; 
    int Ni1;    

    //vai ate a diferenca ser 0.00001
    while (1) {
        Ni1 = 0.5 * (Ni + N / Ni); //formula do metodo de Newton

        //vi se diferenca eh menor que 1
        if ((Ni1 - Ni) * (Ni1 - Ni) < 1) {
            break; //sai do loop se a for verdadeiro
        }

        Ni = Ni1; // Atualiza Ni para a proxima iteracao
    }

    return Ni; //return o valor aproximado da raiz quadrada
}

int main() {
    int N;
    printf("Digite um numero: ");
    scanf("%d", &N);

    float resultado = raizQuadradaNewton(N);
    printf("A raiz quadrada de %d eh de aproximadamente %.2f\n", N, resultado);

    return 0;
}

