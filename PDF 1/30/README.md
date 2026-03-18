# Questão 30

Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>

int main() {
    float reais, cotacao;
    scanf("%f %f", &reais, &cotacao);
    float dolar = reais / cotacao;
    printf("%.2f\n", dolar);
    return 0;
}
```

</details>

## Casos de Teste

```
>>>>>>>> INSERT
100 5.0
======== EXPECT
20.00
<<<<<<<< FINISH

>>>>>>>> INSERT
10 4.85
======== EXPECT
2.06
<<<<<<<< FINISH

>>>>>>>> INSERT
50 1
======== EXPECT
50.00
<<<<<<<< FINISH
```

[Código](./C/draft.c)
