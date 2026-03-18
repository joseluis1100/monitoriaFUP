# Questão 20

Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula de conversão é: L = K/0,45, sendo K a massa em quilogramas e L a massa em libras.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>

int main() {
    float k;
    scanf("%f", &k);
    float l = k/0.45;
    printf("%f\n", l);
    return 0;
}
```

</details>

## Casos de Teste

```
>>>>>>>> INSERT
1
======== EXPECT
2.222222
<<<<<<<< FINISH

>>>>>>>> INSERT
10.5
======== EXPECT
23.333334
<<<<<<<< FINISH

>>>>>>>> INSERT
0
======== EXPECT
0.000000
<<<<<<<< FINISH

>>>>>>>> INSERT
0.5
======== EXPECT
1.111111
<<<<<<<< FINISH
```

[Código](./C/draft.c)
