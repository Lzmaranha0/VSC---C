#include <stdio.h>
int main (void)
{
    float X, Y;

    printf("Digite a coordenada X: \n");
    scanf("%f", &X);
    printf("Digite a coordenada Y: \n");
    scanf("%f", &Y);
    
    if (X == 0)
    {
        printf("A coordenada se encontra no eixo Y no ponto (0,%.2f)", Y);
    }
    else if (Y == 0)
    {
        printf("A coordenada se encontra no eixo X no ponto (%.2f, 0)", X);
    }
    else if (X == 0 && Y == 0)
    {
        printf("A coordenada se encontra na origem.");
    }
    else if (X > 0 && Y > 0)
    {
        printf("A coordenada se encontra no primeiro quadrante no ponto (%.2f, %.2f)", X, Y);
    }
    else if (X < 0 && Y > 0)
    {
        printf("A coordenada se encontra no segundo quadrante no ponto (%.2f, %.2f)", X, Y);
    }
    else if (X < 0 && Y < 0)
    {
        printf("A coordenada se encontra no terceiro quadrante no ponto (%.2f, %.2f)", X, Y);
    }
    else if (X > 0 && Y < 0)
    {
        printf("A coordenada se encontra no quarto quadrante no ponto (%.2f, %.2f)", X, Y);
    }
    return 0;
}