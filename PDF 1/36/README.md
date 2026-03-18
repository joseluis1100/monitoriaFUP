# Questão 36

Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula: V = π ∗ raio² ∗ altura, onde π = 3.141592.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main() {
    float altura, raio;
    scanf("%f %f", &altura, &raio);
    float volume = PI * pow(raio, 2) * altura;
    printf("%f\n", volume);
    return 0;
}
```

</details>

## Casos de Teste

```
>>>>>>>> INSERT
10 2
======== EXPECT
125.663681
<<<<<<<< FINISH

>>>>>>>> INSERT
5 5
======== EXPECT
392.699005
<<<<<<<< FINISH

>>>>>>>> INSERT
1 1
======== EXPECT
3.141592
<<<<<<<< FINISH
```

[Código](./C/draft.c)
