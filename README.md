# Repsitório para Monitoria de FUP

## Funções principais

| Função | Ação | Sintaxe Básica | O que não esquecer? |
| :--- | :--- | :--- | :--- |
| **`printf()`** | **Saída:** Mostra algo na tela. | `printf("Texto %d", variavel);` | O `\n` serve para pular linha. |
| **`scanf()`** | **Entrada:** Lê o que foi digitado. | `scanf("%d", &variavel);` | **Sempre** use o `&` antes da variável. |

## Tipos de dados

| Tipo de Dado | Descrição | Placeholder (scanf/printf) |
| :--- | :--- | :--- |
| `int` | Números inteiros (1, 10, -5) | `%d` |
| `float` | Números reais (1.5, 3.14) | `%f` |
| `char` | Um único caractere ('a', 'B') | `%c` |

## Esqueleto básico de um código em C
```c
#include <stdio.h>

int main() {
    return 0;
}
```
### ⚠️ Erros Comuns de Iniciantes

* **Esquecer o `&` no `scanf`:** O programa vai compilar, mas vai fechar sozinho ou dar erro de memória ao rodar.
* **Inverter as funções:** Tentar "ler" com `printf` ou "escrever" com `scanf`.
* **Esquecer o `;`:** Em C, toda instrução termina com ponto e vírgula!
