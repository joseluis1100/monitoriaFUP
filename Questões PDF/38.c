#include <stdio.h>

int main() {
    float salario;
    scanf("%f", &salario);
    //125% = valor * 1.25
    float novoSalario = salario * 1.25;
    printf("%.2f\n", novoSalario);
    return 0;
}