#include <stdio.h>
//OPCIONAL: importar biblioteca math.h para usar a função de potencia
#include <math.h>

int main() {
    float x;
    scanf("%f", &x);
    //pow exige 2 parâmetros, base e expoente
    float quadrado = pow(x, 2);
    printf("%f\n", quadrado);
    return 0;
}
