# Questão 17

Leia um valor de comprimento em centímetros e apresente-o convertido em polegadas. A formula de conversão é: P = C / 2,54 , sendo C o comprimento em centímetros e P o comprimento em polegadas.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>

int main() {
    float C;
    scanf("%f", &C);

    float P = C / 2.54;
    printf("%f\n", P);
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
39.370079
<<<<<<<< FINISH

>>>>>>>> INSERT
32
======== EXPECT
12.598425
<<<<<<<< FINISH

>>>>>>>> INSERT
-10
======== EXPECT
-3.937008
<<<<<<<< FINISH
```

[Código](./C/draft.c)
