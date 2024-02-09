#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int sorteado, palpite;

    // Inicializar o gerador de números aleatórios
    srand(time(NULL));

    // Sortear um número entre 1 e 100
    sorteado = 1 + rand() % 100;

    printf("Bem vindo ao jogo de adivinhacao\n");

    printf("Digite seu palpite (entre 1 e 100): ");
    scanf("%d", &palpite);

    while (palpite != sorteado) {
        if (palpite < 1 || palpite > 100) {
            printf("Valor invalido! Digite um numero entre 1 e 100.\n");
        } else if (palpite < sorteado) {
            printf("Voce chutou muito baixo! Tente novamente: ");
        } else {
            printf("Voce chutou muito alto! Tente novamente: ");
        }
        
        scanf("%d", &palpite);
    }

    printf("Voce acertou!\n");

    return 0;
}

