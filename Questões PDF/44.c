#include <stdio.h>
//iremos usar o math.h para usar uma função de arredondamento
#include <math.h>

int main() {
    float alturaDegrau, objetivo;
    scanf("%f %f", &alturaDegrau, &objetivo);
    //caso o numero dê quebrado, o ceil arredondará para cima, sempre 
    //retornando a quantidade mínima para chegar no objetivo.
    int qtdDegraus = ceil(objetivo / alturaDegrau);
    printf("%d\n", qtdDegraus);
    return 0;
}
