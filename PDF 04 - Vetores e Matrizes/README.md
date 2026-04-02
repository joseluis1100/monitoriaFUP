## 📖 Guia de Estudos (Vetores e Matrizes### Módulo 6: Arrays (Vetores e Matrizes)

Também chamadas de estruturas homogêneas — comportam apenas um mesmo tipo primitivo e garantem o avanço através da manipulação dos seus índices matemáticos, começando habitualmente com o zero.

#### 6.1 Os Limites e a Falha de Segmentação
A memória em C exige atenção máxima: Um identificador como `int numeros[10];` armazena 10 células inteiras organizadas estruturalmente do array num índice basal **0** ao teto limite condicional exclusivo de **9**. A leitura acidental com `numeros[10] = 5;` fará com que o software sobreponha fisicamente falhas conhecidas de Sistema e memória ("Segmentation Fault").

```c
// Utilização matricial bidimensional
int mat[3][3];

for (int linha = 0; linha < 3; linha++) {
    for (int col = 0; col < 3; col++) {
        mat[linha][col] = 0;
    }
}
```

---

---

# Questões
- [ ] `@matriz` [Q01 - Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui...](./matriz)
- [ ] `@vetorsoma` [Q02 - Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais...](./vetorsoma)
- [ ] `@preenche` [Q03 - Faça um programa que preenche uma matriz 4 x 4 com o produto do valor da linha...](./preenche)
- [ ] `@maiorvet` [Q04 - Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a col...](./maiorvet)
- [ ] `@diagonal` [Q05 - Leia uma matriz 5 x 5. Leia também um valor X. O programa deverá fazer uma bus...](./diagonal)
- [ ] `@somamat` [Q06 - Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada p...](./somamat)
- [ ] `@transposta` [Q07 - Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos são da form...](./transposta)
- [ ] `@linhas` [Q08 - Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão acim...](./linhas)
- [ ] `@multmat` [Q09 - Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão abai...](./multmat)
- [ ] `@busca` [Q10 - Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão na d...](./busca)
- [ ] `@identidade` [Q11 - Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão na d...](./identidade)
- [ ] `@trocalinhas` [Q12 - Leia uma matriz de 3 x 3 elementos. Calcule e imprima a sua transposta.](./trocalinhas)
- [ ] `@aleatorio` [Q13 - Gere matriz 4 x 4 com valores no intervalo [1, 20]. Escreva um programa que tran...](./aleatorio)
- [ ] `@paresrand` [Q14 - Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartel...](./paresrand)
- [ ] `@mediamat` [Q15 - Leia uma matriz 5 x 10 que se refere respostas de 10 questões de múltipla esco...](./mediamat)
- [ ] `@acimabaixo` [Q16 - Faça um programa para corrigir uma prova com 10 questões de múltipla escolha...](./acimabaixo)
- [ ] `@notasvet` [Q17 - Leia uma matriz 10 x 3 com as notas de 10 alunos em 3 provas. Em seguida, escrev...](./notasvet)
- [ ] `@cadastro` [Q18 - Faça um programa que permita ao usuário entrar com uma matriz de 3 x 3 número...](./cadastro)
- [ ] `@desvio` [Q19 - Faça um programa que leia uma matriz de 5 linhas e 4 colunas contendo as seguin...](./desvio)
- [ ] `@ponderada` [Q20 - Faça programa que leia uma matriz 3 x 6 com valores reais.](./ponderada)
- [ ] `@operamat` [Q21 - Faça um programa que leia duas matrizes 2 x 2 com valores reais. Ofereça ao us...](./operamat)
- [ ] `@escalar` [Q22 - Faça um programa que leia duas matrizes A e B de tamanho 3 x 3 e calcule C = A...](./escalar)
- [ ] `@triangmat` [Q23 - Faça um programa que leia uma matriz A de tamanho 3 x 3 e calcule B = A2 .](./triangmat)
- [ ] `@extremos` [Q24 - Na matriz de 20x20 abaixo, quatro números ao longo de uma linha diagonal foram...](./extremos)
- [ ] `@proxima` [Q25 - Faça um programa para determinar a próxima jogada em um Jogo da Velha. Assumir...](./proxima)
- [ ] `@paridade_vet` [Q26 - Faça um programa que calcule o desvio padrão de um vetor v contendo n = 10 nú...](./paridade_vet)
- [ ] `@ordenavet` [Q27 - Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os elemento...](./ordenavet)
- [ ] `@inserevet` [Q28 - Leia 10 números inteiros e armazene em um vetor v. Crie dois novos vetores v1 e...](./inserevet)
- [ ] `@filtravet` [Q29 - Faça um programa que receba 6 números inteiros e mostre:](./filtravet)
- [ ] `@intercala` [Q30 - Faça um programa que leia dois vetores de 10 elementos. Crie um vetor que seja...](./intercala)
- [ ] `@uniao` [Q31 - Faça um programa que leia dois vetores de 10 elementos. Crie um vetor que seja...](./uniao)
- [ ] `@intersecao` [Q32 - Leia dois vetores de inteiros x e y, cada um com 5 elementos (assuma que o usuá...](./intersecao)
- [ ] `@duplicatas` [Q33 - Faça um programa que leia um vetor de 15 posições e o compacte, ou seja, elim...](./duplicatas)
- [ ] `@distintos` [Q34 - Faça um programa para ler 10 números DIFERENTES a serem armazenados em um veto...](./distintos)
- [ ] `@menores` [Q35 - Faça um programa que leia dois números a e b (positivos menores que 10000) e:](./menores)
- [ ] `@rotaciona` [Q36 - Leia um vetor com 10 números reais, ordene os elementos deste vetor, e no final...](./rotaciona)
- [ ] `@bubble` [Q37 - Considere um vetor A com 11 elementos onde A1 < A2 < · · · < A6 > A7 > A8 > · ·...](./bubble)
- [ ] `@selecao` [Q38 - Peça ao usuário para digitar dez valores numéricos e ordene por ordem crescen...](./selecao)
- [ ] `@pascal` [Q39 - Escreva um programa que leia um número inteiro positivo n e em seguida imprima...](./pascal)
