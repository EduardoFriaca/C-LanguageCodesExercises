#include <stdio.h>

void XXX(int mnts, int *h, int *min) {
    *h = mnts / 60; // Pega as horas
    *min = mnts % 60; // Pega os minutos
}

int main(void) {
    int h, m;
    XXX(325, &h, &m); // 325 � o argumento para a fun��o XXX
    printf("%d horas e %d min\n", h, m);
    return 0;
}

