//Grupo (Integrantes):
//Nome: Eduardo Honorio Friaca     Tia: 42205794
//Nome: Gabriel Mason Guerino      Tia: 42240328
//Nome: Pedro Akira Cardoso Toma   Tia: 42207002
#include <stdio.h>
void bubble_sort_recursivo(int v[], int n) { //funcao bubble sort recursivo
    if (n == 1)
        return;
    int i;
   
    for ( i=0; i<n-1; i++) {
        if (v[i] > v[i+1]) {
            int temp = v[i];
            v[i] = v[i+1];
            v[i+1] = temp;
        }
    }
   
    bubble_sort_recursivo(v, n-1);
}

int main() {
    int num[100], n, i;
    printf("Digite o numero de elementos no array: ");
    scanf("%d", &n);
    printf("Digite os elementos do array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    bubble_sort_recursivo(num, n); //aqui chamei o bubble recursivo
    printf("Array ordenado: ");
    for(i = 0; i < n; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");
    return 0;
}
