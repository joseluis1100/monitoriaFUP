# Questão 08

Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A fórmula de conversão é: C = K − 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>

int main() {
    float k;
    scanf("%f", &k);
    float c = k - 273.15;
    printf("%f\n", c);
    return 0;
}
```

</details>

## Casos de Teste

```
>>>>>>>> INSERT
0
======== EXPECT
-273.149994
<<<<<<<< FINISH

>>>>>>>> INSERT
100
======== EXPECT
-173.149994
<<<<<<<< FINISH

>>>>>>>> INSERT
32
======== EXPECT
-241.149994
<<<<<<<< FINISH

>>>>>>>> INSERT
-10
======== EXPECT
-283.149994
<<<<<<<< FINISH
```

[Código](./C/draft.c)
