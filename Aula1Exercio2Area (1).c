#include <stdio.h>

int main() {
    float raio, area;
    const float pi = 3.1415;
    printf("Digite o raio do c�rculo: ");
    scanf("%f", &raio);

    area = pi * raio * raio;

    printf("A �rea do c�rculo �: %.2f\n", area);

    return 0;
}

