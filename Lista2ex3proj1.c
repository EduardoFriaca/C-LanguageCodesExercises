#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool ehPalindromo(char s[]) {
    int i = 0, f = strlen(s) - 1;
    while (i < f) {
        if (s[i] != s[f]) return false;
        i++, f--;
    }
    return true;
}

int main() {
    char vetor[100];

    printf("Digite um vetor de caracteres: ");
    scanf("%s", vetor);

    if (ehPalindromo(vetor)) {
        printf("Eh um palindromo!\n");
    } else {
        printf("Nao eh um palindromo.\n");
    }

    return 0;
}

