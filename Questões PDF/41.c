#include <stdio.h>

int main() {
    float valor_por_hora;
    int horas_trabalhadas;
    scanf("%f %d", &valor_por_hora, &horas_trabalhadas);

    // Multiplicar por 1.10 é o mesmo que adicionar os 10% sobre o valor
    float valor = (valor_por_hora * horas_trabalhadas) * 1.10;

    printf("%.2f\n", valor);
    return 0;
}