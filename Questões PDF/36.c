#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main() {
    float altura, raio;
    scanf("%f %f", &altura, &raio);
    float volume = PI * pow(raio, 2) * altura;
    printf("%f\n", volume);
    return 0;
}
