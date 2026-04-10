# digitos: Fazendo contagem
Motivação
Joãozinho passou o dia visualizando os seus contatos no celular.
Logo ele decidiu fazer um programa que calcula a quantidade de vezes que um determinado dígito aparece em um número de contato.
Após passar uma semana tentando ele repassou esse problema para você.

Ação
Receba dois inteiros do usuário, o primeiro sendo o dígito que se quer saber quantas vezes aparece e o segundo sendo o número do contato.

Entrada
Valor inteiro A (entre 1 e 9).
Valor inteiro B.
Saída
Número de vezes que o dígito A aparece em B
Exemplos
>>>>>>>> INSERT
0
0
======== EXPECT
1
<<<<<<<< FINISH
>>>>>>>> INSERT
1
10
======== EXPECT
1
<<<<<<<< FINISH


>>>>>>>> INSERT
2
99102030
======== EXPECT
1
<<<<<<<< FINISH
>>>>>>>> INSERT
9
44902391
======== EXPECT
2
<<<<<<<< FINISH
>>>>>>>> INSERT
4
5939
======== EXPECT
0
<<<<<<<< FINISH
>>>>>>>> INSERT
0
51007140
======== EXPECT
3
<<<<<<<< FINISH
```c
#include <stdio.h>

int main() {
    int digito, numero, aparece = 0;
    scanf("%d %d", &digito, &numero);
    
    if (numero == 0 && digito == 0) {
        aparece = 1;
    }
    
    while (numero > 0) {
        if (numero % 10 == digito) {
            aparece++;
        }
        
        numero /= 10;
    }
    
    printf("%d\n", aparece);
}
```