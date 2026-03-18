# Questão 52

Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido proporcionalmente ao valor que cada deu para a realização da aposta. Faça um programa que leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um ganharia do prêmio com base no valor investido.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>

int main() {
    float amigo1, amigo2, amigo3, premio;
    scanf("%f %f %f %f", &amigo1, &amigo2, &amigo3, &premio);
    float pesoTotal = amigo1 + amigo2 + amigo3;
    float ganha1 = premio * amigo1 / pesoTotal;
    float ganha2 = premio * amigo2 / pesoTotal;
    float ganha3 = premio * amigo3 / pesoTotal;
    printf("%.2f %.2f %.2f\n", ganha1, ganha2, ganha3);
    return 0;
}
```

</details>

## Casos de Teste

```
>>>>>>>> INSERT
10 20 30 600
======== EXPECT
100.00 200.00 300.00
<<<<<<<< FINISH

>>>>>>>> INSERT
1 1 1 300
======== EXPECT
100.00 100.00 100.00
<<<<<<<< FINISH

>>>>>>>> INSERT
50 50 100 1000
======== EXPECT
250.00 250.00 500.00
<<<<<<<< FINISH
```

[Código](./C/draft.c)
