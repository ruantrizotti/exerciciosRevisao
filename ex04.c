#include <stdlib.h>
#include <stdio.h>

//função aloca memória
float *Memoria(int tam){
  //ponteiro auxiliar que será retornado para main
  float *p;
      //alocando a memória
      p=(float*)malloc(tam*sizeof(float));
  //retornando ponteiro pra memória alocada
  return p;
}//memoria

//preenchendo o vetor
void Preenche(int tam, float vetor[]){

  //printf por toque kkkkkkkkk
  printf("\n");

  //for que roda até o tamanho informado
  for(int i=0;i<tam;i++){
    printf("Digite o %d elemento do vetor: ",i+1);
    scanf("%f",&vetor[i]);
  }//for

}//Preenche

void Imprimir(int tam,float vetor[]) {

  //for para imprimir o vetor
  for(int i=0;i<tam;i++){
    printf("\nO valor da possicao do vetor [%i] e '%.2f'",i+1,vetor[i]);
  }//for

    //printf por toque kkkkkkkkk
    printf("\n\n");

}//imprimir

int main(){

    //declaracao váriaveis
    int tam=0;
    float *vetor;

    //recebe o tamanho do vetor
    printf("-=-=- Vetor Alocado Dinamicamente -=-=-\n\n");
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tam);

      //chamando função para alocar a memória
      vetor=Memoria(tam);
      //chamando função para preenche o vetor
      Preenche(tam,vetor);
      //chamando função para imprimir o vetor
      Imprimir(tam,vetor);

    free(vetor);

  return 0;
}
