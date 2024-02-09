#include <stdio.h>
void imprime_vetor_inverso(int *vetor, int n) {
  int i;	
  for (i = n - 1; i >= 0; i--) {
    printf("%d ", vetor[i]);
  }

  printf("\n");
}

int main() {
  int n, i;
  printf("Digite o tamanho do vetor:");
  scanf("%d", &n);
  printf("Digite os elementos do vetor:");

  int vetor[n];
  for ( i = 0; i < n; i++) {
    scanf("%d", &vetor[i]);
  }
  printf("Invertido:");
  imprime_vetor_inverso(vetor, n);

  return 0;
}

