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

### 6. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A fórmula de conversão é: F = C ∗(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
```c
#include <stdio.h>

int main() {
    //declarado em float para aceitar casas decimais
    float c;
    scanf("%f", &c);
    //colocado "(9.0/5.0)" para indicar valor float, retornando 1.8 ao invés de 1
    float f = c * (9.0/5.0) + 32;
    printf("%f\n", f);
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
    float r = g * PI / 180;
    printf("%f\n", r);
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

### 34. Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente. A área do círculo é π ∗ raio2, considere π = 3.141592.
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

### 36. Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula: V = π ∗ raio2 ∗ altura, onde π = 3.141592.
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

### 40. Uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa que solicite o número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo-se que são descontados 8% para imposto de renda.
```c
#include <stdio.h>

int main() {
    int dias;
    scanf("%d", &dias);
    float bruto = 30 * dias;
    //100% - 8% = 92% = 0.92
    float liquido = bruto * 0.92;
    printf("%.2f\n", liquido);
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

### 48. Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.

```c
#include <stdio.h>

int main() {
    int segundos;
    scanf("%d", &segundos);
    //conversão de segundos para horas é só dividir por 3600
    int horas = segundos / 3600;
    //os segundos que sobraram das horas são convertidos para minutos(só dividir por 60)
    int minutos = (segundos % 360) / 60;
    //os segundos vão ser atualizados para ser apenas o que sobrou dos minutos
    segundos = (segundos % 360) % 60;
    //print formatado para mostrar HH:MM:SS
    printf("%d:%02d:%02d\n", horas, minutos, segundos);
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