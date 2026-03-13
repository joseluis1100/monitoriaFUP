#include <stdio.h>

int main() {
    int numero;
    scanf("%d", &numero);

    // Divisão inteira retira dígitos do final e não preserva decimais
    int milhar = numero / 1000;

    // EX centena: 7591 / 100 = 75 ... 75 % 10 = 5
    int centena = (numero / 100) % 10;

    // EX dezena: 8015 / 10 = 801 ... 801 % 10 = 1
    int dezena = (numero / 10) % 10;

    // EX unidade: 2058 % 10 = 8
    int unidade = numero % 10;

    // Note a quebra de linha (\n) após cada variável para atender a exigência da questão
    printf("%d\n%d\n%d\n%d\n", milhar, centena, dezena, unidade);

    return 0;
}