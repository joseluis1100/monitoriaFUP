# Questão 22

Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fórmula de conversão é: M = 0,91 ∗ J, sendo J o comprimento em jardas e M o comprimento em metros.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>

int main() {
    float j;
    scanf("%f", &j);
    float m = 0.91 * j;
    printf("%f\n", m);
    return 0;
}
```

</details>

## Casos de Teste

```
>>>>>>>> INSERT
1
======== EXPECT
0.910000
<<<<<<<< FINISH

>>>>>>>> INSERT
10.5
======== EXPECT
9.555000
<<<<<<<< FINISH

>>>>>>>> INSERT
0
======== EXPECT
0.000000
<<<<<<<< FINISH

>>>>>>>> INSERT
0.5
======== EXPECT
0.455000
<<<<<<<< FINISH
```

[Código](./C/draft.c)
