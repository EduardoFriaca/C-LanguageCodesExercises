#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[100];

    printf("Digite a primeira string: ");
    scanf("%s", str1);

    printf("Digite a segunda string: ");
    scanf("%s", str2);

    printf("Digite a terceira string: ");
    scanf("%s", str3);

    if (strcmp(str1, str2) >= 0 && strcmp(str1, str3) >= 0) {
        printf("A primeira string é a maior lexicograficamente: %s\n", str1);
    } else if (strcmp(str2, str1) >= 0 && strcmp(str2, str3) >= 0) {
        printf("A segunda string é a maior lexicograficamente: %s\n", str2);
    } else {
        printf("A terceira string é a maior lexicograficamente: %s\n", str3);
    }

    return 0;
}

