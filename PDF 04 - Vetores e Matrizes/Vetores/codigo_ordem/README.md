# Questão 16

16. Faça um programa que leia um vetor de 5 posicoes para numeros reais e, depois, um codigo inteiro. Se o codigo for zero, finalize o programa; se for 1, mostre o vetor na ordem direta; se for 2, mostre o vetor na ordem inversa. Caso, o codigo for diferente de 1 e 2 escreva uma mensagem informando que o codigo e invalido.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>

int main() {
    float vetor[5];
    int num;

    // leitura
    for (int i = 0; i < 5; i++) {
        scanf("%f", &vetor[i]);
    }
    
    scanf("%d", &num);
    
    if (num == 0) {
        return 0;
    } else if (num == 1) {
        for (int i = 0; i < 5; i++) {
            printf("%.1f ", vetor[i]);
        }
    } else if (num == 2) {
        for (int i = 4; i >= 0; i--) {
            printf("%.1f ", vetor[i]);
        }
    } else {
        printf("codigo invalido");
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
