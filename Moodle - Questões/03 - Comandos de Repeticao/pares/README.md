# Pares 
Contexto
Criança: Pai, a tia falou que na arca de Noé os animais entravam aos pares. O que é pares, papai?
Pai: Pares são números que formam um casalzinho. Tipo 2 passarinhos. Mas também vale para vários pares, como 4, 6, 8, 10, etc.
Criança: Papai, e se não tiver nenhum passarinho pra botar na arca, 0 é par?
Essa pergunta nos leva a pensar nos números pares e como eles se comportam em diferentes intervalos de valores. Vamos explorar isso somando todos os números pares entre dois números inteiros.

Dado dois números inteiros A e B, some todos os números inteiros pares que estão entre A e B, inclusive A e B.

Entrada
Dois números inteiros A e B, sendo B maior ou igual a A.
Saída
A soma de todos os números pares entre A e B, inclusive A e B.
Se A for maior que B, imprima “invalido”.
Testes
>>>>>>>> INSERT
1
10
======== EXPECT
30
<<<<<<<< FINISH
>>>>>>>> INSERT
1
5
======== EXPECT
6
<<<<<<<< FINISH
>>>>>>>> INSERT
5
1
======== EXPECT
invalido
<<<<<<<< FINISH
>>>>>>>> INSERT
6
6
======== EXPECT
6
<<<<<<<< FINISH
```c
#include <stdio.h>

int main() {
    int a, b, soma = 0;
    scanf("%d %d", &a, &b);
    
    if (a > b) {
        printf("invalido\n");
        return 1;
    }
    
    for (int i = a; i <= b; i++) {
        if (i%2 == 0) {
            soma += i;
        }
    }
    
    printf("%d\n", soma);
}
```

