#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    //usa resto da divisão por 10 para extrair o ultimo dígito
    int d3 = x % 10;
    //a divisão inteira por 10 remove o ultimo dígito, repete o mesmo processo
    int d2 = (x / 10) % 10;
    //a divisão inteira por 100 remove os dois ultimos dígitos, repete o mesmo processo
    int d1 = (x / 100) % 10;
    int numeroInvertido = (d3 * 100) + (d2 * 10) + d1;
    printf("%d\n", numeroInvertido);
    return 0;
}