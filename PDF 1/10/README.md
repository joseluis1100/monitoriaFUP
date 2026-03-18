# Questão 10

Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s(metros por segundo). A fórmula de conversão é: M = K/3.6, sendo K a velocidade em km/h e M em m/s.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>

int main() {
    float k;
    scanf("%f", &k);
    float m = k/3.6;
    printf("%f\n", m);
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
27.777779
<<<<<<<< FINISH

>>>>>>>> INSERT
32
======== EXPECT
8.888889
<<<<<<<< FINISH

>>>>>>>> INSERT
-10
======== EXPECT
-2.777778
<<<<<<<< FINISH
```

[Código](./C/draft.c)
