#include <stdio.h>

int main()
{
    float raio, area;
    const float pi=3.1415;
    printf("Digite o raio do circulo:\n");
    scanf("%f", &raio);
    
    area = pi*(raio*raio);
    printf("O raio �: %.2f\n", area);
    
    return 0;
}
    
