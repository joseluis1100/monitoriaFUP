#include <stdio.h>

int main() {
    int vetor[10], pares = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        
        if (vetor[i] % 2 == 0) {
            pares++;
        }
    }
    printf("%d\n", pares);

    return 0;
}