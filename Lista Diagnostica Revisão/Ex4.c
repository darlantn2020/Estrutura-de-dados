#include "stdio.h"
#include "stdlib.h"

void preenche_vetor(int *vet, int tamanho){
  for (int i = 0; i < tamanho; i++) {
    vet[i]= i;
  }//fim for
}//fim preenche_vetor

int main(){
  int *vet, tamanho;
  printf("Informe o tamanho do vetor:\n");
  scanf("%i",&tamanho);
  vet = (int*)malloc(tamanho*sizeof(int));
  preenche_vetor(vet,tamanho);
  for (int i = 0; i < tamanho; i++) {
    if(i == 0){
      printf("O vetor: [%i, ",vet[i]);
    }//fim if
    if(i < tamanho-1 && i>0){
      printf("%i, ",vet[i] );
    }//fim if
    if(i == tamanho-1){
      printf("%i]\n",vet[i]);
    }//fim if
  }//fim for
free(vet);
}//fim main
