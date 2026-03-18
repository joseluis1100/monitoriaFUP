# Questão 34

Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente. A área do círculo é π ∗ raio², considere π = 3.141592.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main() {
    float raio;
    scanf("%f", &raio);
    float area = PI * pow(raio, 2);
    printf("%f\n", area);
    return 0;
}
```

</details>

## Casos de Teste

```
>>>>>>>> INSERT
5
======== EXPECT
78.539803
<<<<<<<< FINISH

>>>>>>>> INSERT
10.2
======== EXPECT
326.851227
<<<<<<<< FINISH

>>>>>>>> INSERT
0.5
======== EXPECT
0.785398
<<<<<<<< FINISH
```

[Código](./C/draft.c)
