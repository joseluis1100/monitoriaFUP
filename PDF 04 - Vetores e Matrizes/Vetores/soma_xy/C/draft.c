#include <stdio.h>

int main() {
    int vetor[8], x, y;
    for (int i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);
    }
    
    scanf("%d %d", &x, &y);
    
    if ((x >= 0 && x < 8) && (y >= 0 && y < 8)) {
        int soma = vetor[x] + vetor[y];
        printf("%d\n", soma);
    } else {
        printf("Posicao invalida\n");
        return 1;
    }

    return 0;
}