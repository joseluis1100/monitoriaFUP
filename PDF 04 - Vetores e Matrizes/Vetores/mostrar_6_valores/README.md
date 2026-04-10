# Questão 2

2. Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>

int main() {
    int vetor[6];
    int valor;
    for (int i = 0; i < 6; i++) {
        scanf("%d", &valor);
        vetor[i] = valor;
    }
    /*
    Outra forma de fazer:
    for (int i = 0; i < 6, i++) {
        scanf("%d", &vetor[i]);
    }
    Estou lendo o valor do índice de valor i diretamente
    */
    
    for (int i = 0; i < 6; i++) {
        printf("%d\n", vetor[i]);
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
