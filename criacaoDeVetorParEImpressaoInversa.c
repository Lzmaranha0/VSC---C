#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main (void){
  int P[6];

  //Preenchimento do vetor com número pares.
  for(int i = 0; i < 6; i++){
    printf("\nDigite um número par: \n");
    scanf("%i", &P[i]);
    if(P[i] % 2 != 0){
      printf("Numero inválido. Digite um número par: \n\n");
      scanf("%i", &P[i]);
    }
  }
  printf( "\n\n" );
  
  //Impressão do vetor.
  for(int i = 0; i < 6; i++){
    printf("%i ", P[i]);
  }
  printf("\n");
  
  //Impressão do vetor invertido.
  printf("\nO vetor de pares invertido fica: \n");
  for(int i = 5; i >= 0; i--){
    printf("%i ", P[i]);
  }
}