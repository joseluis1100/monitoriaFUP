#include <stdio.h>
#define PI 3.14159

int main() {
    float R;
    scanf("%f", &R);

    // Usa a constante PI definida acima
    float G = R * 180.0 / PI;
    printf("%f\n", G);
    return 0;
}