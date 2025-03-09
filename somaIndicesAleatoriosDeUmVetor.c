#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void)
{ 
//Declara as variáveis.
srand(time(NULL));
int tam = 8;
float V[tam];

  //Preenche o vetor com números aleatórios e os mostra.
  for(int i = 0; i < tam; i++){
    V[i] = rand() % 100;
    printf("\nV[%i] = %.2f\n", i, V[i]);
  }
  printf("\n");

  //Escolher dois índices aleatórios e somar os valores.
  int ind1 = rand() % tam;
  int ind2 = rand() % tam;
  float soma = V[ind1] + V[ind2];
  
  if(ind1 == ind2){ //Verifica se os índices são iguais.
    ind1 = rand() % tam;
  }

  //Imprime o valor da soma dos índices.
  printf("Soma dos índices %i e %i = %.2f\n", ind1, ind2, soma);
}
