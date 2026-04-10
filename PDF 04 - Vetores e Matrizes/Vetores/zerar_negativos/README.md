# Questão 17

17. Leia um vetor de 10 posicoes e atribua valor 0 para todos os elementos que possuırem valores negativos.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>

int main() {
    int vetor[10];
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
        
        printf("%d ", vetor[i]);
    }

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
