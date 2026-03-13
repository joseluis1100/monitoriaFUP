#include <stdio.h>

int main() {
    int dias;
    scanf("%d", &dias);
    float bruto = 30 * dias;
    //100% - 8% = 92% = 0.92
    float liquido = bruto * 0.92;
    printf("%.2f\n", liquido);
    return 0;
}
