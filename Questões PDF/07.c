#include <stdio.h>

int main() {
    float F;
    scanf("%f", &F);

    // Parênteses necessários! Sem eles, a multiplicação e divisão seriam feitas primeiro (hierarquia matemática).
    float C = 5.0 * (F - 32.0) / 9.0;
    printf("%f\n", C);
    return 0;
}