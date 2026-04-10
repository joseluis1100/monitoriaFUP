#include <stdio.h>
#include <limits.h>

int main() {
    int vetor[5], posicaoMaior = 0, posicaoMenor = 0;
    int maior = -INT_MAX, menor = INT_MAX;
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
        
        if (vetor[i] < menor) {
            menor = vetor[i];
            posicaoMaior = i;
        }
        
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicaoMenor = i;
        }
    }
    
    printf("%d %d\n", posicaoMaior, posicaoMenor);

    return 0;
}