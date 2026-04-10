# Entrando na porta
Contexto
Dois personagens caíram numa armadilha onde o teto está descendo rapidamente. Para fugir eles precisam ativar uma alavanca passando por uma porta estreita. As regras são simples:

Se apenas um personagem passar pela porta, a alavanca é ativada com sucesso.

Se tentarem passar juntos ou nenhum passar, a alavanca não é ativada.

Você deve dizer se a alavanca será acionada com base na ação dos personagens.

Entrada
Dois números inteiros (0 ou 1), separados por espaço:
1 significa que o personagem está tentando entrar na porta.
0 significa que o personagem não está entrando.
Saída
"sucesso" caso os aventureiros consigam ativar a alavanca, "fracasso" caso contrário
Testes
>>>>>>>> INSERT
0 1
======== EXPECT
sucesso
<<<<<<<< FINISH
```c
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    // No if abrange os casos onde a = 1 e b = 0, ou a = 0 e b = 1.
    if (a != b) {
        printf("sucesso\n");
    } else {
        printf("fracasso\n");
        return 1;
    }
    
    return 0;
}
```

