#include <stdio.h>
#include <stdlib.h>

void converte(int totalminutos,int *minutos, int *horas){

  //conversao de minutos para horas
  while (totalminutos > 59) {

  totalminutos = totalminutos - 60;
  *minutos = totalminutos;
  *horas = *horas + 1;

  }//while

}//converte

int main(){

  //declaracao de variaveis
  int totalminutos, minutos=0, horas=0;

  //recebe o valor de totalminutos
  printf("-=-=- Conversao de Minutos para horas -=-=- \n");
  printf("\nDigite um valor em minutos: ");
  scanf("%i",&totalminutos );

  //chama a função converte
  converte(totalminutos,&minutos,&horas);

  //exibe os valores de totalminutos convetidos
  printf("\nEsse valor em horas e: %i:%i \n\n",horas,minutos);

  return 0;
}//main
