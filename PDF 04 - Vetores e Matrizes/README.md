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
- [ ] `q01` [Q01 - 1. Faça um programa que possua um vetor denominado A que armazene 6 numeros ...](./Vetores/vetor_atribuicao)
- [ ] `q02` [Q02 - 2. Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela o...](./Vetores/mostrar_6_valores)
- [ ] `q03` [Q03 - 3. Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quad...](./Vetores/quadrado_vetor)
- [ ] `q04` [Q04 - 4. Faça um programa que leia um vetor de 8 posicoes e, em seguida, leia tamb...](./Vetores/soma_xy)
- [ ] `q05` [Q05 - 5. Leia um vetor de 10 posicoes. Contar e escrever quantos valores pares ele ...](./Vetores/contar_pares)
- [ ] `q06` [Q06 - 6. Faça um programa que receba do usuario um vetor com 10 posicoes. Em segui...](./Vetores/maior_menor_elemento)
- [ ] `q07` [Q07 - 7. Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor...](./Vetores/maior_e_posicao)
- [ ] `q08` [Q08 - 8. Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela o...](./Vetores/ordem_inversa)
- [ ] `q09` [Q09 - 9. Crie um programa que le 6 valores inteiros pares e, em seguida, mostre na ...](./Vetores/pares_ordem_inversa)
- [ ] `q10` [Q10 - 10. Faça um programa para ler a nota da prova de 15 alunos e armazene num ve...](./Vetores/media_15_alunos)
- [ ] `q11` [Q11 - 11. Faça um programa que preencha um vetor com 10 numeros reais, calcule e m...](./Vetores/negativos_e_soma_positivos)
- [ ] `q12` [Q12 - 12. Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valo...](./Vetores/max_min_media)
- [ ] `q13` [Q13 - 13. Fazer um programa para ler 5 valores e, em seguida, mostrar a posicao ond...](./Vetores/posicao_max_min)
- [ ] `q14` [Q14 - 14. Faça um programa que leia um vetor de 10 posicoes e verifique se existem...](./Vetores/encontrar_duplicatas)
- [ ] `q15` [Q15 - 15. Leia um vetor com 20 numeros inteiros. Escreva os elementos do vetor elim...](./Vetores/eliminar_repetidos)
- [ ] `q16` [Q16 - 16. Faça um programa que leia um vetor de 5 posicoes para numeros reais e, d...](./Vetores/codigo_ordem)
- [ ] `q17` [Q17 - 17. Leia um vetor de 10 posicoes e atribua valor 0 para todos os elementos qu...](./Vetores/zerar_negativos)
- [ ] `q18` [Q18 - 18. Faça um programa que leia um vetor de 10 numeros. Leia um numero x. Cont...](./Vetores/multiplos_de_x)
- [ ] `q19` [Q19 - 19. Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i+ 5 ∗ i)%...](./Vetores/preenche_formula)
- [ ] `q20` [Q20 - 20. Escreva um programa que leia numeros inteiros no intervalo [0,50] e os ar...](./Vetores/vetor_impares)
- [ ] `q21` [Q21 - 21. Faça um programa que receba do usuario dois vetores, A e B, com 10 numer...](./Vetores/subtracao_vetores)
- [ ] `q22` [Q22 - 22. Faça um programa que leia dois vetores de 10 posicoes e calcule outro ve...](./Vetores/mescla_vetores)
- [ ] `q23` [Q23 - 23. Ler dois conjuntos de numeros reais, armazenando-os em vetores e calcular...](./Vetores/produto_escalar_vetores)
- [ ] `q24` [Q24 - 24. Faça um programa que leia dez conjuntos de dois valores, o primeiro repr...](./Vetores/alturas_alunos)
- [ ] `q25` [Q25 - 25. Faça um programa que preencha um vetor de tamanho 100 com os 100 primeir...](./Vetores/naturais_nao_multiplos_7)
- [ ] `q26` [Q26 - 26. Faça um programa que calcule o desvio padrao de um vetor v contendo n = ...](./Vetores/desvio_padrao)
- [ ] `q27` [Q27 - 27. Leia 10 numeros inteiros e armazene em um vetor. Em seguida escreva os el...](./Vetores/elementos_primos)
- [ ] `q28` [Q28 - 28. Leia 10 numeros inteiros e armazene em um vetor v. Crie dois novos vetore...](./Vetores/separa_pares_impares)
- [ ] `q29` [Q29 - 29. Faça um programa que receba 6 numeros inteiros e mostre: • Os numeros pa...](./Vetores/estatisticas_pares_impares)
- [ ] `q30` [Q30 - 30. Faça um programa que leia dois vetores de 10 elementos. Crie um vetor qu...](./Vetores/intersecao_vetores)
- [ ] `q31` [Q31 - 31. Faça um programa que leia dois vetores de 10 elementos. Crie um vetor qu...](./Vetores/uniao_vetores)
- [ ] `q32` [Q32 - 32. Leia dois vetores de inteiros x e y, cada um com 5 elementos (assuma que ...](./Vetores/operacoes_x_y)
- [ ] `q33` [Q33 - 33. Faça um programa que leia um vetor de 15 posicoes e o compacte, ou seja,...](./Vetores/compactar_vetor)
- [ ] `q34` [Q34 - 34. Faça um programa para ler 10 numeros DIFERENTES a serem armazenados em u...](./Vetores/ler_diferentes)
- [ ] `q35` [Q35 - 35. Faça um programa que leia dois numeros a e b (positivos menores que 1000...](./Vetores/soma_algarismos_vetor)
- [ ] `q36` [Q36 - 36. Leia um vetor com 10 numeros reais, ordene os elementos deste vetor, e no...](./Vetores/ordenar_vetor)
- [ ] `q37` [Q37 - 37. Considere um vetor A com 11 elementos onde A1 < A2 < ... < A6 > A7 > A8 >...](./Vetores/ordenacao_pico)
- [ ] `q38` [Q38 - 38. Peca ao usuario para digitar dez valores numericos e ordene por ordem cre...](./Vetores/ordenar_insercao)
- [ ] `q39` [Q39 - 39. Escreva um programa que leia um numero inteiro positivo n e em seguida im...](./Vetores/triangulo_pascal)
