# Questão 15

15. Leia um vetor com 20 numeros inteiros. Escreva os elementos do vetor eliminando elementos repetidos.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>

int main() {
    int vetor[20], repetido;
    //int freq[1001] = {0};

    // leitura
    for (int i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }
    
    for (int i = 0; i < 20; i++) {
        repetido = 0;
        
        for (int j = 0; j < i; j++) {
            if (vetor[j] == vetor[i]) {
                repetido = 1;
                break;
            }
        }
        
        if (repetido == 0) {
            printf("%d ", vetor[i]);
        }
    }

    return 0;
}

// Outra forma de fazer sem usar dois for
// #include <stdio.h>

// int main() {
//     int vetor[20];
//     int usado[1001] = {0}; // ajusta conforme o intervalo dos números

//     for (int i = 0; i < 20; i++) {
//         scanf("%d", &v[i]);
//     }

//     for (int i = 0; i < 20; i++) {
//         if (usado[v[i]] == 0) {
//             printf("%d ", v[i]);
//             usado[v[i]] = 1;
//         }
//     }

//     return 0;
// }
```

</details>

## Casos de Teste

```
>>>>>>>> INSERT

======== EXPECT

<<<<<<<< FINISH
```

[Código](./C/draft.c)
