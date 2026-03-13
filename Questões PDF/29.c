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