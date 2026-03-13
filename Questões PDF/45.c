#include <stdio.h>

int main() {
    char maiuscula;
    scanf("%c", &maiuscula);

    // Cada caractere é representado por um número inteiro no computador (Tabela ASCII).
    // Perceba que a diferença entre as maiúsculas e minúsculas tem SEMPRE o mesmo valor: 32.
    // A (65) -> a (97) ... 97 - 65 = 32
    // B (66) -> b (98) ... 98 - 66 = 32
    // Então, se somarmos 32 à letra maiúscula, nós avançamos no alfabeto ASCII e caímos na minúscula.
    
    char minuscula = maiuscula + 32;

    printf("%c\n", minuscula);

    return 0;
}