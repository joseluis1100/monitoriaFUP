# Questão 41

Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre o valor calculado.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>

int main() {
    float valor_por_hora;
    int horas_trabalhadas;
    scanf("%f %d", &valor_por_hora, &horas_trabalhadas);

    // Multiplicar por 1.10 é o mesmo que adicionar os 10% sobre o valor
    float valor = (valor_por_hora * horas_trabalhadas) * 1.10;

    printf("%.2f\n", valor);
    return 0;
}
```

</details>

## Casos de Teste

```
>>>>>>>> INSERT
10 160
======== EXPECT
1760.00
<<<<<<<< FINISH

>>>>>>>> INSERT
25.5 100
======== EXPECT
2805.00
<<<<<<<< FINISH

>>>>>>>> INSERT
50 0
======== EXPECT
0.00
<<<<<<<< FINISH
```

[Código](./C/draft.c)
