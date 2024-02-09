#include <stdio.h>

void yyy(int *hora, int *minutos, int soma_minutos) {
    // Calcula a quantidade total de minutos após a soma
    int total_minutos_atual = (*hora * 60) + *minutos + soma_minutos;

    // Calcula a nova hora e minutos após a soma
    *hora = total_minutos_atual / 60;
    *minutos = total_minutos_atual % 60;
}

int main() {
    int hora = 4; // Exemplo de hora
    int minutos = 40; // Exemplo de minutos
    int soma_minutos = 325; // Valor a ser somado aos minutos

    yyy(&hora, &minutos, soma_minutos); // Chama a função yyy para atualizar a hora e minutos

    printf("Hora atualizada: %d horas %d minutos\n", hora, minutos);

    return 0;
}

