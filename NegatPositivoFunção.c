#include <stdio.h>
#include <stdbool.h>

bool sinalnumero(int numero){
	if (numero <= 0){
		return true;
	}else{
		return false;
	}
}

int main(){
	int numero;
	printf("Digite um numero:");
	scanf("%d", &numero);
	int sinal;
	sinal = sinalnumero(numero);
	if (sinal == true){
		printf("negativo");
	}else{
		printf("positivo");
	}

	return 0;
}
