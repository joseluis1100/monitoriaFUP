## 📖 Guia de Estudos (Strings### Módulo 7: Arrays de Caracteres (Strings)

Em C, não existe um bloco funcional isolado chamado estritamente `string`. Elas são emuladas internamente valendo-se puramente de uma estrutura de tamanho previsível em *Arrays* do tipo abstrato `char`.

#### Bibliotecas de Manipulação de Texto (`<string.h>` e `<ctype.h>`)
A partir deste módulo de listas, utilizaremos massivamente arranjos textuais inteiros. C traz duas bibliotecas prontas para essas formatações:
- A **`<string.h>`** abarca todos os comandos universais como `strlen()`, `strcpy()`, `strcmp()` e `strcat()`.
- A **`<ctype.h>`** opera sobre a lógica individual de letra-a-letra (como converter maiúscula em minúscula via `toupper()` e `tolower()`, ou verificar numéricos nativos com `isdigit()`).

Para que essas bibliotecas e funções padrão encontrem de forma rápida e diferenciem o limite útil textualmente de todo o lixo alocado na memória à frente de uma frase, estabeleceu-se o chamado caractere "**Terminador Nulo** (`\0`)". Desta forma: Para reservar um array de 5 letras ativas textuais (ex: "Teste"), torna-se compulsória a reserva de uma declaração base `char[6]`.

```c
#include <string.h> 

char nome[100];
    
// Ignorando buffers com problema de tecla ENTER em scanf para coletar todo o texto corrido:
scanf(" %[^\n]", nome);

// Funções provenientes da biblioteca <string.h> 
int len = strlen(nome);
char backup[100];

// Cópia profunda correta (O operador `=` de assinalamento em Strings completas é fisicamente incorreto).
strcpy(backup, nome); 

if (strcmp(backup, "TESTE") == 0) {
    // Strings Iguais!
}
```

#### 7.1 Matrizes de Caracteres (Vetor de Nomes)
Para reter uma coletividade de nomes curtos ou frases na mesma estrutura unânime (um "Vetor de Strings"), demanda-se o agrupamento de matrizes bidimensionais predefinindo categoricamente a quantidade de palavras X o tamanho da fenda individual máxima delas: `char nomes[5][100];` (armazena 5 palavras contendo tolerância respectiva para 100 letras exclusivas cada uma).

---

---

# Questões
- [ ] `@compara` [Q01 - Faça um programa que então leia uma string e a imprima.](./compara)
- [ ] `@copia` [Q02 - Crie um programa que calcula o comprimento de uma string (não use a função st...](./copia)
- [ ] `@maiusculas` [Q03 - Entre com um nome e imprima o nome somente se a primeira letra do nome for ‘a’](./maiusculas)
- [ ] `@iniciais` [Q04 - faça um programa que leia um nome e imprima as 4 primeiras letras do nome.](./iniciais)
- [ ] `@tamanho` [Q05 - Digite um nome, calcule e retorne quantas letras tem esse nome.](./tamanho)
- [ ] `@registro` [Q06 - Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nom...](./registro)
- [ ] `@concatena` [Q07 - Crie um programa que compara duas strings (não use a função strcmp).](./concatena)
- [ ] `@vogais` [Q08 - Faça um programa que conte o número de 1’s que aparecem em um string. Exemplo:...](./vogais)
- [ ] `@substitui` [Q09 - Escreva um programa que substitui as ocorrências de um caractere ‘0’ em uma str...](./substitui)
- [ ] `@invertestr` [Q10 - Faça um programa que receba uma palavra e a imprima de trás-para-frente.](./invertestr)
- [ ] `@palindromo` [Q11 - Faça um programa que receba do usuário uma string. O programa imprime a string...](./palindromo)
- [ ] `@frase` [Q12 - Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u...](./frase)
- [ ] `@palavras` [Q13 - Ler uma frase e contar quantos caracteres são espaços em brancos. Lembre-se qu...](./palavras)
- [ ] `@caixa` [Q14 - Faça um programa que leia uma palavra (máximo de 50 letras) e some 1 no valor...](./caixa)
- [ ] `@upper` [Q15 - Escreva um programa para converter uma cadeia de caracteres de letras maiúscula...](./upper)
- [ ] `@capitalize` [Q16 - Leia uma cadeia de caracteres e converta todos os caracteres para maiúscula. Di...](./capitalize)
- [ ] `@ordenastr` [Q17 - Leia um vetor contendo letras de uma frase inclusive os espaços em branco. Reti...](./ordenastr)
- [ ] `@trocastr` [Q18 - Faça um programa em que troque todas as ocorrências de uma letra L1 pela letra...](./trocastr)
- [ ] `@fichario` [Q19 - Escreva um programa que leia a idade e o primeiro nome de 10 pessoas. Seu progra...](./fichario)
- [ ] `@placa` [Q20 - Faça um programa que preencha uma matriz de string com os modelos de cinco carr...](./placa)
- [ ] `@frases` [Q21 - Faça um programa que receba duas frases distintas e imprima de maneira invertid...](./frases)
- [ ] `@cupom` [Q22 - Ler o nome e o valor de uma determinada mercadoria de uma loja. Sabendo que o de...](./cupom)
- [ ] `@substr` [Q23 - Escreva um programa que recebe uma string S e inteiros não-negativos I e J e im...](./substr)
- [ ] `@inserestr` [Q24 - Escreva um programa que recebe do usuário uma string S, um caractere C, e uma p...](./inserestr)
- [ ] `@menorstr` [Q25 - Escreva um programa que leia duas palavras e diga qual deles vem primeiro na ord...](./menorstr)
- [ ] `@cifra` [Q26 - O código de César é uma das mais simples e conhecidas técnicas de criptograf...](./cifra)
- [ ] `@datastr` [Q27 - Faça um programa que, dada uma string, diga se ela é um palı́ndromo ou não. L...](./datastr)
- [ ] `@formato` [Q28 - Construa um programa que leia duas strings fornecidas pelo usuário e verifique...](./formato)
- [ ] `@opstr` [Q29 - Implemente um programa que leia duas strings, str1 e str2, e um valor inteiro po...](./opstr)
- [ ] `@cadeias` [Q30 - Leia duas cadeias de caracteres A e B. Determine quantas vezes a cadeia A ocorre...](./cadeias)
- [ ] `@buscastr` [Q31 - Faça um programa que contenha um menu com as seguintes opções:](./buscastr)
- [ ] `@espacos` [Q32 - Leia uma cadeia de caracteres no formato “DD/MM/AAAA” e copie o dia, mês e ano...](./espacos)
- [ ] `@ascii` [Q33 - Faça um programa para ler uma tabela contendo os nomes dos alunos de uma turma...](./ascii)
- [ ] `@maiorstr` [Q34 - Faça um programa que encontre o conjunto de 5 dı́gitos consecutivos na sequênc...](./maiorstr)
