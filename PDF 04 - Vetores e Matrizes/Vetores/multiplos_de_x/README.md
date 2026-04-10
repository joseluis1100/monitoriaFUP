# Questão 18

18. Faça um programa que leia um vetor de 10 numeros. Leia um numero x. Conte os multiplos de um numero inteiro x num vetor e mostre-os na tela.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>

int main() {
    int vetor[10], multiplos[10], x, contador = 0;
    
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    
    scanf("%d", &x);
    
    for (int i = 0; i < 10; i++) {
        // vetor[i] % x == 0, verifica se o número é múltiplo, quando x for diferente de 0
        if (x != 0 && vetor[i] % x == 0) {
            // aqui atribuo o valor de vetor[i] para o vetor de multiplos na posição "contador"
            multiplos[contador] = vetor[i];
            printf("%d ", multiplos[contador]);
            contador++;
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
