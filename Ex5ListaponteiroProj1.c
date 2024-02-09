#include <stdio.h>
#include <math.h>
#define PI 3.14

void sencos(float angulo, float *seno, float *cosseno) {
    *seno = sin(angulo * PI / 180.0);
    *cosseno = cos(angulo * PI / 180.0);
}

int main() {
    float seno, cosseno;
    sencos(30, &seno, &cosseno);
    printf("Seno: %f, Cosseno: %f\n", seno, cosseno);
    return 0;
}

