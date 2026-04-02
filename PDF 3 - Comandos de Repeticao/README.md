## 📖 Guia de Estudos (Comandos de Repeticao### Módulo 5: Estruturas de Repetição

A eficácia estrutural na Computação reside muitas vezes no uso inteligente de loops e laços iterativos.

#### 5.1 Repetição Controlada (`for`)
Ideal para algoritmos que delimitam formalmente na compilação quantas passagens ocorrerão. O escopo conta com (1) a origem, (2) restrição condicional de continuação e (3) passo de incremento/decremento (`i++`, `--i`).
```c
for (int i = 0; i < N; i++) {
    // Processamento estrito ocorrendo N vezes
}
```

#### 5.2 Avaliação Situacional (`while`)
Os laços condicionais funcionam adequadamente onde o fim da instrução ocorre submetida puramente por uma regra lógica flexível (ou sentenças condicionadas com uma *flag* especial).

```c
int entrada;
scanf("%d", &entrada);

while (entrada != 0) {
    // Escopo de processamento

    // Atualização da regra ou repetição do scanf ao fim para não causar LOOPS INFINITOS LETAIS:
    scanf("%d", &entrada);
}
```

As palavras restritas `break;` e `continue;` controlam sub-operações em repetições. O primeiro extingue imediatamente qualquer processamento residual iterativo do laço e salta para a linha adiante. O segundo cancela exclusivamente aquela rodada da iteração corrente e pula pontualmente para o início do próximo laço condicional.

---

---

#### 3.3 A Geração de Números Aleatórios (`<stdlib.h>` e `<time.h>`)
Nesta etapa de aprendizado, introduziremos duas importantes bibliotecas: `<stdlib.h>` (responsável por prover utilitários gerais limitados neste ponto) e `<time.h>` (utilizada para leitura do relógio real da máquina).

Constantemente usado para simulações ou preenchimentos, a linguagem C forja algarismos estocásticos baseando-se essencialmente em uma "semente temporal" (o relógio exato do processamento).
```c
#include <stdlib.h>
#include <time.h>

int main() {
    // A alimentação temporal baseada na hora local é o suficiente para prover aleatoriedade
    srand(time(NULL)); 
    
    // rand() retorna valores absolutos longos. Utilizamos (%) para encapsular um limite. Ex (1 a 100):
    int numero_aleatorio = (rand() % 100) + 1;
    return 0;
}
```

---

---

# Questões
- [ ] `@multiplos` [Q01 - Faça um programa que determine o mostre os cinco primeiros múltiplos de 3, con...](./multiplos)
- [ ] `@somatorio` [Q02 - Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A pr...](./somatorio)
- [ ] `@tabuada` [Q03 - Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva...](./tabuada)
- [ ] `@pares` [Q04 - Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o d...](./pares)
- [ ] `@leitura` [Q05 - Faça um programa que peça ao usuário para digitar 10 valores e some-os.](./leitura)
- [ ] `@serie` [Q06 - Faça um programa que leia 10 inteiros e imprima sua média.](./serie)
- [ ] `@filtro` [Q07 - Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e im...](./filtro)
- [ ] `@menorseq` [Q08 - Escreva um programa que leia 10 números e escreva o menor valor lido e o maior...](./menorseq)
- [ ] `@fatorial` [Q09 - Faça um programa que leia um número inteiro N e depois imprima os N primeiros...](./fatorial)
- [ ] `@impares` [Q10 - Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.](./impares)
- [ ] `@subida` [Q11 - Faça um programa que leia um número inteiro positivo N e imprima todos os núm...](./subida)
- [ ] `@descida` [Q12 - Faça um programa que leia um número inteiro positivo N e imprima todos os núm...](./descida)
- [ ] `@contapares` [Q13 - Faça um programa que leia um número inteiro positivo par N e imprima todos os...](./contapares)
- [ ] `@interval` [Q14 - Faça um programa que leia um número inteiro positivo par N e imprima todos os...](./interval)
- [ ] `@paresasc` [Q15 - Faça um programa que leia um número inteiro positivo ı́mpar N e imprima todos...](./paresasc)
- [ ] `@imparesdesc` [Q16 - Faça um programa que leia um número inteiro positivo ı́mpar N e imprima todos...](./imparesdesc)
- [ ] `@somainterval` [Q17 - Faça um programa que leia um número inteiro positivo n e calcule a soma dos n...](./somainterval)
- [ ] `@posicao` [Q18 - Escreva um algoritmo que leia certa quantidade de números e imprima o maior del...](./posicao)
- [ ] `@algarismos` [Q19 - Escreva um algoritmo que leia um número inteiro entre 100 e 999 e imprima na sa...](./algarismos)
- [ ] `@fibonacci` [Q20 - Ler uma sequência de números inteiros e determinar se eles são pares ou não....](./fibonacci)
- [ ] `@fracao` [Q21 - Faça um programa que receba dois números. Calcule e mostre:](./fracao)
- [ ] `@turma` [Q22 - Escreva um programa completo que permita a qualquer aluno introduzir, pelo tecla...](./turma)
- [ ] `@divisores` [Q23 - Faca um algoritmo que leia um número positivo e imprima seus divisores.](./divisores)
- [ ] `@alternada` [Q24 - Escreva um programa que leia um número inteiro e calcule a soma de todos os div...](./alternada)
- [ ] `@harmonica` [Q25 - Faça um programa que some todos os números naturais abaixo de 1000 que são mu...](./harmonica)
- [ ] `@perfeitos` [Q26 - Faca um algoritmo que encontre o primeiro múltiplo de 11, 13 ou 17 após um nú...](./perfeitos)
- [ ] `@seriemat` [Q27 - Em Matemática, o número harmônico designado por H(n) define-se como sendo a s...](./seriemat)
- [ ] `@conforme` [Q28 - Faça um programa que leia um valor N inteiro e positivo, calcule o mostre o val...](./conforme)
- [ ] `@calcserie` [Q29 - Escreva um programa para calcular o valor da série, para 5 termos.](./calcserie)
- [ ] `@programas` [Q30 - Faça programas para calcular as seguintes sequências:](./programas)
- [ ] `@especial` [Q31 - Faça um programa que calcule e escreva o valor de S 1 3 5 7 99](./especial)
- [ ] `@dado` [Q32 - Faça um programa que simula o lançamento de dois dados, d1 e d2, n vezes, e te...](./dado)
- [ ] `@tresloop` [Q33 - Dados n e dois números inteiros positivos, i e j, diferentes de 0, imprimir em...](./tresloop)
- [ ] `@menorn` [Q34 - Faça um programa que calcule o menor número divisı́vel por cada um dos número...](./menorn)
- [ ] `@maiorn` [Q35 - Faça um programa que some os números impares contidos em um intervalo definido...](./maiorn)
- [ ] `@perfeito` [Q36 - Faça um programa que calcule a diferença entre a soma dos quadrados dos primei...](./perfeito)
- [ ] `@quadrados` [Q37 - Escreve um programa que verifique quais números entre 1000 e 9999 (inclusive) p...](./quadrados)
- [ ] `@pitagoras` [Q38 - Faça um programa que calcule o terno pitagórico a, b, c, para o qual a + b + c...](./pitagoras)
- [ ] `@arealoop` [Q39 - Faça um programa que calcule a área de um triângulo, cuja base e altura são...](./arealoop)
- [ ] `@estatistica` [Q40 - Elabore um programa que faça leitura de vários números inteiros, até que se...](./estatistica)
- [ ] `@calcloop` [Q41 - Faça um programa que calcula a associação em paralelo de dois resistores R1 e...](./calcloop)
- [ ] `@somaquad` [Q42 - Faça um programa que leia um conjunto não determinado de valores, um de cada v...](./somaquad)
- [ ] `@categoria` [Q43 - Faça um programa que leia um número indeterminado de idades de indivı́duos (pa...](./categoria)
- [ ] `@resumo` [Q44 - Leia um número positivo do usuário, então, calcule e imprima a sequência Fib...](./resumo)
- [ ] `@multa` [Q45 - Faça um algoritmo que converta uma velocidade expressa em km/h para m/s e vice...](./multa)
- [ ] `@menorcem` [Q46 - Faça um programa que gera um número aleatório de 1 a 1000. O usuário deve te...](./menorcem)
- [ ] `@menu` [Q47 - Faça um programa que apresente um menu de opções para o cálculo das seguinte...](./menu)
- [ ] `@paresloop` [Q48 - Faça um programa que some os termos de valor par da sequência de Fibonacci, cu...](./paresloop)
- [ ] `@salario` [Q49 - O funcionário chamado Carlos tem um colega chamado João que recebe um salário...](./salario)
- [ ] `@populacao` [Q50 - Chico tem 1.50 metro e cresce 2 centı́metros por ano, enquanto Zé tem 1.10 metr...](./populacao)
- [ ] `@folha` [Q51 - Um funcionário recebe aumento anual. Em 1995 foi contratado por 2000 reais. Em...](./folha)
- [ ] `@boletim` [Q52 - Escreva um programa que receba como entrada o valor do saque realizado pelo clie...](./boletim)
- [ ] `@piramide` [Q53 - Escreva um programa que leia um número inteiro positivo n e em seguida imprima...](./piramide)
- [ ] `@divmaior` [Q54 - Faça um programa que receba um número inteiro maior do que 1, e verifique se o...](./divmaior)
- [ ] `@naturais` [Q55 - Escreva um programa que leia um inteiro não negativo n e imprima a soma dos n p...](./naturais)
- [ ] `@potencias` [Q56 - Faça um programa que calcule a soma de todos os números primos abaixo de dois...](./potencias)
- [ ] `@digitos` [Q57 - Faça um programa que conte quantos números primos existem entre a e b, onde a...](./digitos)
- [ ] `@somadig` [Q58 - Faça um programa que some os números primos existentes entre a e b, onde a e b...](./somadig)
- [ ] `@maiordig` [Q59 - Escreva um programa que leia o número de habitantes de uma determinada cidade,...](./maiordig)
- [ ] `@atezero` [Q60 - Faça um programa que leia vários números, calcule e mostre:](./atezero)
- [ ] `@primofator` [Q61 - Faça um programa que calcule o maior número palı́ndromo feito a partir do prod...](./primofator)
- [ ] `@extenso` [Q62 - Se os números de 1 a 5 são escritos em palavras: um, dois, três, quatro, cinc...](./extenso)
