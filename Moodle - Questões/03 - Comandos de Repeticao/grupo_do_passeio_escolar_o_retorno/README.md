# Grupo do passeio escolar: o retorno
Contexto
O passeio da escola para a Trilha do Pico dos Marins não deu muito certo. Infelizmente muitos alunos não sobreviveram aos perigos da trila. Mais especificamente, somente os adultos sobreviveram.

Agora, escola está comprando flores para os parentes dos falecidos e precisa de um programa que conte a quantidade de alunos que não sobreviveram. 

Escreva um programa que receba a idade de N pessoas e determine a quantidade de pessoas que não são adultas no grupo (considere uma pessoa adulta se ela tiver 18 anos ou mais).

Entrada
Na primeira linha, um inteiro N representando a quantidade de pessoas no grupo
Na segunda linha, as idades de cada participante do grupo separadas por espaços.
Saída
Um inteiro, indicando a quantidade de pessoas não adultas no grupo.
Testes
>>>>>>>> INSERT
5
12 15 17 14 16
======== EXPECT
5
<<<<<<<< FINISH
>>>>>>>> INSERT
6
18 19 20 14 15 16
======== EXPECT
3
<<<<<<<< FINISH
```c
#include <stdio.h>

int main() {
    int quantidade, participante, menorIdade = 0;
    scanf("%d", &quantidade);
    
    for (int i = 0; i < quantidade; i++) {
        scanf("%d", &participante);
        
        if (participante < 18) {
            menorIdade++;
        }
    }
    
    printf("%d\n", menorIdade);
    
    return 0;
}
```

