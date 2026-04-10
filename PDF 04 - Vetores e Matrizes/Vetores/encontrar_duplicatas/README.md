# Questão 14

14. Faça um programa que leia um vetor de 10 posicoes e verifique se existem valores iguais e os escreva na tela.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>

int main() {
    int vetor[10];
    int freq[101] = {0};

    // leitura
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        freq[vetor[i]]++; 
    }

    for (int i = 0; i <= 100; i++) {
        if (freq[i] > 1) {
            printf("Valor repetido: %d\n", i);
        }
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
