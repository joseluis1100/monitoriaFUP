#include <stdio.h>

int main() {
    float valor;
    scanf("%f", &valor);

    // Multiplicar por 0.90 resulta no desconto de 10%
    float valor_desconto10 = valor * 0.90;
    
    // Divisão sempre garantindo que será com decimais
    float valor_parcela = valor / 3.0;

    float comissao_a_vista = valor_desconto10 * 0.05;
    float comissao_parcelada = valor * 0.05;

    // Coloquei um print formatado e dividido em linhas para ficar visualmente elegante pro usuário
    printf("Desconto: %.2f\nParcela: %.2f\nCom. (A Vista): %.2f\nCom. (Prazo): %.2f\n", 
           valor_desconto10, valor_parcela, comissao_a_vista, comissao_parcelada);
    
    return 0;
}