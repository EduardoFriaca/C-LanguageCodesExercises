#include <stdio.h>
int main(){
	int numero, contador;
	printf("Digite um numero inteiro:");
	scanf("%d", &numero);
	contador = 0;
	while (contador<=numero){
		if (contador%2!=0){
			printf("%d\n",contador);
		}
		contador ++;
	}
	return 0;
	
}
