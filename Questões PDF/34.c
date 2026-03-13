#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main() {
    float raio;
    scanf("%f", &raio);
    float area = PI * pow(raio, 2);
    printf("%f\n", area);
    return 0;
}
