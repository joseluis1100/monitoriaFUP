#include <stdio.h>

int main() {
    float reais, cotacao;
    scanf("%f %f", &reais, &cotacao);
    float dolar = reais / cotacao;
    printf("%.2f\n", dolar);
    return 0;
}
