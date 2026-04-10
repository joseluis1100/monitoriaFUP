# Questão 5

5. Leia um vetor de 10 posicoes. Contar e escrever quantos valores pares ele possui.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>

int main() {
    int vetor[10], pares = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        
        if (vetor[i] % 2 == 0) {
            pares++;
        }
    }
    printf("%d\n", pares);

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
