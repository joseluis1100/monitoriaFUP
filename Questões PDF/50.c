#include <stdio.h>

int main() {
    int idade, anoAtual;
    scanf("%d %d", &idade, &anoAtual);
    //essa questão leva em conta que a pessoa já fez aniversário no ano atual
    int anoNascimento = anoAtual - idade;
    printf("%d\n", anoNascimento);
    return 0;
}
