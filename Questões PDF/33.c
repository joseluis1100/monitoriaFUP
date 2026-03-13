#include <stdio.h>
// #include <math.h> // Se for utilizar a função pow(lado, 2)

int main() {
    float lado;
    scanf("%f", &lado);

    // Multiplicar lado * lado é muito mais simples (e leve para o processador)
    // do que usar a função pow()!
    float area = lado * lado;
    printf("%.2f\n", area);
    return 0;
}