#include <stdio.h>

int main(){
	int i;
	float notas[3]; //tamanho do vetor
	float soma= 0.0;
	
	for(i =0; i<3; i++){
		printf("Digite a nota &d: ", (i+1));
		scanf("%f", &notas[i]);
		
		soma +=notas[i];
	}
	float media =  soma/ 3.0;
	printf("A media das notas dos alunos eh de: %.2f\n", media);
	
	return 0;	
}
