# Questão 19

19. Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i+ 5 ∗ i)%(i+ 1), sendo i a posicao do elemento no vetor. Em seguida imprima o vetor na tela.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>

int main() {
    int vetor[50];
    
    for (int i = 0; i < 50; i++) {
        int valor = (i + 5 * i) % (i + 1);
        vetor[i] = valor;
        
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
