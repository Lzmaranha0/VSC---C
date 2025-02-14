#include <stdio.h>

// Criando a função tabuada.
float escreveTabuada(float n)
{
    printf("\nDigite o numero que deseja saber a tabuada: \n");
    scanf("%f", &n);
    float i;
    for(i = 0; i <= 10; i++)
    {
    printf("%.2f x %.2f = %.2f\n", n, i, n*i); 
    }
    return n;
}

int main (void)
{
// Inicialização do menu e sua variável de escolha.
    int x;
    do
    { 
        printf("\n\nBem vindo a tabuada do BCC-UFRPE.\nEscolha uma das opcoes abaixo:\n\n 1. Entrar na tabuada.\n 2. Sair.\n\n");
        scanf("%i", &x);
        if(x == 1)
        {
        float n;
        escreveTabuada(n);
        }
    }while(x != 2);
    printf("Obrigado por usar a tabuada do BCC-UFRPE.\n");
}