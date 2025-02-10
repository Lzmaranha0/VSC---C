#include <stdio.h> 
int main(void)
{
  int i, j, k, l, m, sum;

  //Função do para executar o código ao menos uma vez.
  do
    {
      printf("Digite um numero natural: ");
      scanf("%i", &i);
      if (i%2 == 0 && i != 0)
      {
      //Quando i for par, o programa irá atribuir aos valores j, k, l e m os próximos números pares consecutivos à i e somar.
      j = i + 2;
      k = j + 2;
      l = k + 2;
      m = l + 2;
      sum = i + j + k + l + m;
      printf("A soma dos 5 primeiros numeros pares consecutivos eh: %i\n", sum);
      }
        //Quando i for ímpar, o programa somará 1 para o i, para que ele se torne par e, atribuir aos valores j, k, l e m os próximos números pares consecutivos à i e somar.
      else if (i%2 != 0)
      {
      i += 1;
      j = i + 2;
      k = j + 2;
      l = k + 2;
      m = l + 2;
      sum = i + j + k + l + m;
      printf("A soma dos 5 primeiros numeros pares consecutivos eh: %i\n", sum);
      }
    } while (i != 0);
  return 0;
}