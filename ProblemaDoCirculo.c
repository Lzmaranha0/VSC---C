#include <stdio.h>
int main (void) {
    
    float area, raio, pi;
    pi = 3.14159;

    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);
    area = pi*raio*raio;
    printf("O valor da area do circulo eh: %f", area);
}