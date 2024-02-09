#include <stdio.h>

float FahrenheittoCelsius (float graus){
	float celsius = (graus - 32)/ 1.8;
	return celsius;
	
}

int main(){
	float fah, celsius;
	printf("Digite o valor em graus em fahrenheit:");
	scanf("%f", &fah);
	celsius =  FahrenheittoCelsius (fah);
	printf("O valor em celsius eh de: %f\n", celsius);
	return 0;
}
