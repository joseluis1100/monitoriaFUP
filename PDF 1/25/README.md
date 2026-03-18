# Questão 25

Leia um valor de area em acres e apresente-o convertido em metros quadrados m². A fórmula de conversão é: M = A ∗ 4048.58 , sendo M a área em metros quadrados e A a área em acres.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>

int main() {
    float A;
    scanf("%f", &A);

    float M = A * 4048.58;
    printf("%f\n", M);
    return 0;
}
```

</details>

## Casos de Teste

```
>>>>>>>> INSERT
1
======== EXPECT
4048.580078
<<<<<<<< FINISH

>>>>>>>> INSERT
10.5
======== EXPECT
42510.089844
<<<<<<<< FINISH

>>>>>>>> INSERT
0
======== EXPECT
0.000000
<<<<<<<< FINISH

>>>>>>>> INSERT
0.5
======== EXPECT
2024.290039
<<<<<<<< FINISH
```

[Código](./C/draft.c)
