#include <stdio.h>
#define TAMANHO (5)

void inverte(int v[], int n) {
  int aux, i;
  for (i = 0; i < n / 2; i++) {
    aux = v[i];
    v[i] = v[n - 1 - i];
    v[n - 1 - i] = aux;
  }
}

void imprime(int v[], int n) {
  int i;
  for ( i = 0; i < n; i++) {
    printf("%d ", v[i]);
  }
  printf("\n");
}

int main(void) {
  int vetor[TAMANHO], i;
  for (i = 0; i < TAMANHO; i++) {
    printf("V[%d]: ", i);
    scanf("%d", &vetor[i]);
  }
  printf("*** VETOR ORIGINAL ***\n");
  imprime(vetor, TAMANHO);
  printf("*** VETOR INVERTIDO ***\n");
  inverte(vetor, TAMANHO);
  imprime(vetor, TAMANHO);
  return 0;
}
