# Questão 7

7. Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor. Imprima o vetor, o maior elemento e a posicao que ele se encontra.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>
#include <limits.h>

int main() {
    int vetor[10], maior = - INT_MAX, posicao;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }
    
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n%d %d\n", maior, posicao);

    return 0;
}
```

</details>

## Casos de Teste

```
>>>>>>>> INSERT

======== EXPECT

<<<<<<<< FINISH
```

[Código](./C/draft.c)
