# Questão 37

Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo em vista que o desconto foi de 12%.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>

int main() {
    float valor_produto;
    scanf("%f", &valor_produto);

    // 100% - 12% = 88% (0.88). 
    // É uma forma mais rápida e limpa de calcular!
    float valor_com_desconto = valor_produto * 0.88;

    printf("%.2f\n", valor_com_desconto);
    return 0;
}
```

</details>

## Casos de Teste

```
>>>>>>>> INSERT
100
======== EXPECT
88.00
<<<<<<<< FINISH

>>>>>>>> INSERT
50
======== EXPECT
44.00
<<<<<<<< FINISH

>>>>>>>> INSERT
12.50
======== EXPECT
11.00
<<<<<<<< FINISH
```

[Código](./C/draft.c)
