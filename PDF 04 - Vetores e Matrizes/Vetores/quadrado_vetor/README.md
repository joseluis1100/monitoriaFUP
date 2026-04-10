# Questão 3

3. Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado das componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos tem 10 elementos cada. Imprimir todos os conjuntos.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>

int main() {
    float valores[10], quadrados[10];
    for (int i = 0; i < 10; i++) {
        scanf("%f", &valores[i]);
        quadrados[i] = valores[i] * valores[i];
    }
    
    // impressão dos valores
    printf("Valores: ");
    for (int i = 0; i < 10; i++) {
        // último valor
        if (i == 9) {
        printf("%.2f\n", valores[i]);
        } else {
            printf("%.2f ", valores[i]);
        }
    }
    
    // impressão dos quadrados
    printf("Quadrados: ");
    for (int i = 0; i < 10; i++) {
        if (i == 9) {
            printf("%.2f\n", quadrados[i]);
        } else {
            printf("%.2f ", quadrados[i]);
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
