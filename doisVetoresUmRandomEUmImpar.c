#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main(void){
  //Definindo o primeiro vetor.
  srand(time(NULL));
  int R[10];

  //Gerar o vetor com 100 números inteiros aleatórios e imprimir o mesmo.
  for(int i = 0; i < 10; i++){
    R[i] = rand() % 51;
    printf("Vetor[%i] = %i\n", i, R[i]);
  }
  printf("-----------------\n");
  
  //Definindo o segundo vetor e contador de indices do vetor R.
  int I[10];
  int n = 0;
  //Preencher o vetor I com os números ímpares de R e imprimir paralelamente.
  for(int j = 0; j < 10; j++){
    if(R[j] % 2 != 0){
      I[n] = R[j];
      n++;
      printf("Impares[%i] = %i \n", n, I[n-1]);
    }
  }
}