#include <stdio.h>

void analisarVetor(int vetor[], int tamanho, int valorReferencia) {
  int contadorMaiores = 0;
  int contadorMenores = 0;
  int contadorIguais = 0;
  int i;

  // Imprime os n�meros maiores que o valor de refer�ncia
  printf("Numero maior que %d: ", valorReferencia);
  for ( i = 0; i < tamanho; i++) {
    if (vetor[i] > valorReferencia) {
      printf("%d ", vetor[i]);
      contadorMaiores++;
    } else if (vetor[i] < valorReferencia) {
      contadorMenores++;
    } else {
      contadorIguais++;
    }
  }
  printf("\n");

  // Imprime a quantidade de n�meros menores que o valor de refer�ncia
  printf("Quantidade de n�meros menores que %d: %d\n", valorReferencia, contadorMenores);

  // Imprime a quantidade de vezes que o valor de refer�ncia aparece no vetor
  printf("Quantidade de vezes que %d aparece no vetor: %d\n", valorReferencia, contadorIguais);
}

int main() {
  int tamanho;
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &tamanho);

  int vetor[tamanho], i;

  // L� os elementos do vetor
  printf("Digite os elementos do vetor:\n");
  for ( i = 0; i < tamanho; i++) {
    scanf("%d", &vetor[i]);
  }

  int valorReferencia;
  printf("Digite o valor de refer�ncia: ");
  scanf("%d", &valorReferencia);

  // Chama a fun��o `analisarVetor()` para analisar o vetor
  analisarVetor(vetor, tamanho, valorReferencia);

  // Retorna 0 para indicar que o programa terminou com sucesso
  return 0;
}

