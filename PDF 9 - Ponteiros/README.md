## 📖 Guia de Estudos (Ponteiros### Módulo 10: Introdução aos Ponteiros

Uma das construções arquitetônicas mais icônicas da linguagem C. Diferentemente de uma variável fundamental que alicerça os conteúdos estáticos computacionais lógicos, um **Ponteiro** acomoda especificamente um _Endereço Numérico de Memória Física_ para alguma localização de sistema predefinida.

A sintaxe condicional de criação utiliza um `*`. O vínculo real relacional no assinalamento exige do ponteiro base buscar a notação restrita de endereço (`&`).

```c
int valor = 10;
int *ponteiro_p = &valor;

// Para reescrever logicamente algo com precisão alterando diretamente a memória que o ponteiro aponta:
*ponteiro_p = 25;
// Imediatamente o campo "valor" primitivo passa a denotar valor = 25.
```

Os ponteiros abrem portas vitais também ao funcionamento de repasse de argumentos em funções ativando efetivamente a "Passagem por Referência" com extrema formalidade.

---

---

# Questões
- [ ] `@ponteiro` [Q01 - Escreva um programa que declare um inteiro, um real e um char, e ponteiros para...](./ponteiro)
- [ ] `@pmaior` [Q02 - Escreva um programa que contenha duas variáveis inteiras. Compare seus endereç...](./pmaior)
- [ ] `@pmaximo` [Q03 - Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis...](./pmaximo)
- [ ] `@pswap` [Q04 - Faça um programa que leia 2 valores inteiros e chame uma função que receba es...](./pswap)
- [ ] `@pextremos` [Q05 - Faça um programa que leia dois valores inteiros e chame uma função que receba...](./pextremos)
- [ ] `@pproduto` [Q06 - Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça um...](./pproduto)
- [ ] `@pordena` [Q07 - Crie um programa que contenha uma função que permita passar por parâmetro doi...](./pordena)
- [ ] `@pdivisao` [Q08 - Crie um programa que contenha um array de float contendo 10 elementos. Imprima o...](./pdivisao)
- [ ] `@pmedia` [Q09 - Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas....](./pmedia)
- [ ] `@pcelsius` [Q10 - Crie um programa que contenha um array de inteiros contendo 5 elementos. Utiliza...](./pcelsius)
- [ ] `@parea` [Q11 - Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse...](./parea)
- [ ] `@pmenorvet` [Q12 - Faça um programa que leia três valores inteiros e chame uma função que receb...](./pmenorvet)
- [ ] `@pestat` [Q13 - Elabore uma função que receba duas strings como parâmetros e verifique se a s...](./pestat)
- [ ] `@pinverte` [Q14 - Crie uma função que receba dois parâmetros: um array e um valor do mesmo tipo...](./pinverte)
- [ ] `@pordvet` [Q15 - Crie uma função que receba como parâmetro um array e o imprima. Não utilize...](./pordvet)
- [ ] `@paluno` [Q16 - Considere a seguinte declaração: int A, *B, **C, ***D; Escreva um programa que...](./paluno)
- [ ] `@pbuscastr` [Q17 - Escreva uma função que dado um número real passado como parâmetro, retorne a...](./pbuscastr)
- [ ] `@pfiguras` [Q18 - Implemente uma função que calcule a área da superfı́cie e o volume de uma esf...](./pfiguras)
- [ ] `@pmaiorstr` [Q19 - Escreva uma função que aceita como parâmetro um array de inteiros com N valor...](./pmaiorstr)
- [ ] `@pconcat` [Q20 - Implemente uma função que receba como parâmetro um array de números reais de...](./pconcat)
- [ ] `@palloc` [Q21 - Escreva um programa que declare um array de inteiros e um ponteiro para inteiros...](./palloc)
- [ ] `@pcopia` [Q22 - Crie uma função para somar dois arrays. Esta função deve receber dois arrays...](./pcopia)
- [ ] `@pmaiorelem` [Q23 - Escreva uma função que retorna o maior valor de um array de tamanho N. Escreva...](./pmaiorelem)
- [ ] `@pcallback` [Q24 - Escreva uma função que receba um array de inteiros V e os endereços de duas v...](./pcallback)
- [ ] `@pnotas` [Q25 - Faça um programa que possua uma função para](./pnotas)
- [ ] `@newton` [Q26 - Implemente uma função que calcule as raı́zes de uma equação do segundo grau...](./newton)
