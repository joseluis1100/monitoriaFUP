#include <stdio.h>

int main() {
    int vetor[10], multiplos[10], x, contador = 0;
    
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    
    scanf("%d", &x);
    
    for (int i = 0; i < 10; i++) {
        // vetor[i] % x == 0, verifica se o número é múltiplo, quando x for diferente de 0
        if (x != 0 && vetor[i] % x == 0) {
            // aqui atribuo o valor de vetor[i] para o vetor de multiplos na posição "contador"
            multiplos[contador] = vetor[i];
            printf("%d ", multiplos[contador]);
            contador++;
        }
    }

    return 0;
}