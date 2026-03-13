#include <stdio.h>
#include <math.h>

int main() {
    float a, b;
    scanf("%f %f", &a, &b);

    // sqrt() é usada para calcular raiz quadrada, está presente na biblioteca <math.h>
    // float hipotenusa = sqrt( pow(a, 2) + pow(b, 2) );
    
    // Simplificando sem usar o pow: (lembrando que a multiplicação tem prioridade sobre a soma)
    float hipotenusa = sqrt(a * a + b * b);

    printf("%.2f\n", hipotenusa);
    return 0;
}