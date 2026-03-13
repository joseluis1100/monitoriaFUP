#include <stdio.h>
//OPCIONAL: usamos o define para criar um "simbolo" para um valor 
//específico. Ele não funciona como uma variável, não pode ser mudado e 
//não gasta espaço na memória.
#define PI 3.14159

int main() {
    float g;
    scanf("%f", &g);
    float r = g * PI / 180;
    printf("%f\n", r);
    return 0;
}