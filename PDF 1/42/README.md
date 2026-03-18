# Questão 42

Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, ele paga 7% de imposto sobre o salário-base.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>

int main() {
    float salarioBase;
    scanf("%f", &salarioBase);
    //100% + 5% - 7% = 98% = 0.98
    float salario = salarioBase * 0.98;
    printf("%.2f\n", salario);
    return 0;
}
```

</details>

## Casos de Teste

```
>>>>>>>> INSERT
1000
======== EXPECT
980.00
<<<<<<<< FINISH

>>>>>>>> INSERT
5000
======== EXPECT
4900.00
<<<<<<<< FINISH

>>>>>>>> INSERT
200.50
======== EXPECT
196.49
<<<<<<<< FINISH
```

[Código](./C/draft.c)
