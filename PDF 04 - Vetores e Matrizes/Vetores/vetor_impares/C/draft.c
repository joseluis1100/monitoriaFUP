#include <stdio.h>

int main() {
    int vetor[10], impares[10];
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        
        if (vetor[i] % 2 == 1) {
            impares[i] = vetor[i];
        }
        
        printf("%d %d\n", vetor[i], impares[i]);
    }
    
    return 0;
}