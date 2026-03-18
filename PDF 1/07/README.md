# Questão 07

Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius. A formula de conversão é: C = 5.0 ∗ (F − 32.0)/9.0, sendo C a temperatura em Celsius e F a temperatura em Fahrenheit.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>

int main() {
    float F;
    scanf("%f", &F);

    // Parênteses necessários! Sem eles, a multiplicação e divisão seriam feitas primeiro (hierarquia matemática).
    float C = 5.0 * (F - 32.0) / 9.0;
    printf("%f\n", C);
    return 0;
}
```

</details>

## Casos de Teste

```
>>>>>>>> INSERT
0
======== EXPECT
-17.777779
<<<<<<<< FINISH

>>>>>>>> INSERT
100
======== EXPECT
37.777779
<<<<<<<< FINISH

>>>>>>>> INSERT
32
======== EXPECT
0.000000
<<<<<<<< FINISH

>>>>>>>> INSERT
-10
======== EXPECT
-23.333334
<<<<<<<< FINISH
```

[Código](./C/draft.c)
