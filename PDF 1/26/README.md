# Questão 26

Leia um valor de área em metros quadrados m² e apresente-o convertido em hectares. A fórmula de conversão é: H = M ∗ 0,0001, sendo M a área em metros quadrados e H a área em hectares.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>

int main() {
    float m;
    scanf("%f", &m);
    float h = m * 0.0001;
    printf("%f\n", h);
    return 0;
}
```

</details>

## Casos de Teste

```
>>>>>>>> INSERT
1
======== EXPECT
0.000100
<<<<<<<< FINISH

>>>>>>>> INSERT
10.5
======== EXPECT
0.001050
<<<<<<<< FINISH

>>>>>>>> INSERT
0
======== EXPECT
0.000000
<<<<<<<< FINISH

>>>>>>>> INSERT
0.5
======== EXPECT
0.000050
<<<<<<<< FINISH
```

[Código](./C/draft.c)
