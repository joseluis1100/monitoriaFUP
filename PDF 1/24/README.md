# Questão 24

Leia um valor de área em metros quadrados m² e apresente-o convertido em acres. A fórmula de conversão é: A = M ∗ 0,000247, sendo M a área em metros quadrados e A a área em acres.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>

int main() {
    float m;
    scanf("%f", &m);
    float a = m * 0.000247;
    printf("%f\n", a);
    return 0;
}
```

</details>

## Casos de Teste

```
>>>>>>>> INSERT
1
======== EXPECT
0.000247
<<<<<<<< FINISH

>>>>>>>> INSERT
10.5
======== EXPECT
0.002594
<<<<<<<< FINISH

>>>>>>>> INSERT
0
======== EXPECT
0.000000
<<<<<<<< FINISH

>>>>>>>> INSERT
0.5
======== EXPECT
0.000123
<<<<<<<< FINISH
```

[Código](./C/draft.c)
