# Questão 23

Leia um valor de comprimento em metros e apresente-o convertido em jardas. A fórmula de conversão é: J = M / 0.91 , sendo J o comprimento em jardas e M o comprimento em metros.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>

int main() {
    float M;
    scanf("%f", &M);

    float J = M / 0.91;
    printf("%f\n", J);
    return 0;
}
```

</details>

## Casos de Teste

```
>>>>>>>> INSERT
1
======== EXPECT
1.098901
<<<<<<<< FINISH

>>>>>>>> INSERT
10.5
======== EXPECT
11.538462
<<<<<<<< FINISH

>>>>>>>> INSERT
0
======== EXPECT
0.000000
<<<<<<<< FINISH

>>>>>>>> INSERT
0.5
======== EXPECT
0.549451
<<<<<<<< FINISH
```

[Código](./C/draft.c)
