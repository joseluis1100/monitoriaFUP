#include <stdio.h>

int main() {
    int vetor[50];
    
    for (int i = 0; i < 50; i++) {
        int valor = (i + 5 * i) % (i + 1);
        vetor[i] = valor;
        
        printf("%d ", vetor[i]);
    }
    
    return 0;
}