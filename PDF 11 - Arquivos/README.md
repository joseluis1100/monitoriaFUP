## 📖 Guia de Estudos (Arquivos### Módulo 12: Arquivos e Persistência de Dados

Para evitar a desqualificação de informações colhidas em processamentos isolados efêmeros de RAM, o uso intensivo de gravadores de dados contínuos sistêmicos abrigados num arquivo sólido externo torna-se o modelo fundamental adotado por arquivos do computador. O tráfego abotoado é intermediado com predefinições relativas ao macroestrutural comando file (*FILE \**) e o operador referencial condizente `fopen`.

A manipulação abrangerá:
- `r` - Abertura base puramente dedicada ao caráter exclusivista restrito de Leitura Estrita (*Read*).
- `w` - Conduta incisiva de Criação ou Reescrutínio gravado apagando o rastreio base se porventura existir (*Write*).
- `a` - Modelagem construtiva Aditiva agregada à fenda ou rodopé referencial subjacente atual do arquivo (*Append*).

```c
FILE *arq = fopen("bancoConfigurativo.txt", "w");
if (arq != NULL) {
    fprintf(arq, "Registro formal protocolado com sufixação temporal: %d\n", 2024);
    fclose(arq); // Compulsório o selamento da etapa sistêmica com o intuito focado em limpeza de Buffers inconstantes pendentes.
}
```
Existem funções adequadas para ler bloco por bloco `fread()`, iterar por fluxos paritários `fseek()` e interagir com estruturas formativadas em matriz linear binária restrita.

#### 12.1 Leitura até o Fim de Arquivo (EOF)
Listas extensas que envolvem leitura de blocos sistêmicos requerem em geral contadores que encerram abruptamente quando topam com o marcador especial subjacente em arquivos.  
Podemos empregar a função `feof(arq)` nas repetições, ou simplesmente testar o retorno do formato principal comparativamente ao `EOF`.
```c
char caractere;
// Enquanto a busca retornar elementos absolutos que não representam Final-Lógico-Físico-De-Arquivo
while ( (caractere = fgetc(arq)) != EOF ) { 
    printf("%c", caractere);
}
```

---

## 🚨 Guia Prático para Validação no Moodle

Ao submeter seus códigos no Moodle é essencial seguir algumas regras de formatação. O sistema avalia a saída exata do seu programa, comparando-a com o gabarito. Portanto, evite os erros mais comuns:

> 🟩 **Regra 1: Evite Mensagens Interativas (Presentation Error / Wrong Answer)**
O sistema de correção do Moodle não simula um usuário humano lendo explicações na tela. Evite incluir textos interativos no seu `printf` ou `scanf`, como `printf("Digite um número: ");` ou `printf("O resultado é: %d", res);`. O corretor automático espera apenas os dados exigidos pela questão, no formato especificado. Submeta respostas diretas. 
Exemplo correto: `printf("%d\n", res);`. Textos adicionais causarão erro na validação, mesmo que a sua lógica matemática esteja perfeitamente correta.

> 🟥 **Regra 2: Cuidado com Loops Infinitos (Time Limit Exceeded - TLE)**
Ao estruturar laços de repetição, especialmente o comando `while`, certifique-se de que a condição de parada será atingida adequadamente durante a execução. Um erro comum para iniciantes é esquecer de atualizar a variável de controle da iteração dentro do laço. Por exemplo, ao testar uma variável em `while (X != 0)`, não se esqueça de incluí-la em uma nova instrução de leitura (`scanf`) no final do bloco do laço. A ausência dessa atualização fará o programa rodar indefinidamente numa mesma condição estática, estourando o limite de tempo estipulado pelo servidor (o temido TLE).

> 🔥 **Regra 3: A Quebra de Linha Final (`\n`)**
Em muitos sistemas (incluindo as rotinas baseadas em Unix/Linux nas quais validadores online rodam), a convenção padrão é que o processamento imprima o resultado e conclua com uma linha em branco. Por isso, garanta a adição de um caractere de quebra de linha (`\n`) em seu último `printf`. A falta deste caractere pode ocasionalmente reprovar sua pontuação por meras diferenças de alinhamento visual em relação ao gabarito do sistema.

---

# Questões
- [ ] `@escreve` [Q01 - Escreva um programa que:](./escreve)
- [ ] `@exibe` [Q02 - Faça um programa que receba do usuário um arquivo texto e mostre na tela quant...](./exibe)
- [ ] `@linhasarq` [Q03 - Faça um programa que receba do usuário um arquivo texto e mostre na tela quant...](./linhasarq)
- [ ] `@copiaarq` [Q04 - Faça um programa que receba do usuário um arquivo texto e mostre na tela quant...](./copiaarq)
- [ ] `@palavrasarq` [Q05 - Faça um programa que receba do usuário um arquivo texto e um caracter. Mostre...](./palavrasarq)
- [ ] `@buscaarq` [Q06 - Faça um programa que receba do usuário um arquivo texto e mostre na tela quant...](./buscaarq)
- [ ] `@substituiarq` [Q07 - Faça um programa que receba do usuário um arquivo texto. Crie outro arquivo te...](./substituiarq)
- [ ] `@upperarq` [Q08 - Faça um programa que leia o conteúdo de um arquivo e crie um arquivo com o mes...](./upperarq)
- [ ] `@merge` [Q09 - Faça um programa que receba dois arquivos do usuário, e crie um terceiro arqui...](./merge)
- [ ] `@nomearq` [Q10 - Faça um programa que receba o nome de um arquivo de entrada e outro de saı́da....](./nomearq)
- [ ] `@infoarq` [Q11 - Faça um programa no qual o usuário informa o nome do arquivo e uma palavra, e...](./infoarq)
- [ ] `@leitura` [Q12 - Abra um arquivo texto, calcule e escreva o número de caracteres, o número de l...](./leitura)
- [ ] `@entradasaida` [Q13 - Faça um programa que permita que o usuário entre com diversos nomes e telefone...](./entradasaida)
- [ ] `@dataarq` [Q14 - Dado um arquivo contendo um conjunto de nome e data de nascimento (DD MM AAAA, i...](./dataarq)
- [ ] `@idadearq` [Q15 - Faça um programa que receba como entrada o ano corrente e o nome de dois arquiv...](./idadearq)
- [ ] `@numeros` [Q16 - Faça um programa que recebe um vetor de 10 números, converta cada um desses nu...](./numeros)
- [ ] `@binarioarq` [Q17 - Faça um programa que leia um arquivo que contenha as dimensões de uma matriz (...](./binarioarq)
- [ ] `@lebinario` [Q18 - Faça um programa que leia um arquivo contendo o nome e o preço de diversos pro...](./lebinario)
- [ ] `@maiorarq` [Q19 - Faça um programa que receba do usuário um arquivo que contenha o nome e a nota...](./maiorarq)
- [ ] `@notasarq` [Q20 - Crie um programa que receba como entrada o número de alunos de uma disciplina....](./notasarq)
- [ ] `@registroarq` [Q21 - Crie um programa que receba como entrada o número de alunos de uma disciplina....](./registroarq)
- [ ] `@boletimarq` [Q22 - Faça um programa que recebe como entrada o nome de um arquivo de entrada e o no...](./boletimarq)
- [ ] `@filtraarq` [Q23 - Escreva um programa que leia a profissão e o tempo de serviço (em anos) de cad...](./filtraarq)
- [ ] `@controle` [Q24 - Implemente um controle simples de mercadorias em uma despensa doméstica. Para c...](./controle)
- [ ] `@banco` [Q25 - Faça um programa gerenciar uma agenda de contatos. Para cada contato armazene o...](./banco)
- [ ] `@contatos` [Q26 - Crie um programa que declare uma estrutura para o cadastro de alunos.](./contatos)
- [ ] `@relatorio` [Q27 - Faça um programa para gerenciar as notas dos alunos de uma turma salva em um ar...](./relatorio)
- [ ] `@processa` [Q28 - Faça um programa que recebe como entrada o nome de um arquivo de entrada e o no...](./processa)
- [ ] `@vendasarq` [Q29 - Codifique um programa que manipule um arquivo contendo registros descritos pelos...](./vendasarq)
