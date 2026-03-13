#include <stdio.h>

int main() {
    // É recomendado usar uma variável 'premio' (float premio = 780000.00;) 
    // para não ter que repetir o mesmo número mágico 3 vezes!
    float primeiro = 780000.00 * 0.46;
    float segundo = 780000.00 * 0.32;
    float terceiro = 780000.00 - (primeiro + segundo);

    printf("1º Ganhador: R$ %.2f\n", primeiro);
    printf("2º Ganhador: R$ %.2f\n", segundo);
    printf("3º Ganhador: R$ %.2f\n", terceiro);
    return 0;
}