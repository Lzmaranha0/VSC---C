#include <stdio.h> 

int main(void)
{
int cod, Alc = 0, Gas = 0, Die = 0;
  do 
    {
      printf("Informe o codigo do combustivel abastecido:\n1. Alcool\n2. Gasolina\n3. Diesel\n4. Fim.\n");
      scanf("%i", &cod);
      if (cod == 1)
      {
        Alc++;
      }
      if (cod == 2)
      {
      Gas++;
      }
      if (cod == 3)
      {
      Die++;
      }
      if (cod > 4 && cod < 1)
      {
        printf("Codigo invalido. Tente novamente.");
      }
    } while (cod != 4);
  printf("Muito obrigado. \nAlcool: %i\nGasolina: %i\nDiesel: %i", Alc, Gas, Die);
  return 0;
}