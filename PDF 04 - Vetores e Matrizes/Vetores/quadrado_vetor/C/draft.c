#include <stdio.h>

int main() {
    float valores[10], quadrados[10];
    for (int i = 0; i < 10; i++) {
        scanf("%f", &valores[i]);
        quadrados[i] = valores[i] * valores[i];
    }
    
    // impressão dos valores
    printf("Valores: ");
    for (int i = 0; i < 10; i++) {
        // último valor
        if (i == 9) {
        printf("%.2f\n", valores[i]);
        } else {
            printf("%.2f ", valores[i]);
        }
    }
    
    // impressão dos quadrados
    printf("Quadrados: ");
    for (int i = 0; i < 10; i++) {
        if (i == 9) {
            printf("%.2f\n", quadrados[i]);
        } else {
            printf("%.2f ", quadrados[i]);
        }
    }

    return 0;
}