#include <stdio.h>
#include <limits.h>

int main() {
    int vetor[15], soma = 0;
    
    for (int i = 0; i < 15; i++) {
        scanf("%d", &vetor[i]);
        
        soma += vetor[i];
    }
    
    float media = (float) soma / 15;
    printf("%.2f\n", media);

    return 0;
}