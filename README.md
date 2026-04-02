# 📚 Repositório de Fundamentos de Programação (Linguagem C)

Seja bem-vindo(a) ao seu acervo de estudos e práticas em Linguagem C. Este ambiente foi estruturado para abrigar a resolução de problemas algorítmicos e lógicos, funcionando como uma base de conhecimento para estudantes da disciplina.

Neste modelo, a teoria e a sintaxe da linguagem não ficam amontoadas em um único arquivo. Pelo contrário: **cada diretório de exercícios possui o seu próprio Guia de Estudos (Teoria).** Isso garante que você só consuma os comandos e bibliotecas estritamente no momento em que precisar deles para resolver a lista correspondente!

---

## 🗂️ Navegação do Repositório (Apostilas e Exercícios)

> **💡 Manual de Uso:** Navegue pelos diretórios abaixo. Ao abrir o `README.md` de cada pasta, você encontrará primeiro a explicação teórica da matéria (*Tutorial*) e logo abaixo a lista de enunciados práticos correspondentes.

- [📂 **PDF 01** - Variáveis, Matemática e Expressões](./PDF%2001%20-%20Variaveis%20e%20Expressoes/)
- [📂 **PDF 02** - Comandos Condicionais e Tomada de Decisão](./PDF%2002%20-%20Comandos%20Condicionais/)
- [📂 **PDF 03** - Comandos de Repetição e Iterações](./PDF%2003%20-%20Comandos%20de%20Repeticao/)
- [📂 **PDF 04** - Estruturas Homogêneas Unidimensionais e Multidimensionais (Vetores e Matrizes)](./PDF%2004%20-%20Vetores%20e%20Matrizes/)
- [📂 **PDF 05** - Caracteres Isolados e Cadeias de Textos (Strings)](./PDF%2005%20-%20Strings/)
- [📂 **PDF 06** - Agrupamento e Estruturas Heterogêneas (Structs)](./PDF%2006%20-%20Structs/)
- [📂 **PDF 07** - Modularização, Escopo e Funções](./PDF%2007%20-%20Funcoes)
- [📂 **PDF 08** - Complexidade e Recursividade](./PDF%2008%20-%20Recursao)
- [📂 **PDF 09** - Referências na Memória e Ponteiros](./PDF%2009%20-%20Ponteiros)
- [📂 **PDF 10** - Alocação Dinâmica de Memória (RAM)](./PDF%2010%20-%20Alocacao%20Dinamica)
- [📂 **PDF 11** - Banco de Dados Texto e Binários (Arquivos)](./PDF%2011%20-%20Arquivos)

---

## 🚨 Guia Definitivo de Sobrevivência no Moodle / VPL

Ao submeter seus códigos em plataformas de correção automática rigorosas (como o VPL no Moodle), muitos estudantes se frustram por receberem notas zeradas mesmo com seus códigos rodando perfeitamente em seus computadores. 

O sistema avalia a saída *exata* do seu programa, comparando-a bit a bit com o gabarito. Siga estas leis sagradas para não perder pontos de bobeira:

> 🟩 **Regra 1: Evite Mensagens Interativas (Presentation Error / Wrong Answer)**  
> O sistema de correção corporativo não simula um usuário humano. Nunca inclua textos interativos no seu `printf` para embelezar o terminal, como `printf("Digite um número: ");` ou `printf("O resultado é: %d", res);`. O corretor robô espera ver **apenas o dado cru**. 
> Exemplo correto: `printf("%d\n", res);`. Textos adicionais quebrarão a semântica da comparação.

> 🟥 **Regra 2: Estouro de Tempo e Loops Infinitos (Time Limit Exceeded - TLE)**  
> Ao construir laços de repetição (principalmente o comando `while`), um erro comum para iniciantes é esquecer de atualizar a variável de controle da iteração dentro do laço. Por exemplo, ao varrer um arquivo com `while`, se você não possuir um `scanf` dentro do laço para pular o cursor, o código rodará infinitamente testando o mesmo valor estático. O servidor mata o seu processo e zera sua nota por estourar o limite de 2 segundos.

> 🔥 **Regra 3: A Obrigação da Quebra de Linha Final (`\n`)**  
> Os validadores rodam em servidores invisíveis baseados nativamente em Linux. A grande e severa convenção de arquivos em Linux dita que a última coisa impressa na tela deve SEMPRE ser seguida de uma linha em branco. Se o seu programa omitir o `\n` no último `printf`, isso gera acúmulo no buffer do Bash e você levará um erro de apresentação. Finalizou o código? Pule a linha.

> 🗑️ **Regra 4: O "Lixo de Memória" em Variáveis de Soma (Wrong Answer Aleatório)**  
> Variáveis em C não nascem valendo `0`. Elas nascem com o conteúdo embaralhado que já existia flutuando fisicamente no pente de memória do servidor do Moodle. Se você declarar `int soma;` e depois dentro de um loop fizer `soma = soma + valor;`, a plataforma poderá usar "39485" + valor. **Sempre limpe variáveis contadoras e somadoras na raiz:** `int soma = 0;`.

> ⚙️ **Regra 5: Retorno Fundamental do Sistema (Runtime Error)**  
> Todo programa oficial deve ser extinto comunicando ao Sistema Operacional que a execução não gerou curtos-circuitos. Para o validador do Moodle, se a sua função `main` terminar subitamente ou com um "return 1", ele assume que a máquina virtual *"crashou"* durante a matemática e joga sua nota no chão. Finalize inexoravelmente estruturando `return 0;` antes da última chave.

> 📏 **Regra 6: Precisão Milimétrica Estipulada (Formatação de Floats)**  
> Quando uma lista pedir "Apresente o resultado com duas casas decimais", o Moodle reprovará absolutamente um log com "10.500000" (que é o padrão intrínseco do tipo ponto-flutuante). Você deve intervir artificialmente através da máscara do printf usando `%.2f` para trincar a formatação de exibição. Leia os enunciados com atenção!
