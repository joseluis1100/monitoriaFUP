# Questão 11

Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h (quilometros por hora). A fórmula de conversão é: K = M ∗ 3.6, sendo K a velocidade em km/h e M em m/s.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>

int main() {
    float M;
    scanf("%f", &M);

    float K = M * 3.6;
    printf("%f\n", K);
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
360.000000
<<<<<<<< FINISH

>>>>>>>> INSERT
32
======== EXPECT
115.199997
<<<<<<<< FINISH

>>>>>>>> INSERT
-10
======== EXPECT
-36.000000
<<<<<<<< FINISH
```

[Código](./C/draft.c)
