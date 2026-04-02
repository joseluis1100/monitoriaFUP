## 📖 Guia de Estudos (Structs### Módulo 8: Estruturas Declaradas pelo Programador (Structs)

As "Estruturas Heterogêneas" englobam de forma semântica um corpo completo coeso que unifica sob uma denominação abrangente primitivos com múltiplos formatos (`char`, `int`, etc).

```c
typedef struct {
    char nome[50];
    int idade;
    float notas[3];
} Aluno;

int main() {
    Aluno registroBase;
    
    // O Acesso isolado aos componentes nativos ocorre via uso do operador '.'
    registroBase.idade = 20;
    return 0;
}
```

---

---

# Questões
- [ ] `@horario` [Q01 - Escreva um trecho de código para fazer a criação dos novos tipos de dados con...](./horario)
- [ ] `@idadest` [Q02 - Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e ar...](./idadest)
- [ ] `@ponto` [Q03 - Construa uma estrutura aluno com nome, número de matrı́cula e curso. Leia do us...](./ponto)
- [ ] `@aluno` [Q04 - Crie uma estrutura representando os alunos de um determinado curso. A estrutura...](./aluno)
- [ ] `@vetor3d` [Q05 - Considerando a estrutura](./vetor3d)
- [ ] `@turma_st` [Q06 - Faça um programa que realize a leitura dos seguintes dados relativos a um conju...](./turma_st)
- [ ] `@polar` [Q07 - Faça um programa que converta coordenadas polares para cartesianas:](./polar)
- [ ] `@ficha` [Q08 - Faça um programa que armazene em um registro de dados (estrutura composta) os d...](./ficha)
- [ ] `@complexos` [Q09 - Faça um programa que faça operações simples de números complexos:](./complexos)
- [ ] `@pessoas` [Q10 - Utilizando uma estrutura, faça um programa que permita a entrada de nome, ender...](./pessoas)
- [ ] `@classe` [Q11 - Faça um programa que leia os dados de 10 alunos (Nome, matricula, Média Final)...](./classe)
- [ ] `@cartas` [Q12 - Escolha um jogo de cartas, baseado em um “baralho tradicional” (cada carta tem s...](./cartas)
- [ ] `@pessoais` [Q13 - Peça ao usuário para digitar seus dados pessoais (Nome, Endereço, Data de Nas...](./pessoais)
- [ ] `@garagem` [Q14 - Faça um programa que leia um vetor com os dados de 5 carros: marca (máximo 15...](./garagem)
- [ ] `@livros` [Q15 - Faça um programa que leia um vetor com dados de 5 livros: tı́tulo (máximo 30 l...](./livros)
- [ ] `@agenda` [Q16 - Faça um programa que seja uma agenda de compromissos e:](./agenda)
- [ ] `@energia` [Q17 - Faça um programa que controla o consumo de energia dos eletrodomésticos de uma...](./energia)
- [ ] `@estoque` [Q18 - Faça um programa que gerencie o estoque de um mercado e:](./estoque)
- [ ] `@voos` [Q19 - Faça um programa que controle o fluxo de vôos nos aeroportos de um paı́s. Com...](./voos)
- [ ] `@receitas` [Q20 - Faça um programa para armazenar um livro de receitas e:](./receitas)
- [ ] `@filmes` [Q21 - Faça um programa que armazena filmes produzidos por vários diretores e:](./filmes)
- [ ] `@aninhada` [Q22 - Definir a estrutura cuja representação gráfica é dada a seguir, definir os c...](./aninhada)
- [ ] `@diasentre` [Q23 - Escreva um programa que receba dois structs do tipo dma, cada um representando u...](./diasentre)
- [ ] `@telefone` [Q24 - Fazer um programa para simular uma agenda de telefones. Para cada pessoa devem-s...](./telefone)
