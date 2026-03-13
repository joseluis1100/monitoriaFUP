#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    int sucessorTriplo = x * 3 + 1;
    int antecessorDobro = x * 2 - 1;
    //também poderia ser: int soma = (x * 3 + 1) + (x * 2 - 1);
    int soma = sucessorTriplo + antecessorDobro;
    printf("%d\n", soma);
    return 0;
}
