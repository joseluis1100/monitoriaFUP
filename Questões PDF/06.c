#include <stdio.h>

int main() {
    //declarado em float para aceitar casas decimais
    float c;
    scanf("%f", &c);
    //colocado "(9.0/5.0)" para indicar valor float, retornando 1.8 ao invés de 1
    float f = c * (9.0/5.0) + 32;
    printf("%f\n", f);
    return 0;
}
