# Questões do PDF

### 1. Faça um programa que leia um número inteiro e o imprima.
```c
#include <stdio.h>

int main() {
    int x;
    //scanf exige "%(tipo da variável)", &(variável)
    //%d é usado para inteiros
    scanf("%d", &x);
    //no printf a cada %(tipo da variável) encontrado 
    //dentro das aspas, uma varível irá substituí-lo 
    //na ordem que é dada.
    printf("%d\n", x);
    return 0;
}

```

### 2. Faça um programa que leia um número real e o imprima.

```c
#include <stdio.h>

int main() {
    float x;
    //%f é usado para float(números com casa decimal)
    scanf("%f", &x);
    printf("%f\n", x);
    return 0;
}

```

### 3. Peça ao usuário para digitar três valores inteiros e imprima a soma deles.

```c
#include <stdio.h>

int main() {
    //variáveis de mesmo tipo podem ser declaradas na mesma linha
    int valor1, valor2, valor3;
    //scanf de multiplas variáveis pode ser feito assim
    scanf("%d %d %d", &valor1, &valor2, &valor3);
    //é possível iniciar uma variável com um valor
    int soma = valor1 + valor2 + valor3;
    printf("%d\n", soma);
    return 0;
}

```

### 4. Leia um número real e imprima o resultado do quadrado desse número.

```c
#include <stdio.h>
//OPCIONAL: importar biblioteca math.h para usar a função de potencia
#include <math.h>

int main() {
    float x;
    scanf("%f", &x);
    //pow exige 2 parâmetros, base e expoente
    float quadrado = pow(x, 2);
    printf("%f\n", quadrado);
    return 0;
}

```

### 5. Leia um numero real e imprima a quinta parte desse numero.

```c
#include <stdio.h>

int main() {
    float x;
    scanf("%f", &x);

    // Quando uma expressão mistura tipos: int e float, em C, o int é convertido para float para evitar perda de precisão.
    // Nessa questão, X é float e 5 int, logo esse resultado será um float.
    float quinta_parte = x / 5.0;
    printf("%f\n", quinta_parte);

    return 0;
    /* Caso aconteça de serem duas variáveis int e você deseje que o resultado seja um float, 
    basta converter apenas uma das variáveis (cast), que o restante da expressão também será convertida para float.
    EX:
    int x = 11;
    int y = 2;
    float divisao = (float) x / y; // resultado = 5.50000
    */
}

```

### 6. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A fórmula de conversão é: F = C ∗(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

```c
#include <stdio.h>

int main() {
    //declarado em float para aceitar casas decimais
    float c;
    scanf("%f", &c);
    //colocado "(9.0/5.0)" para indicar valor float, retornando 1.8 ao invés de 1 (evita a divisão inteira)
    float f = c * (9.0/5.0) + 32;
    printf("%f\n", f);
    return 0;
}

```

### 7. Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius. A formula de conversão é: C = 5.0 ∗ (F − 32.0)/9.0, sendo C a temperatura em Celsius e F a temperatura em Fahrenheit.

```c
#include <stdio.h>

int main() {
    float F;
    scanf("%f", &F);

    // Parênteses necessários! Sem eles, a multiplicação e divisão seriam feitas primeiro (hierarquia matemática).
    float C = 5.0 * (F - 32.0) / 9.0;
    printf("%f\n", C);
    return 0;
}

```

### 8. Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A fórmula de conversão é: C = K − 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.

```c
#include <stdio.h>

int main() {
    float k;
    scanf("%f", &k);
    float c = k - 273.15;
    printf("%f\n", c);
    return 0;
}

```

### 9. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A formula de conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.

```c
#include <stdio.h>

int main() {
    float C;
    scanf("%f", &C);

    float K = C + 273.15;
    printf("%f\n", K);
    return 0;
}

```

### 10. Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s(metros por segundo). A fórmula de conversão é: M = K/3.6, sendo K a velocidade em km/h e M em m/s.

```c
#include <stdio.h>

int main() {
    float k;
    scanf("%f", &k);
    float m = k/3.6;
    printf("%f\n", m);
    return 0;
}

```

### 11. Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h (quilometros por hora). A fórmula de conversão é: K = M ∗ 3.6, sendo K a velocidade em km/h e M em m/s.

```c
#include <stdio.h>

int main() {
    float M;
    scanf("%f", &M);

    float K = M * 3.6;
    printf("%f\n", K);
    return 0;
}

```

### 12. Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de conversão é: K = 1,61 ∗ M , sendo K a distância em quilômetros e M em milhas.

```c
#include <stdio.h>

int main() {
    float m;
    scanf("%f", &m);
    float k = 1.61 * m;
    printf("%f\n", k);
    return 0;
}

```

### 13. Leia uma distancia em quilômetros e apresente-a convertida em milhas. A fórmula de conversão é: M = K / 1.61 , sendo K a distancia em quilômetros M em milhas.

```c
#include <stdio.h>

int main() {
    float K;
    scanf("%f", &K);

    float M = K / 1.61;
    printf("%f\n", M);
    return 0;
}

```

### 14. Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é: R = G ∗ π/180, sendo G o ângulo em graus e R em radianos e π = 3.14.

```c
#include <stdio.h>
//OPCIONAL: usamos o define para criar um "simbolo" para um valor 
//específico. Ele não funciona como uma variável, não pode ser mudado e 
//não gasta espaço na memória.
#define PI 3.14159

int main() {
    float g;
    scanf("%f", &g);
    float r = g * PI / 180.0;
    printf("%f\n", r);
    return 0;
}

```

### 15. Leia um angulo em radianos e apresente-o convertido em graus. A fôrmula de conversão é: G = R ∗ 180/π, sendo G o ângulo em graus e R em radianos e π = 3.14.

```c
#include <stdio.h>
#define PI 3.14159

int main() {
    float R;
    scanf("%f", &R);

    // Usa a constante PI definida acima
    float G = R * 180.0 / PI;
    printf("%f\n", G);
    return 0;
}

```

### 16. Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros. A fórmula de conversão é: C = P ∗ 2,54, sendo C o comprimento em centímetros e P o comprimento em polegadas.

```c
#include <stdio.h>

int main() {
    float p;
    scanf("%f", &p);
    float c = p * 2.54;
    printf("%f\n", c);
    return 0;
}

```

### 17. Leia um valor de comprimento em centímetros e apresente-o convertido em polegadas. A formula de conversão é: P = C / 2,54 , sendo C o comprimento em centímetros e P o comprimento em polegadas.

```c
#include <stdio.h>

int main() {
    float C;
    scanf("%f", &C);

    float P = C / 2.54;
    printf("%f\n", P);
    return 0;
}

```

### 18. Leia um valor de volume em metros cúbicos m³ e apresente-o convertido em litros. A fórmula de conversão é: L = 1000 ∗ M , sendo L o volume em litros e M o volume em metros cúbicos.

```c
#include <stdio.h>

int main() {
    float m;
    scanf("%f", &m);
    float l = 1000 * m;
    printf("%f\n", l);
    return 0;
}

```

### 19. Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m³. A formula de conversão é: M = L/1000 , sendo L o volume em litros e M o volume em metros cúbicos.

```c
#include <stdio.h>

int main() {
    float L;
    scanf("%f", &L);

    float M = L / 1000.0;
    printf("%f\n", M);
    return 0;
}

```

### 20. Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula de conversão é: L = K/0,45, sendo K a massa em quilogramas e L a massa em libras.

```c
#include <stdio.h>

int main() {
    float k;
    scanf("%f", &k);
    float l = k/0.45;
    printf("%f\n", l);
    return 0;
}

```

### 21. Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula de conversão é: K = L ∗ 0.45 , sendo K a massa em quilogramas e L a massa em libras

```c
#include <stdio.h>

int main() {
    float L;
    scanf("%f", &L);

    float K = L * 0.45;
    printf("%f\n", K);
    return 0;
}

```

### 22. Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fórmula de conversão é: M = 0,91 ∗ J, sendo J o comprimento em jardas e M o comprimento em metros.

```c
#include <stdio.h>

int main() {
    float j;
    scanf("%f", &j);
    float m = 0.91 * j;
    printf("%f\n", m);
    return 0;
}

```

### 23. Leia um valor de comprimento em metros e apresente-o convertido em jardas. A fórmula de conversão é: J = M / 0.91 , sendo J o comprimento em jardas e M o comprimento em metros.

```c
#include <stdio.h>

int main() {
    float M;
    scanf("%f", &M);

    float J = M / 0.91;
    printf("%f\n", J);
    return 0;
}

```

### 24. Leia um valor de área em metros quadrados m² e apresente-o convertido em acres. A fórmula de conversão é: A = M ∗ 0,000247, sendo M a área em metros quadrados e A a área em acres.

```c
#include <stdio.h>

int main() {
    float m;
    scanf("%f", &m);
    float a = m * 0.000247;
    printf("%f\n", a);
    return 0;
}

```

### 25. Leia um valor de area em acres e apresente-o convertido em metros quadrados m². A fórmula de conversão é: M = A ∗ 4048.58 , sendo M a área em metros quadrados e A a área em acres.

```c
#include <stdio.h>

int main() {
    float A;
    scanf("%f", &A);

    float M = A * 4048.58;
    printf("%f\n", M);
    return 0;
}

```

### 26. Leia um valor de área em metros quadrados m² e apresente-o convertido em hectares. A fórmula de conversão é: H = M ∗ 0,0001, sendo M a área em metros quadrados e H a área em hectares.

```c
#include <stdio.h>

int main() {
    float m;
    scanf("%f", &m);
    float h = m * 0.0001;
    printf("%f\n", h);
    return 0;
}

```

### 27. Leia um valor de área em hectares e apresente-o convertido em metros quadrados m². A fórmula de conversão é: M = H ∗ 10000, sendo M a area em metros quadrados e H a área em hectares.

```c
#include <stdio.h>

int main() {
    float H;
    scanf("%f", &H);

    float M = H * 10000.0;
    printf("%f\n", M);
    return 0;
}

```

### 28. Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos três valores lidos.

```c
#include <stdio.h>
#include <math.h>

int main() {
    int valor1, valor2, valor3;
    scanf("%d %d %d", &valor1, &valor2, &valor3);
    int somaQuadrados = pow(valor1, 2) + pow(valor2, 2) + pow(valor3, 2);
    printf("%d\n", somaQuadrados);
    return 0;
}

```

### 29. Leia quatro notas, calcule a média aritmética e imprima o resultado.

```c
#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4;
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    float media = (nota1 + nota2 + nota3 + nota4) / 4.0;
    
    // O %.Nf , (sendo N um número qualquer) limita a quantidade de casas decimais da variável
    // Ex: %.2f limita a duas casas após a vírgula.
    printf("%.2f\n", media);
    return 0;
}

```

### 30. Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.

```c
#include <stdio.h>

int main() {
    float reais, cotacao;
    scanf("%f %f", &reais, &cotacao);
    float dolar = reais / cotacao;
    printf("%.2f\n", dolar);
    return 0;
}

```

### 31. Leia um numero inteiro e imprima o seu antecessor e o seu sucessor.

```c
#include <stdio.h>

int main() {
    int numero;
    scanf("%d", &numero);

    int antecessor = numero - 1;
    int sucessor = numero + 1;
    printf("%d %d\n", antecessor, sucessor);
    return 0;
}

```

### 32. Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro.

```c
#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    int sucessorTriplo = x * 3 + 1;
    int antecessorDobro = x * 2 - 1;
    //também poderia ser: int soma = (x * 3 + 1) + (x * 2 - 1);
    int soma = sucessorTriplo + antecessorDobro;
    printf("%d\n", soma);
    return 0;
}

```

### 33. Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.

```c
#include <stdio.h>
// #include <math.h> // Se for utilizar a função pow(lado, 2)

int main() {
    float lado;
    scanf("%f", &lado);

    // Multiplicar lado * lado é muito mais simples (e leve para o processador)
    // do que usar a função pow()!
    float area = lado * lado;
    printf("%.2f\n", area);
    return 0;
}

```

### 34. Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente. A área do círculo é π ∗ raio², considere π = 3.141592.

```c
#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main() {
    float raio;
    scanf("%f", &raio);
    float area = PI * pow(raio, 2);
    printf("%f\n", area);
    return 0;
}

```

### 35. Sejam a e b os catetos de um triângulo, onde a hipotênusa é obtida pela equação: hipotenusa = √a² + b². Faça um programa que receba os valores de a e b e calcule o valor da hipotenusa através da equação. Imprima o resultado dessa operação.

```c
#include <stdio.h>
#include <math.h>

int main() {
    float a, b;
    scanf("%f %f", &a, &b);

    // sqrt() é usada para calcular raiz quadrada, está presente na biblioteca <math.h>
    // float hipotenusa = sqrt( pow(a, 2) + pow(b, 2) );
    
    // Simplificando sem usar o pow: (lembrando que a multiplicação tem prioridade sobre a soma)
    float hipotenusa = sqrt(a * a + b * b);

    printf("%.2f\n", hipotenusa);
    return 0;
}

```

### 36. Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula: V = π ∗ raio² ∗ altura, onde π = 3.141592.

```c
#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main() {
    float altura, raio;
    scanf("%f %f", &altura, &raio);
    float volume = PI * pow(raio, 2) * altura;
    printf("%f\n", volume);
    return 0;
}

```

### 37. Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo em vista que o desconto foi de 12%.

```c
#include <stdio.h>

int main() {
    float valor_produto;
    scanf("%f", &valor_produto);

    // 100% - 12% = 88% (0.88). 
    // É uma forma mais rápida e limpa de calcular!
    float valor_com_desconto = valor_produto * 0.88;

    printf("%.2f\n", valor_com_desconto);
    return 0;
}

```

### 38. Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele recebeu um aumento de 25%.

```c
#include <stdio.h>

int main() {
    float salario;
    scanf("%f", &salario);
    //125% = valor * 1.25
    float novoSalario = salario * 1.25;
    printf("%.2f\n", novoSalario);
    return 0;
}

```

### 39. A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso. Sendo que da quantia total:

* O primeiro ganhador recebera 46%;
* O segundo recebera 32%;
* O terceiro recebera o restante;

### Calcule e imprima a quantia ganha por cada um dos ganhadores.

```c
#include <stdio.h>

int main() {
    // É recomendado usar uma variável 'premio' (float premio = 780000.00;) 
    // para não ter que repetir o mesmo número mágico 3 vezes!
    float primeiro = 780000.00 * 0.46;
    float segundo = 780000.00 * 0.32;
    float terceiro = 780000.00 - (primeiro + segundo);

    printf("1º Ganhador: R$ %.2f\n", primeiro);
    printf("2º Ganhador: R$ %.2f\n", segundo);
    printf("3º Ganhador: R$ %.2f\n", terceiro);
    return 0;
}

```

### 40. Uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa que solicite o número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo-se que são descontados 8% para imposto de renda.

```c
#include <stdio.h>

int main() {
    int dias;
    scanf("%d", &dias);
    float bruto = 30.0 * dias;
    //100% - 8% = 92% = 0.92
    float liquido = bruto * 0.92;
    printf("%.2f\n", liquido);
    return 0;
}

```

### 41. Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre o valor calculado.

```c
#include <stdio.h>

int main() {
    float valor_por_hora;
    int horas_trabalhadas;
    scanf("%f %d", &valor_por_hora, &horas_trabalhadas);

    // Multiplicar por 1.10 é o mesmo que adicionar os 10% sobre o valor
    float valor = (valor_por_hora * horas_trabalhadas) * 1.10;

    printf("%.2f\n", valor);
    return 0;
}

```

### 42. Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, ele paga 7% de imposto sobre o salário-base.

```c
#include <stdio.h>

int main() {
    float salarioBase;
    scanf("%f", &salarioBase);
    //100% + 5% - 7% = 98% = 0.98
    float salario = salarioBase * 0.98;
    printf("%.2f\n", salario);
    return 0;
}

```

### 43. Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:

* o total a pagar com desconto de 10%;
* o valor de cada parcela, no parcelamento de 3× sem juros;
* a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto)
* a comissao do vendedor, no caso da venda ser parcelada (5% sobre o valor total)

```c
#include <stdio.h>

int main() {
    float valor;
    scanf("%f", &valor);

    // Multiplicar por 0.90 resulta no desconto de 10%
    float valor_desconto10 = valor * 0.90;
    
    // Divisão sempre garantindo que será com decimais
    float valor_parcela = valor / 3.0;

    float comissao_a_vista = valor_desconto10 * 0.05;
    float comissao_parcelada = valor * 0.05;

    // Coloquei um print formatado e dividido em linhas para ficar visualmente elegante pro usuário
    printf("Desconto: %.2f\nParcela: %.2f\nCom. (A Vista): %.2f\nCom. (Prazo): %.2f\n", 
           valor_desconto10, valor_parcela, comissao_a_vista, comissao_parcelada);
    
    return 0;
}

```

### 44. Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo.

```c
#include <stdio.h>
//iremos usar o math.h para usar uma função de arredondamento
#include <math.h>

int main() {
    float alturaDegrau, objetivo;
    scanf("%f %f", &alturaDegrau, &objetivo);
    //caso o numero dê quebrado, o ceil arredondará para cima, sempre 
    //retornando a quantidade mínima para chegar no objetivo.
    int qtdDegraus = ceil(objetivo / alturaDegrau);
    printf("%d\n", qtdDegraus);
    return 0;
}

```

### 45. Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela ASCII para resolver o problema.

```c
#include <stdio.h>

int main() {
    char maiuscula;
    scanf("%c", &maiuscula);

    // Cada caractere é representado por um número inteiro no computador (Tabela ASCII).
    // Perceba que a diferença entre as maiúsculas e minúsculas tem SEMPRE o mesmo valor: 32.
    // A (65) -> a (97) ... 97 - 65 = 32
    // B (66) -> b (98) ... 98 - 66 = 32
    // Então, se somarmos 32 à letra maiúscula, nós avançamos no alfabeto ASCII e caímos na minúscula.
    
    char minuscula = maiuscula + 32;

    printf("%c\n", minuscula);

    return 0;
}

```

### 46. Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999). Gere outro número formado pelos dígitos invertidos do número lido.

```c
#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    //usa resto da divisão por 10 para extrair o ultimo dígito
    int d3 = x % 10;
    //a divisão inteira por 10 remove o ultimo dígito, repete o mesmo processo
    int d2 = (x / 10) % 10;
    //a divisão inteira por 100 remove os dois ultimos dígitos, repete o mesmo processo
    int d1 = (x / 100) % 10;
    int numeroInvertido = (d3 * 100) + (d2 * 10) + d1;
    printf("%d\n", numeroInvertido);
    return 0;
}

```

### 47. Leia um numero inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha.

```c
#include <stdio.h>

int main() {
    int numero;
    scanf("%d", &numero);

    // Divisão inteira retira dígitos do final e não preserva decimais
    int milhar = numero / 1000;

    // EX centena: 7591 / 100 = 75 ... 75 % 10 = 5
    int centena = (numero / 100) % 10;

    // EX dezena: 8015 / 10 = 801 ... 801 % 10 = 1
    int dezena = (numero / 10) % 10;

    // EX unidade: 2058 % 10 = 8
    int unidade = numero % 10;

    // Note a quebra de linha (\n) após cada variável para atender a exigência da questão
    printf("%d\n%d\n%d\n%d\n", milhar, centena, dezena, unidade);

    return 0;
}

```

### 48. Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.

```c
#include <stdio.h>

int main() {
    int segundos;
    scanf("%d", &segundos);
    //conversão de segundos para horas é só dividir por 3600 (quantidade de segundos em 1 hora)
    int horas = segundos / 3600;
    //os segundos que sobraram das horas (resto de 3600) são convertidos para minutos (dividir por 60)
    int minutos = (segundos % 3600) / 60;
    //os segundos vão ser atualizados para ser apenas o que sobrou dos minutos
    segundos = segundos % 60; 
    //print formatado para mostrar HH:MM:SS
    printf("%d:%02d:%02d\n", horas, minutos, segundos);
    return 0;
}

```

### 49. Faça um programa para leia o horário (hora, minuto e segundo) de inicio e a duração, em segundos, de uma experiência biológica. O programa deve resultar com o novo horário (hora, minuto e segundo) do término da mesma.

```c
#include <stdio.h>

int main() {
    int hora, minuto, segundo, duracao;
    scanf("%d %d %d %d", &hora, &minuto, &segundo, &duracao);

    int total_segundos = (hora * 3600) + (minuto * 60) + segundo + duracao;

    // Usamos o módulo 24 (% 24) para o caso de a experiência passar das 23:59:59 
    // e virar o dia. Se der 26 horas, o resultado volta para 2 horas da manhã!
    int h = (total_segundos / 3600) % 24;
    int m = (total_segundos % 3600) / 60;
    int s = total_segundos % 60;

    printf("%02d:%02d:%02d\n", h, m, s);

    return 0;
}

```

### 50. Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.

```c
#include <stdio.h>

int main() {
    int idade, anoAtual;
    scanf("%d %d", &idade, &anoAtual);
    //essa questão leva em conta que a pessoa já fez aniversário no ano atual
    int anoNascimento = anoAtual - idade;
    printf("%d\n", anoNascimento);
    return 0;
}

```

### 51. Escreva um programa que leia as coordenadas x e y de pontos no R² e calcule sua distância da origem (0, 0).

```c
#include <stdio.h>
#include <math.h>

int main() {
    float x, y;
    scanf("%f %f", &x, &y);

    // A distância da origem se resolve usando o famoso Teorema de Pitágoras! 
    // Onde 'x' e 'y' são os catetos e a distância é a hipotenusa
    float distancia = sqrt(pow(x, 2) + pow(y, 2));

    printf("%.2f\n", distancia);

    return 0;
}

```

### 52. Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido proporcionalmente ao valor que cada deu para a realização da aposta. Faça um programa que leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um ganharia do prêmio com base no valor investido.

```c
#include <stdio.h>

int main() {
    float amigo1, amigo2, amigo3, premio;
    scanf("%f %f %f %f", &amigo1, &amigo2, &amigo3, &premio);
    float pesoTotal = amigo1 + amigo2 + amigo3;
    float ganha1 = premio * amigo1 / pesoTotal;
    float ganha2 = premio * amigo2 / pesoTotal;
    float ganha3 = premio * amigo3 / pesoTotal;
    printf("%.2f %.2f %.2f\n", ganha1, ganha2, ganha3);
    return 0;
}

```

### 53. Faça um programa para ler as dimensões de um terreno (comprimento c e largura l), bem como o preço do metro de tela p. Imprima o custo para cercar este mesmo terreno com tela.

```c
#include <stdio.h>

int main() {
    int c, l;
    float preco;
    
    scanf("%d %d", &c, &l);
    // ATENÇÃO: a variável 'preco' deve ser lida no float. Antes ela estava como int na declaração!
    scanf("%f", &preco);
    
    // O comprimento total da cerca é igual ao perímetro do terreno
    float perimetro = 2.0 * (c + l);
    float custo = preco * perimetro;

    printf("%.2f\n", custo);

    return 0;
}

```
