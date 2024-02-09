#include <stdio.h>

void tabuada(int N) {  // fun��o para apresentar a tabuada de um n�mero N
	int i;
    for (i = 1; i <= 9; i++) { // vai de 1 at� o 9 a multiplica��o e vai de um em um: i++
        printf("%d x %d = %2d\n", N, i, N * i); // o %2d o dois nesse caso � o numero de caracter
    }
    printf("\n");
}

int main() {
    int numero;

    printf("Digite um numero para ver a tabuada: ");
    scanf("%d", &numero);

    tabuada(numero); // chama a tabuada com o numero digitado pelo o usuario

    return 0;
}

