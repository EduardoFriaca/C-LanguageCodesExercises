#include <stdio.h>
#include <stdlib.h>

int DiferencaMinutos(int hora1, int minuto1, int hora2, int minuto2) {
    int total_minutos1 = hora1 * 60 + minuto1;
    int total_minutos2 = hora2 * 60 + minuto2;
    return abs(total_minutos2 - total_minutos1);
}

int main() {
    int h1, mi1, h2, mi2;

    printf("Digite a primeira hora e minuto (no formato HH:MM): ");
    scanf("%d:%d", &h1, &mi1);

    printf("Digite a segunda hora e minuto (no formato HH:MM): ");
    scanf("%d:%d", &h2, &mi2);

    int diferenca_minutos = DiferencaMinutos(h1, mi1, h2, mi2);

    printf("A diferença entre %d:%d e %d:%d eh %d minutos.\n",
           h2, mi2, h1, mi1, diferenca_minutos);

    return 0;
}

