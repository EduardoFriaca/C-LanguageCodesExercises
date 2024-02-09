#include <stdio.h>
#include <string.h>

void ordenarStrings(char str1[], char str2[], char str3[]) {
    if (strcmp(str1, str2) > 0) {
        char temp[100];
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
    } else if (strcmp(str2, str3) > 0) {
        char temp[100];
        strcpy(temp, str2);
        strcpy(str2, str3);
        strcpy(str3, temp);
    } else if (strcmp(str1, str2) > 0) {
        char temp[100];
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
    }
}

int main() {
    char str1[100], str2[100], str3[100];

    printf("Digite a primeira string: ");
    scanf("%s", str1);

    printf("Digite a segunda string: ");
    scanf("%s", str2);

    printf("Digite a terceira string: ");
    scanf("%s", str3);

    ordenarStrings(str1, str2, str3);

    printf("Strings em ordem lexicográfica crescente:\n");
    printf("%s\n%s\n%s\n", str1, str2, str3);

    return 0;
}

