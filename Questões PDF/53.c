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