#include <stdio.h>

int main() {
    // Criar um vetor em C segue essa estrutura:
    // tipo nome_do_vetor[tamanho] = (Opcional) {definir valores}
    // os valores são ordenados de acordo com o índice, como esse vetor tem tamanho 6, os índices vão de 0 à 5 (sempre começando em 0).
    int vetor[6] = {1, 0, 5, -2, -5, 7};
    // Então os valores estão ligados à cada índice:
    // índice | valores
    //   0       1
    //   1       0
    //   2       5
    //   3      -2
    //   4      -5
    //   5       7
    
    // Para somar os valores, referencie-os pelos seus índices
    int soma = vetor[0] + vetor[1] + vetor[5];
    printf("soma: %d\n", soma);
    
    // Para alterar um valor específico, referencie o índice
    vetor[4] = 100;
    for (int i = 0; i < 6; i++) {
        // o for está percorrendo o vetor, onde i vai buscar os valores por meio do índice, 
        printf("%d\n", vetor[i]);
    }

    return 0;
}