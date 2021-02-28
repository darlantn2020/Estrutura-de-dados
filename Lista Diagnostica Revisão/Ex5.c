#include "stdio.h"
#include "stdlib.h"

typedef struct{
  char Nome_da_banda[30];
  char tipo_de_musica[30];
  int quantida_de_integrantes;
  int posicao;
}Bandas;

void preencher(Bandas *banda, int tamanho){
  int ajuda;
  for (int i = 0; i < tamanho; i++) {
    printf("Nome da Banda: \n");
    scanf("%s[^\n]",&banda[i].Nome_da_banda);
    printf("Tipo músical da banda: \n");
    scanf("%s[^\n]",&banda[i].tipo_de_musica);
    printf("Quantos membros tem na banda: \n");
    scanf("%i[^\n]",&banda[i].quantida_de_integrantes);
    do{
       ajuda = 0;
        printf("Qual a posição da banda de 1 a 5: \n");
        scanf("%i",&banda[i].posicao);
        for (int j = 0; j < tamanho; j++) {
          if(i == j)
          break;
          if(banda[i].posicao == banda[j].posicao){
            ajuda = 1;
          }//fim if
        }//fim for
      }while(banda[i].posicao>5 || banda[i].posicao<1 || ajuda == 1);
    }//fim for
}//fim preencher



int main(){
  int tamanho = 5;
  int opcao;
  int posi;
  Bandas banda[tamanho];
  preencher(&banda,tamanho);
  do{
    printf("Qual a opão \n");
    printf("1 - mostra todas as bandas\n");
    printf("2 - mostra apenas a da posicao escolhida\n");
    scanf("%i[^\n]",&opcao);
  }while(opcao>2 || opcao<1);
  switch (opcao) {
    case 1:
  for (int i = 0; i < tamanho; i++) {
    printf("Nome da banda: %s\n",banda[i].Nome_da_banda );
    printf("Estilo musical: %s\n",banda[i].tipo_de_musica );
    printf("Numero de integrante da banda: %i\n",banda[i].quantida_de_integrantes);
    printf("posicao: %i\n",banda[i].posicao);
  }//fim for
  case 2:
    printf("Escolha a posicao do rank:\n");
    scanf("%i[^\n]",&posi );
    for (int i = 0; i < tamanho; i++) {
      if(posi == banda[i].posicao){
        printf("Nome da banda: %s\n",banda[i].Nome_da_banda );
        printf("Estilo musical: %s\n",banda[i].tipo_de_musica );
        printf("Numero de integrante da banda: %i\n",banda[i].quantida_de_integrantes);
        printf("posicao: %i\n",banda[i].posicao);
      }//fim if
    }//fim for
  }//fim switch
  return 0;
}//fim main
