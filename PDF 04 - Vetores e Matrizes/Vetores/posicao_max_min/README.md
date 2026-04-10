# Questão 13

13. Fazer um programa para ler 5 valores e, em seguida, mostrar a posicao onde se encontram o maior e o menor valor.

<details>
  <summary>Resposta</summary>

```c
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
```

</details>

## Casos de Teste

```
>>>>>>>> INSERT

======== EXPECT

<<<<<<<< FINISH
```

[Código](./C/draft.c)
