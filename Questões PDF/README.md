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
    printf("%d", x);
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
    printf("%f", x);
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
    printf("%d", soma);
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
    printf("%f", quadrado);
    return 0;
}
```