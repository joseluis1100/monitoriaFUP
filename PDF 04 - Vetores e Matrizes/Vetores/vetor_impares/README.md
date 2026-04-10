# Questão 20

20. Escreva um programa que leia numeros inteiros no intervalo [0,50] e os armazene em um vetor com 10 posicoes. Preencha um segundo vetor apenas com os numeros impares do primeiro vetor. Imprima os dois vetores, 2 elementos por linha.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>

int main() {
    int vetor[10], impares[10];
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        
        if (vetor[i] % 2 == 1) {
            impares[i] = vetor[i];
        }
        
        printf("%d %d\n", vetor[i], impares[i]);
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
