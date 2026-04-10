# primo: Calculando se é
Ação
Dado um número inteiro, faça uma função que verifique se ele é primo.

Entrada
Um numero inteiro N.
Saida
1 caso N for primo e 0 caso contrário.
Exemplos
>>>>>>>> INSERT
5
======== EXPECT
1
<<<<<<<< FINISH
>>>>>>>> INSERT
21
======== EXPECT
0
<<<<<<<< FINISH
>>>>>>>> INSERT
2
======== EXPECT
1
<<<<<<<< FINISH
```c
#include <stdio.h>

int main() {
    int numero;
    scanf("%d", &numero);
    
    // Um número primo é divisível apenas por 1 e ele mesmo.
    // Por isso, i = 2 e i < numero. Isso garante que, se ele for divisível por qualquer outro número, não é primo
    for (int i = 2; i < numero; i++) {
        if (numero % i == 0) {
            printf("0\n");
            return 0;
        }
    }
    
    printf("1\n");
    return 0;
}
```

