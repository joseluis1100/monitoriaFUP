#include <stdio.h>

int main() {
    float vetor[5];
    int num;

    // leitura
    for (int i = 0; i < 5; i++) {
        scanf("%f", &vetor[i]);
    }
    
    scanf("%d", &num);
    
    if (num == 0) {
        return 0;
    } else if (num == 1) {
        for (int i = 0; i < 5; i++) {
            printf("%.1f ", vetor[i]);
        }
    } else if (num == 2) {
        for (int i = 4; i >= 0; i--) {
            printf("%.1f ", vetor[i]);
        }
    } else {
        printf("codigo invalido");
        return 1;
    }

    return 0;
}