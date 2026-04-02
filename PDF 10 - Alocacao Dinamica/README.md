## 📖 Guia de Estudos (Alocacao Dinamica### Módulo 11: O Poder da Alocação Dinâmica (`<stdlib.h>`)

Problemas dimensionais frequentemente acometem os Arrays estáticos originais, já que eles proíbem expansão ao longo do fluxo contínuo. 

É neste ponto cronológico que destravamos o verdadeiro e completo poder da **`<stdlib.h>`** (a *Standard Library*). Introduzida timidamente no Módulo 3 apenas para geração de números randômicos, excluíndo suas atuações generalistas de tela, ela provê o poderoso catálogo de funções matrizes de memórias alocáveis flexíveis atreladas a ponteiros!

- **`malloc(size)`:** Aloca uma área isolada do programa na quantidade quantitativa física especulada exata repassando a ligação da matriz sob estrutura nula, exigindo na declaração original a conversão dimensional explícita (*Casting*) correspondente unida ao peso sistêmico referencial (*sizeof*).
- **`calloc(count, size)`:** Formaliza múltiplos indexadores baseados no acúmulo individual idêntico zerado.
- **`realloc(ptr, newSize)`:** Modifica ou estende o escopo quantitativo de um processamento já consolidado alocativo.
- **`free(ptr)`:** Obrigatoriedade inegociável programática do autor para destituir ou limpar completamente uma vaga da sua arquitetura gerencial após exaurida utilidade.

```c
// Alocando e desobstruindo espaço formal em C para um ponteiro abrigar 10 Inteiros base:
int *vetorDiamico = (int *) malloc(10 * sizeof(int));
free(vetorDiamico);
```

---

---

# Questões
- [ ] `@malloc` [Q01 - Crie um programa que:](./malloc)
- [ ] `@alocvet` [Q02 - Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça...](./alocvet)
- [ ] `@alocmedia` [Q03 - Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça...](./alocmedia)
- [ ] `@alocext` [Q04 - Faça um programa que receba do usuário o tamanho de uma string e chame uma fun...](./alocext)
- [ ] `@alocconcat` [Q05 - Faça um programa que leia um número N e:](./alocconcat)
- [ ] `@pilha` [Q06 - Faça um programa que simule a memória de um computador: o usuário irá especi...](./pilha)
- [ ] `@sorteia` [Q07 - Escreva um programa que leia primeiro os 6 números gerados pela loteria e depoi...](./sorteia)
- [ ] `@alocstr` [Q08 - Faça um programa para armazenar em memória um vetor de dados contendo 1500 va-...](./alocstr)
- [ ] `@realloc` [Q09 - Faça um programa que leia uma quantidade qualquer de números armazenando-os na...](./realloc)
- [ ] `@alocmaior` [Q10 - Faça um programa que pergunte ao usuário quantos valores ele deseja armazenar...](./alocmaior)
- [ ] `@alocmat` [Q11 - Crie um programa que declare uma estrutura (registro) para o cadastro de alunos.](./alocmat)
- [ ] `@alocvendas` [Q12 - Considere um cadastro de produtos de um estoque, com as seguintes informações...](./alocvendas)
- [ ] `@aloctri` [Q13 - Escreva um programa que aloque dinamicamente uma matriz (de inteiros) de dimenso...](./aloctri)
- [ ] `@alocstruct` [Q14 - Construa um programa que leia o número de linhas e de colunas de uma matriz de...](./alocstruct)
- [ ] `@alocnomes` [Q15 - Faça um programa que leia dois números N e M e:](./alocnomes)
- [ ] `@fila` [Q16 - Faça um programa que leia dois números N e M:](./fila)
- [ ] `@poligono` [Q17 - Faça um programa que leia números do teclado e os armazene em um vetor alocado...](./poligono)
- [ ] `@alocoper` [Q18 - Escreva um programa para fazer a alocação dinâmica dos blocos de dados confor...](./alocoper)
- [ ] `@grafo` [Q19 - Faça um programa para associar nomes as linhas de uma matriz de caracteres. O u...](./grafo)
- [ ] `@alocpontos` [Q20 - Faça um programa que:](./alocpontos)
- [ ] `@alocnxm` [Q21 - Faça um programa que leia quatro números a, b, c e d, que serão as dimensões...](./alocnxm)
