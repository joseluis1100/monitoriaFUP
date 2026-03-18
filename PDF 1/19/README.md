# Questão 19

Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m³. A formula de conversão é: M = L/1000 , sendo L o volume em litros e M o volume em metros cúbicos.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>

int main() {
    float L;
    scanf("%f", &L);

    float M = L / 1000.0;
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
0.001000
<<<<<<<< FINISH

>>>>>>>> INSERT
10.5
======== EXPECT
0.010500
<<<<<<<< FINISH

>>>>>>>> INSERT
0
======== EXPECT
0.000000
<<<<<<<< FINISH

>>>>>>>> INSERT
0.5
======== EXPECT
0.000500
<<<<<<<< FINISH
```

[Código](./C/draft.c)
