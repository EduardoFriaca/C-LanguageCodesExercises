#include <stdio.h>

void swap(int *xp, int *yp) { //aqui eh a funcao de troca de variavel
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSortRecursivo(int arr[], int n) { //funcao selectioinsortrecursivo
    if (n <= 1)
        return;
   
    int i, max_idx = 0;
    for (i = 1; i < n; i++)
        if (arr[i] > arr[max_idx])
            max_idx = i;
   
    swap(&arr[n-1], &arr[max_idx]);
   
    selectionSortRecursivo(arr, n-1);
}

int main() {
    int num[100], n, i;
    printf("Digite o numero de elementos no array: ");
    scanf("%d", &n);
    printf("Digite os elementos do array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    selectionSortRecursivo(num, n);
    printf("Array ordenado: ");
    for(i = 0; i < n; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");
    return 0;
}
