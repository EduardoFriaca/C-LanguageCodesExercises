#include <stdio.h>

int main() {
    float raio, area;
    const float pi = 3.1415;
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    area = pi * raio * raio;

    printf("A área do círculo é: %.2f\n", area);

    return 0;
}

