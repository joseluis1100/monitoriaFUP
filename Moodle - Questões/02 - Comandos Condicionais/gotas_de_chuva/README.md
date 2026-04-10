# Gotas de chuva
Contexto
Um cientista curioso criou um sistema onde números se transformam em sons de chuva:

Se o número for divisível por 3, adiciona-se "Pling".

Se for divisível por 5, adiciona-se "Plang".

Se for divisível por 7, adiciona-se "Plong".

Se não for divisível por 3, 5 ou 7, o próprio número deve ser mostrado.

Sua tarefa é escrever um programa que, dado um número, produza a sequência correta de sons ou o próprio número.

Entrada
Um único número inteiro positivo.

Saída
Uma única linha com:

a sequência de sons (PlingPlangPlong) ou

o número em si, caso não seja divisível por 3, 5 ou 7.

Testes
>>>>>>>> INSERT
28
======== EXPECT
Plong
<<<<<<<< FINISH

>>>>>>>> INSERT
30
======== EXPECT
PlingPlang
<<<<<<<< FINISH

>>>>>>>> INSERT
34
======== EXPECT
34
<<<<<<<< FINISH
```c
#include <stdio.h>

int main() {
    int numero;
    scanf("%d", &numero);
    
    int divisivel = 0;    
    if (numero % 3 == 0) {
        printf("Pling");
        divisivel = 1;
    } 
    if (numero % 5 == 0) {
        printf("Plang");
        divisivel = 1;
    }
    if (numero % 7 == 0) {
        printf("Plong");
        divisivel = 1;
    }
    if (!divisivel) { // mesmo significado de: divisivel == 0
        printf("%d", numero);
    }
    printf("\n");
    
    return 0;
}
```

