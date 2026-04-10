# Questão 10

10. Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a media geral.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>
#include <limits.h>

int main() {
    int vetor[15], soma = 0;
    
    for (int i = 0; i < 15; i++) {
        scanf("%d", &vetor[i]);
        
        soma += vetor[i];
    }
    
    float media = (float) soma / 15;
    printf("%.2f\n", media);

    return 0;
}
```

</details>

## Casos de Teste

```
>>>>>>>> INSERT

======== EXPECT

<<<<<<<< FINISH
```

[Código](./C/draft.c)
