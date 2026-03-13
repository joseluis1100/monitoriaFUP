#include <stdio.h>

int main() {
    //variáveis de mesmo tipo podem ser declaradas na mesma linha
    int valor1, valor2, valor3;
    //scanf de multiplas variáveis pode ser feito assim
    scanf("%d %d %d", &valor1, &valor2, &valor3);
    //é possível iniciar uma variável com um valor
    int soma = valor1 + valor2 + valor3;
    printf("%d\n", soma);
    return 0;
}
