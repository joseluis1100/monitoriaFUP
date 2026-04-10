#include <stdio.h>

int main() {
    float vetor[10], soma = 0.0;
    int negativos = 0;
    
    for (int i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
        
        if (vetor[i] < 0) {
            negativos++;
            continue;
        }
        
        soma += vetor[i];
    }
    
    printf("%d %.2f\n", negativos, soma);

    return 0;
}