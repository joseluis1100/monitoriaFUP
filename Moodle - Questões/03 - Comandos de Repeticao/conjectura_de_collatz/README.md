# Conjectura de Collatz
Contexto
Certa vez, um matemático curioso propôs um desafio simples: escolha qualquer número inteiro positivo e siga estas regras — se for par, divida por 2; se for ímpar, multiplique por 3 e some 1. Repita o processo até chegar em 1.

Por exemplo, começando em 12, temos: 12 → 6 → 3 → 10 → 5 → 16 → 8 → 4 → 2 → 1.

Embora pareça imprevisível, o resultado parece sempre terminar em 1. Sua tarefa é escrever um programa que receba um número inicial, mostre a sequência formada e informe quantos passos foram necessários para alcançar o fim.

Entrada
Um número inteiro inicial
Saída
A sequência de passos do número inicial até chegar em 1.
Quantidade de passos no formato: "passos: x"
Testes
>>>>>>>> INSERT
12 
======== EXPECT
12
6
3
10
5
16
8
4
2
1
passos: 9
<<<<<<<< FINISH
```c
#include <stdio.h>

int main() {
    int numero;
    scanf("%d", &numero);
    
    int passos = 0;
    while (numero != 1) {
        printf("%d\n", i);
        
        if (numero % 2 == 0) {
            numero /= 2;
          //i = i / 2;
        } else {
            numero = numero * 3 + 1;
        }
        
        passos++;
    }
    
    printf("1\n");
    printf("passos: %d\n", contador);
    
    return 0;
}
```

