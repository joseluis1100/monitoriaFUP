# Questão 9

9. Crie um programa que le 6 valores inteiros pares e, em seguida, mostre na tela os valores lidos na ordem inversa.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>
#include <limits.h>

int main() {
    int vetor[6];
    
    for (int i = 0; i < 6; i++) {
        scanf("%d", &vetor[i]);
        
        if (vetor[i] % 2 != 0) {
            printf("Erro: valor invalido");
            return 1;
        }
    }
    
    for (int i = 5; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

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
