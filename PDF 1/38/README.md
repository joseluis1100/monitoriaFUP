# Questão 38

Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele recebeu um aumento de 25%.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>

int main() {
    float salario;
    scanf("%f", &salario);
    //125% = valor * 1.25
    float novoSalario = salario * 1.25;
    printf("%.2f\n", novoSalario);
    return 0;
}
```

</details>

## Casos de Teste

```
>>>>>>>> INSERT
1000
======== EXPECT
1250.00
<<<<<<<< FINISH

>>>>>>>> INSERT
2500
======== EXPECT
3125.00
<<<<<<<< FINISH

>>>>>>>> INSERT
500.50
======== EXPECT
625.62
<<<<<<<< FINISH
```

[Código](./C/draft.c)
