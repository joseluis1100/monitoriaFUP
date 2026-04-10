#include <stdio.h>
#include <limits.h>

int main() {
    int vetor[10], maior = - INT_MAX, menor = INT_MAX;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
        
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    printf("%d %d\n", menor, maior);

    return 0;
}