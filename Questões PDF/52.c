#include <stdio.h>

int main() {
    float amigo1, amigo2, amigo3, premio;
    scanf("%f %f %f %f", &amigo1, &amigo2, &amigo3, &premio);
    float pesoTotal = amigo1 + amigo2 + amigo3;
    float ganha1 = premio * amigo1 / pesoTotal;
    float ganha2 = premio * amigo2 / pesoTotal;
    float ganha3 = premio * amigo3 / pesoTotal;
    printf("%.2f %.2f %.2f\n", ganha1, ganha2, ganha3);
    return 0;
}
