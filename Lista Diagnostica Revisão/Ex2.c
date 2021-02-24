#include<stdio.h>
#include<stdlib.h>


int main (){
  FILE *arq;
  FILE *arq1;
  char a;
  int tamanho = 0;

  arq = fopen("texto.txt","r");
  arq1 = fopen("texto_saida.txt","w");
  if(arq	==	NULL || arq1 == NULL){
  printf("Ocorreu um erro no arquivo");
  system("pause");
  exit(1);
  }

  do{
    a = getc(arq);
  if(a == 'A'|| a =='a'|| a =='E'|| a == 'e'|| a == 'I'|| a == 'i'|| a =='O'|| a == 'o'|| a == 'U'|| a == 'u'){
    fprintf(arq1,"*");
}if(a == '\n'){
  tamanho++;
}else{
    fprintf(arq1,"%c",a );
  }
}while(a != EOF);

printf("Tem %i linhas o arquivo\n",tamanho );

  fclose(arq);
  fclose(arq1);


}//fim main
