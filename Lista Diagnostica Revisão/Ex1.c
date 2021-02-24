#include<stdio.h>
#include<stdlib.h>

void funcao_total_minutos(int* hora1,int* minutos1,int* Total_minutos1)
  {
    *Total_minutos1 = *hora1*60 + *minutos1;
  }//fim funcao_total_minutos
int main (){

    int Total_minutos;
    int horas;
    int minutos;

    printf("Quantas horas?\n");
    scanf("%i",&horas);
    do {
        printf("Quantas minutos?\n");
        scanf("%i",&minutos);
        if(minutos>60){
        printf("Valor muito alto eh de 0 a 60\n\n");
      }//fim if
    }while(minutos>=60);//fim do while
    funcao_total_minutos(&horas,&minutos,&Total_minutos);
    printf("Sao %i minutos\n",Total_minutos);
}//fim main
