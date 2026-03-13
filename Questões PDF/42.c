#include <stdio.h>

int main() {
    float salarioBase;
    scanf("%f", &salarioBase);
    //100% + 5% - 7% = 98% = 0.98
    float salario = salarioBase * 0.98;
    printf("%.2f\n", salario);
    return 0;
}
