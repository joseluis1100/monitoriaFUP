# Questão 50

Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>

int main() {
    int idade, anoAtual;
    scanf("%d %d", &idade, &anoAtual);
    //essa questão leva em conta que a pessoa já fez aniversário no ano atual
    int anoNascimento = anoAtual - idade;
    printf("%d\n", anoNascimento);
    return 0;
}
```

</details>

## Casos de Teste

```
>>>>>>>> INSERT
10
======== EXPECT
-10
<<<<<<<< FINISH

>>>>>>>> INSERT
123
======== EXPECT
-123
<<<<<<<< FINISH

>>>>>>>> INSERT
-45
======== EXPECT
45
<<<<<<<< FINISH
```

[Código](./C/draft.c)
