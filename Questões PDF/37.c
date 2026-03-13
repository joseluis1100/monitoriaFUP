#include <stdio.h>

int main() {
    float valor_produto;
    scanf("%f", &valor_produto);

    // 100% - 12% = 88% (0.88). 
    // É uma forma mais rápida e limpa de calcular!
    float valor_com_desconto = valor_produto * 0.88;

    printf("%.2f\n", valor_com_desconto);
    return 0;
}