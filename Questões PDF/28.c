#include <stdio.h>
#include <math.h>

int main() {
    int valor1, valor2, valor3;
    scanf("%d %d %d", &valor1, &valor2, &valor3);
    int somaQuadrados = pow(valor1, 2) + pow(valor2, 2) + pow(valor3, 2);
    printf("%d\n", somaQuadrados);
    return 0;
}
