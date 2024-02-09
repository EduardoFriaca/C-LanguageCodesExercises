#include <stdio.h>
#include <string.h> // Para a função memcpy

// Bubble Sort com contador de trocas
void bubbleSort(int array[], int length) {
    int swaps = 0;  // Inicialize o contador de trocas com 0
    int i, j;
    for (i = 0; i < length - 1; i++) {
        for (j = 0; j < length - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Realize a troca
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swaps++;
            }
        }
    }
    printf("Bubble Sort: %d trocas\n", swaps);
}

// Insertion Sort com contador de trocas
void insertionSort(int array[], int length) {
    int swaps = 0;
    int i;
    for (i = 1; i < length; i++) {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && key < array[j]) {
            array[j + 1] = array[j];
            j--;
            swaps++;
        }
        array[j + 1] = key;
    }
    printf("Insertion Sort: %d trocas\n", swaps);
}

// Selection Sort com contador de trocas
void selectionSort(int array[], int length) {
    int swaps = 0;
    int i, j;
    for (i = 0; i < length - 1; i++) {
        int minIndex = i;
        for (j = i + 1; j < length; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        // Realize a troca
        int temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
        swaps++;
    }
    printf("Selection Sort: %d trocas\n", swaps);
}

int main() {
    int array[] = {54, 57, 61, 9, 13, 22, 30, 65, 69, 70, 78, 84, 87, 90, 92, 97, 34, 45, 47, 50};
    int length = sizeof(array) / sizeof(array[0]);

    int copiedArray[length]; // Cria uma cópia do vetor original
    memcpy(copiedArray, array, sizeof(array)); // Copia os elementos para a cópia

    bubbleSort(array, length);
    insertionSort(copiedArray, length);
    selectionSort(array, length);

    return 0;
}

