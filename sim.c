#include <stdio.h>

int main (void) {

    int largura, comprimento, metroq;

    printf("Digite o valor da largura: ");
    scanf("%i", &largura);
    printf("Digite o valor do comprimento: ");
    scanf("%i", &comprimento);
    printf("Digite o valor do metro quadrado: ");
    scanf("%i", &metroq);
    int area;
    area = largura*comprimento;
    int preco;
    preco = metroq*area;
    printf("A area do terreno eh: %i\nE seu preco total eh: %i", area, preco);

}   