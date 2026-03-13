#include <stdio.h>
#include <math.h>

int main() {
    float x, y;
    scanf("%f %f", &x, &y);

    // A distância da origem se resolve usando o famoso Teorema de Pitágoras! 
    // Onde 'x' e 'y' são os catetos e a distância é a hipotenusa
    float distancia = sqrt(pow(x, 2) + pow(y, 2));

    printf("%.2f\n", distancia);

    return 0;
}