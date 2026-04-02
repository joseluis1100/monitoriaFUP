## 📖 Guia de Estudos (Comandos Condicionais### Módulo 4: Comandos Condicionais e Controle de Fluxo

Os operadores condicionais promovem as lógicas baseadas em sentenças booleanas (`0` sendo Falso, e algo diverso de `0` sendo assumido como Verdadeiro).

#### 4.1 Operadores de Comparação e Operadores Lógicos
Na comparação, cuidado com a estrutura do comando:  `=` atribui e altera o valor de variáveis, já o `==` verifica puramente se existe igualdade matemática. Os operadores lógicos formam sentenças complexas:
- **`&&` (AND):** Retorna verdadeiro quando toda a sentença for verdadeira simultaneamente.
- **`||` (OR):** Basta uma parte relacional ser correta para avançar positivamente no escopo de checagem.
- **`!` (NOT):** Reverte a proposição relacional de verdadeiro para falso, e vice-versa.

#### 4.2 O Comando `if - else if - else`
A verificação sistemática na análise de dados avança linha-a-linha.
```c
if (nota >= 7.0) {
    printf("Aprovado.\n");
} 
else if (nota >= 5.0) {
    printf("Recuperação pendente.\n");
} 
else {
    printf("Reprovado integralmente.\n");
}
```

#### 4.3 O Comando `switch - case`
Extremamente valioso para analisar menu de opções estritas, onde as variáveis assumem condições fechadas em casos lógicos inteiros ou de tipo `char`. 
Lembre-se SEMPRE de utilizar a cláusula `break;` ao término do processamento de um `case`, garantindo que casos sucessivos mais abaixo não transbordem por *fall-through*.

#### 4.4 Operador Ternário (`? :`)
Uma forma concisa, recomendada estritamente para sintaxes reduzidas, combinando em suma `(Condição) ? Verdadeiro : Falso;`

---

---

# Questões
- [ ] `@maior` [Q01 - Maior de dois números](./maior)
- [ ] `@raiz` [Q02 - Raiz se positivo](./raiz)
- [ ] `@raizval` [Q03 - Raiz com validação](./raizval)
- [ ] `@absoluto` [Q04 - Valor absoluto](./absoluto)
- [ ] `@paridade` [Q05 - Par ou ímpar](./paridade)
- [ ] `@maximo` [Q06 - Maior de três](./maximo)
- [ ] `@ordena` [Q07 - Ordena três números](./ordena)
- [ ] `@aprovacao` [Q08 - Média e aprovação](./aprovacao)
- [ ] `@percentual` [Q09 - Reajuste percentual](./percentual)
- [ ] `@peso` [Q10 - Peso ideal por altura](./peso)
- [ ] `@maioralt` [Q11 - Maior de dois (v2)](./maioralt)
- [ ] `@sinal` [Q12 - Positivo ou negativo](./sinal)
- [ ] `@dupla` [Q13 - Média de duas notas](./dupla)
- [ ] `@conceito` [Q14 - Média com conceito](./conceito)
- [ ] `@semana` [Q15 - Dia da semana](./semana)
- [ ] `@mes` [Q16 - Mês por extenso](./mes)
- [ ] `@figuras` [Q17 - Área de figuras geométricas](./figuras)
- [ ] `@calc` [Q18 - Calculadora com menu](./calc)
- [ ] `@divisivel` [Q19 - Divisível por 3 ou 5](./divisivel)
- [ ] `@triangulo` [Q20 - Tipo de triângulo](./triangulo)
- [ ] `@calcswitch` [Q21 - Calculadora switch](./calcswitch)
- [ ] `@aposenta` [Q22 - Pode se aposentar?](./aposenta)
- [ ] `@bissexto` [Q23 - Ano é bissexto?](./bissexto)
- [ ] `@imposto` [Q24 - Imposto por estado](./imposto)
- [ ] `@bhaskara` [Q25 - Equação de segundo grau](./bhaskara)
- [ ] `@consumo` [Q26 - Consumo de combustível](./consumo)
- [ ] `@nadador` [Q27 - Categoria do nadador](./nadador)
- [ ] `@medias` [Q28 - Tipos de média](./medias)
- [ ] `@quiz` [Q29 - Quiz de soma aleatória](./quiz)
- [ ] `@crescente` [Q30 - Ordena em crescente](./crescente)
- [ ] `@tabela` [Q31 - Tabela peso x altura](./tabela)
- [ ] `@lanchonete` [Q32 - Cardápio da lanchonete](./lanchonete)
- [ ] `@aumento` [Q33 - Aumento e classificação](./aumento)
- [ ] `@faltas` [Q34 - Conceito com faltas](./faltas)
- [ ] `@data` [Q35 - Valida uma data](./data)
- [ ] `@comissao` [Q36 - Comissão sobre vendas](./comissao)
- [ ] `@parking` [Q37 - Estacionamento por hora](./parking)
- [ ] `@datalimite` [Q38 - Valida data com limite](./datalimite)
- [ ] `@faixa` [Q39 - Reajuste por faixa salarial](./faixa)
- [ ] `@carro` [Q40 - Preço final do carro](./carro)
- [ ] `@imc` [Q41 - Calculando o IMC](./imc)
