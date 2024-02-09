//Grupo (Integrantes):
//Nome: Eduardo Honorio Friaca     Tia: 42205794
//Nome: Gabriel Mason Guerino      Tia: 42240328
//Nome: Pedro Akira Cardoso Toma   Tia: 42207002
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void troca(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int separa(int arr[], int p, int n) {
    srand(time(NULL));
    int pivotIndex = p + rand() % (n - p);
    int pivot = arr[pivotIndex];
    troca(&arr[pivotIndex], &arr[n]);
    int i = p - 1;
    int j;

    for ( j = p; j <= n - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            troca(&arr[i], &arr[j]);
        }
    }
    troca(&arr[i + 1], &arr[n]);
    return (i + 1);
}

void quickSort(int arr[], int p, int n) {
    if (p < n) {
        int q = separa(arr, p, n);
        quickSort(arr, p, q - 1);
        quickSort(arr, q + 1, n);
    }
}

int main() {
    int n;
    printf("Digite o numero de elementos: ");
    scanf("%d", &n);
    int arr[n];
    printf("Digite os elementos:\n");
    int i;
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    quickSort(arr, 0, n - 1);
    printf("Array ordenado:\n");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

