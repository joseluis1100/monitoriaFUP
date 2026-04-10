# Questão 4

4. Faça um programa que leia um vetor de 8 posicoes e, em seguida, leia tambem dois valores X e Y quaisquer correspondentes a duas posicoes no vetor. Ao final seu programa devera escrever a soma dos valores encontrados nas respectivas posicoes X e Y .

<details>
  <summary>Resposta</summary>

```c
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
```

</details>

## Casos de Teste

```
>>>>>>>> INSERT

======== EXPECT

<<<<<<<< FINISH
```

[Código](./C/draft.c)
