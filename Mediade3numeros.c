#include <stdio.h>
int main()
{
	/*Aqui declarei as variaveis e que eh float*/
	float x, y, z, media;
	printf("Digite os tres numeros:\n");
	scanf("%f%f%f", &x, &y, &z);
	media = (x+y+z)/3;
	printf("A media dos tres numeros eh:%f\n", media);
	
	return 0;
}
