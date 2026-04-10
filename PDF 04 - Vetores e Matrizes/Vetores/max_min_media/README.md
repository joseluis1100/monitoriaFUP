# Questão 12

12. Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos juntamente com o maior, o menor e a media dos valores.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>
#include <limits.h>

int main() {
    int vetor[5], soma = 0;
    int maior = -INT_MAX, menor = INT_MAX;
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
        
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
        
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        
        soma += vetor[i];
    }
    
    float media = (float) soma / 5;
    printf("%d %d %.2f\n", maior, menor, media);

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
