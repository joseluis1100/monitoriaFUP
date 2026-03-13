# Repsitório para Monitoria de FUP

## Esqueleto básico de um código em C
```c
#include <stdio.h>

int main() {
    return 0;
}
```

## Tipos de dados

| Tipo de Dado | Descrição | Exemplo de Uso | Placeholder (`%`) |
| :--- | :--- | :--- | :--- |
| `int` | Números inteiros | `int idade = 18;` | `%d` |
| `float` | Números reais (até 6 casas) | `float nota = 9.5;` | `%f` |
| `double` | Números reais (maior precisão) | `double pi = 3.141592;` | `%lf` |
| `char` | Um único caractere (use aspas simples) | `char letra = 'A';` | `%c` |

## Funções principais

| Função | Ação | Sintaxe Básica | O que não esquecer? |
| :--- | :--- | :--- | :--- |
| **`printf()`** | **Saída:** Mostra algo na tela. | `printf("Idade: %d\n", var);` | O `\n` serve para pular linha. |
| **`scanf()`** | **Entrada:** Lê o que foi digitado. | `scanf("%d", &var);` | **Sempre** use o `&` antes da variável. |

## Operandos

| Operador | Operação | Exemplo no Código | Resultado |
| :--- | :--- | :--- | :--- |
| `+` | Adição | `5 + 2` | `7` |
| `-` | Subtração | `5 - 2` | `3` |
| `*` | Multiplicação | `5 * 2` | `10` |
| `/` | Divisão | `5.0 / 2.0` | `2.5` |
| `%` | Resto da Divisão (Módulo) | `5 % 2` | `1` (Porque 5/2 dá 2 e sobra 1) |

### ⚠️ Erros Comuns

* **Esquecer o `&` no `scanf`:** O programa vai compilar, mas vai fechar sozinho ou dar erro de memória ao rodar.
* **Inverter as funções:** Tentar "ler" com `printf` ou "escrever" com `scanf`.
* **Esquecer o `;`:** Em C, toda instrução termina com ponto e vírgula!
* **Trocar `%d` e `%f`:** Uma variável do tipo int não aceita %f e uma do tipo float não aceita %d.
* **Utilizar variáveis vazias:** Se uma variável não tem valor atribuído, ela vai retornar um valor considerado "lixo".
### Específico dos testes do moodle
* **Prints inexperados:** Normalmente os testes esperam apenas o resultado de um algoritmo do jeito mais limpo possível e prints que dão contexto como "digite o valor: " não são aceitos.
* **Esquecer o `\n` no ultimo print:** Todas as questões esperam uma quebra de linha no final, verifique se é isso que faz seu código não passar nos testes.