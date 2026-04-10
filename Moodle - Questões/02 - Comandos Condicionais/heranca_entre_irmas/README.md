# Herança entre irmãs
Contexto
Alice, Benice e Clarice são três irmãs com personalidades distintas: Alinice é generosa, Benicice é justa, Clarenice é gananciosa.

Certo dia, Alice, Benice e Clarice receberam, respectivamente, X, Y e Z gramas de ouro. Durante a semana, várias situações aconteceram:

Elas receberam, respectivamente, X, Y e Z gramas de ouro. Durante a semana, várias situações aconteceram:

Alice distribui 30% do seu ouro igualmente para as outras duas.

Benice pega 30 gramas da irmã mais rica e entrega para a mais pobre.

Clarice furta 20% do ouro de Alice e 10% do ouro de Benice.

Alice e Benice trocam sua quantia de ouro entre si.

Clarice é presa e deve pagar 100 g em ouro como fiança (se ela não tem o suficiente, seu ouro é zerado).

Alice doa metade do seu ouro para caridade.

Se Alice não for a mais rica, ela coleta 20% do ouro da irmã mais rica em troca de sua parte do terreno da família.

Para facilitar, você pode considerar que a quantidade de ouro entre elas é sempre diferente. Sua tarefa é escrever um programa que, dados X, Y e Z, calcule a quantidade de ouro de cada irmã após todos os eventos.

Entrada
Os números decimais X Y Z.
Saída
Quantidade de ouro de cada irmã, no formato:
Alice: 100.0
Benice: 200.0
Clarice: 300.0
Testes
>>>>>>>> INSERT

100 200 300
======== EXPECT
Alice: 142.1
Benice: 80.0
Clarice: 181.2
<<<<<<<< FINISH
```c
#include <stdio.h>

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    
    // Passo 1
    float parteA = a * 0.3;
    a -= parteA;
    b += parteA / 2;
    c += parteA / 2;
    
    // Passo 2
    float maior = a;
    float menor = a;
    int id_maior = 0; // 0=a, 1=b, 2=c
    int id_menor = 0; // Precisamos referenciar para retirar e adicionar os valores posteriormente
    
    // definir maior
    if (b > maior) {
        maior = b;
        id_maior = 1;
    }
    if (c > maior) {
        maior = c;
        id_maior = 2;
    }
    
    // definir menor
    if (b < menor) {
        menor = b;
        id_menor = 1;
    }
    if (c < menor) {
        menor = c;
        id_menor = 2;
    }
    
    //reduzir e adicionar
    if (id_maior == 0) { // Por isso precisou do id para referenciar quem era maior e menor para retirar e adicionar corretamente
        a -= 30;
    } else if (id_maior == 1) {
        b -= 30;
    } else {
        c -= 30;
    }
    
    if (id_menor == 0) {
        a += 30;
    } else if (id_menor == 1) {
        b += 30;
    } else {
        c += 30;
    }
    
    // Passo 3
    float rouboA = a * 0.2;
    float rouboB = b * 0.1;
    
    a -= rouboA;
    b -= rouboB;
    c += rouboA + rouboB;
    
    // Passo 4
    float auxiliar = a; // isso garante que o valor não seja perdido na hora de atribuir-lo à b
    a = b;
    b = auxiliar;
    
    // Passo 5
    if (c < 100) {
        c = 0;
    } else {
        c -= 100;
    }
    
    // Passo 6
    a *= 0.5;
    // a /= 2; assim também funciona
    // lembrando que cada uma significa isso:
    // a = a * 0.5;
    // a = a / 2;
    
    // Passo 7
    // reaproveitando as variáveis criadas anteriormente
    maior = a; 
    id_maior = 0;
    
    if (b > maior) {
        maior = b;
        id_maior = 1;
    }
    if (c > maior) {
        maior = c;
        id_maior = 2;
    }
    
    if (id_maior != 0) {
        if (id_maior == 1) { // Mais rica é b
            float coleta = b * 0.2;
            a += coleta;
            b -= coleta;
        } else { // Mais rica é c
            float coleta = c * 0.2;
            a += coleta;
            c -= coleta;
        }
    }
    
    printf("Alice: %.1f\n", a);
    printf("Benice: %.1f\n", b);
    printf("Clarice: %.1f\n", c);
}
```

