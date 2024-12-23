#include <stdio.h>

    int main (void) 
{
    float antigo_salario, novo_salario, variacao, porcentagem;

    printf("Digite seu salario atual: ");
    scanf("%f", &antigo_salario);
    printf("Digite seu novo salario: ");
    scanf("%f", &novo_salario);

    if (novo_salario > antigo_salario)
    {
    variacao = novo_salario - antigo_salario;
    porcentagem = novo_salario/antigo_salario;
        printf("Houve um aumento de %f no seu salario que corresponde a um aumento de %f porcento.", variacao, (porcentagem - 1)*100);
    }
    else if (antigo_salario > novo_salario)
    {
    variacao = antigo_salario - novo_salario;
    porcentagem = (variacao/antigo_salario)*100;
        printf("Houve uma diminuicao de %f no seu salario que corresponde a uma queda de %f porcento.", variacao, porcentagem);
    }
    else if (antigo_salario = novo_salario)
    {
        printf("Nao houve uma variacao no seu salario.");
    }
    return 0;
}