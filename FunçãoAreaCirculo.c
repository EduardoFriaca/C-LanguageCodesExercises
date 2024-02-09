#include <stdio.h>

#define PI 3.1415 //defini o PI

float areacirculo(float raio) {
  float area = PI * (raio * raio);
  return area;
}

int main() {
  float area, raio;
  printf("Escreva o raio: ");
  scanf("%f", &raio);
  area = areacirculo(raio);
  printf("A area eh de: %.2f\n", area);
  return 0;
}
