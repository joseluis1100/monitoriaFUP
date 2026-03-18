# Questão 31

Leia um numero inteiro e imprima o seu antecessor e o seu sucessor.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>

int main() {
    int numero;
    scanf("%d", &numero);

    int antecessor = numero - 1;
    int sucessor = numero + 1;
    printf("%d %d\n", antecessor, sucessor);
    return 0;
}
```

</details>

## Casos de Teste

```
>>>>>>>> INSERT
10
======== EXPECT
9 11
<<<<<<<< FINISH

>>>>>>>> INSERT
123
======== EXPECT
122 124
<<<<<<<< FINISH

>>>>>>>> INSERT
-45
======== EXPECT
-46 -44
<<<<<<<< FINISH
```

[Código](./C/draft.c)
