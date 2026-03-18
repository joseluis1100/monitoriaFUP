# Questão 15

Leia um angulo em radianos e apresente-o convertido em graus. A fôrmula de conversão é: G = R ∗ 180/π, sendo G o ângulo em graus e R em radianos e π = 3.14.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>
#define PI 3.14159

int main() {
    float R;
    scanf("%f", &R);

    // Usa a constante PI definida acima
    float G = R * 180.0 / PI;
    printf("%f\n", G);
    return 0;
}
```

</details>

## Casos de Teste

```
>>>>>>>> INSERT
0
======== EXPECT
0.000000
<<<<<<<< FINISH

>>>>>>>> INSERT
100
======== EXPECT
5729.583008
<<<<<<<< FINISH

>>>>>>>> INSERT
32
======== EXPECT
1833.466553
<<<<<<<< FINISH

>>>>>>>> INSERT
-10
======== EXPECT
-572.958252
<<<<<<<< FINISH
```

[Código](./C/draft.c)
