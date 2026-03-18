# Questão 14

Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é: R = G ∗ π/180, sendo G o ângulo em graus e R em radianos e π = 3.14.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>
//OPCIONAL: usamos o define para criar um "simbolo" para um valor 
//específico. Ele não funciona como uma variável, não pode ser mudado e 
//não gasta espaço na memória.
#define PI 3.14159

int main() {
    float g;
    scanf("%f", &g);
    float r = g * PI / 180;
    printf("%f\n", r);
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
1.745328
<<<<<<<< FINISH

>>>>>>>> INSERT
32
======== EXPECT
0.558505
<<<<<<<< FINISH

>>>>>>>> INSERT
-10
======== EXPECT
-0.174533
<<<<<<<< FINISH
```

[Código](./C/draft.c)
