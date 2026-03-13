#include <stdio.h>

int main() {
    int numero;
    scanf("%d", &numero);

    int antecessor = numero - 1;
    int sucessor = numero + 1;
    printf("%d %d\n", antecessor, sucessor);
    return 0;
}