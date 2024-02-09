#include <stdio.h>

int main()
{
	float celsius, fahrenheit;
	printf("Escreva o graus celsius");
	scanf("%f", &celsius);
	
	fahrenheit = (celsius * 1.8) + 32;
	printf("O resultado em fahrenheit: %f\n", fahrenheit);
	
	
	return 0;
}
