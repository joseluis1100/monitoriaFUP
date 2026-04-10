#include <stdio.h>
#include <limits.h>

int main() {
    int vetor[10], maior = - INT_MAX, posicao;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }
    
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n%d %d\n", maior, posicao);

    return 0;
}