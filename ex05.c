#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>


typedef struct{
char nome[100],estilo[100];
int numintegrantes, posicao;
}bandas;

//preenchendo o vetor
void Preenche(bandas *p){

  printf("-=-=- Bandas Favoritas -=-=-\n\n");

  //for para preencher
  for(int i=0;i<5;i++){
    printf("Digite o nome da '%d' banda: ",i+1);
    scanf("%s",&p[i].nome);
    fflush(stdin);
    printf("Digite o estilo da '%d' banda: ",i+1);
    scanf("%s",&p[i].estilo);
    fflush(stdin);
    printf("Digite o numero de integrantes da '%d' banda: ",i+1);
    scanf("%i",&p[i].numintegrantes);
    fflush(stdin);
    printf("Digite a posicao da '%d' banda: ",i+1);
    scanf("%i",&p[i].posicao);
    fflush(stdin);

    while (p[i].posicao > 6 && p[i].posicao < 0) {
    printf("Voce digitou uma posicao invalida\n");
    printf("Digite novamente outra posicao da banda '%d': ",i+1);
    scanf("%i",&p[i].posicao);
    fflush(stdin);
    }//while para verificar se a posicao e valida

    fflush(stdin);

    printf("\n");

  }//for

}//Preenche

void Exibe(bandas *p){

  //declaracao de variaveis
  int posicao,ex;

  //recebe a posicao da banda favorita que deseja exibir
  printf("Digite a posicao da banda favorita que deseja exibir: ");
  scanf("%i",&posicao);

  //for para identificar e salvar em ex qual e a posicao a ser exibida
  for (int i = 0; i < 5; i++) {
    if (posicao == p[i].posicao)
    ex = i;
  }//for

  //exibi a banda favorita
  printf("\nO nome da banda e '%s'\n",p[ex].nome);
  printf("O nome da estilo e '%s'\n",p[ex].estilo);
  printf("O nome da numero de integrantes e '%i'\n",p[ex].numintegrantes);
  printf("O nome da posicao e '%i'\n\n",p[ex].posicao);

}//Exibe

int main(){

  //declaracao de variaveis
  bandas p[5];

  //chama funcao preenche
  Preenche(&p);

  //chamafuncao exibe
  Exibe(&p);

  return 0;
}//main
