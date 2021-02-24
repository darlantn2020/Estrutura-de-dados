#include<stdio.h>
#include<stdlib.h>

int funcao_recurssiva(int x,int y){
  if(y == 0){
    return 1;
  }else{
    return x * funcao_recurssiva(x,y-1);
  }
}

int main (){

  int x;
  int y;
  int recurssiva;

  printf("Base:\n");
  scanf("%i",&x);
  printf("Expoente\n");
  scanf("%i",&y);
  recurssiva = funcao_recurssiva(x,y);
  printf("Resultado da base %i elevado ao expoente %i eh igual a: %i\n",x,y,recurssiva );

}//fim main
