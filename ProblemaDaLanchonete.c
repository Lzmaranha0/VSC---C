#include <stdio.h>

int main(void)
{
  int codigo, quantidade;
  float valorFinal;
  
  printf("Digite abaixo o codigo do produto:\n ");
  scanf("%i", &codigo);
  if (codigo == 1)
  {
    printf("Digite a quantidade: ");
    scanf("%i", &quantidade);
    valorFinal = 5.0 * quantidade;
    printf("O valor a se pagar sera de: %f", valorFinal);
  }
  else if (codigo == 2)
  {
    printf("Digite a quantidade: ");
    scanf("%i", &quantidade);
    valorFinal = 3.50 * quantidade;
    printf("O valor a se pagar sera de: %f", valorFinal);
  }
  else if (codigo == 3)
  {
    printf("Digite a quantidade: ");
    scanf("%i", &quantidade);
    valorFinal = 4.80 * quantidade;
    printf("O valor a se pagar sera de: %f", valorFinal);
  }
  else if (codigo == 4)
  {
    printf("Digite a quantidade: ");
    scanf("%i", &quantidade);
    valorFinal = 8.9 * quantidade;
    printf("O valor a se pagar sera de: %f", valorFinal);
  }
  else if (codigo == 5)
  {
    printf("Digite a quantidade: ");
    scanf("%i", &quantidade);
    valorFinal = 7.32 * quantidade;
    printf("O valor a se pagar sera de: %f", valorFinal);
  }
  else 
  {
    printf("Produto inexistente no estoque.");
  }
  return 0;
}