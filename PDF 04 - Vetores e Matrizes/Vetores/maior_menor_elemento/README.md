# Questão 6

6. Faça um programa que receba do usuario um vetor com 10 posicoes. Em seguida devera ser impresso o maior e o menor elemento do vetor.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>
#include <limits.h>

int main() {
    int vetor[10], maior = - INT_MAX, menor = INT_MAX;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
        
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    printf("%d %d\n", menor, maior);

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
