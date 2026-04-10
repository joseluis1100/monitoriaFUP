#include <stdio.h>
#include <limits.h>

int main() {
    int vetor[5], soma = 0;
    int maior = -INT_MAX, menor = INT_MAX;
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
        
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
        
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        
        soma += vetor[i];
    }
    
    float media = (float) soma / 5;
    printf("%d %d %.2f\n", maior, menor, media);

    return 0;
}