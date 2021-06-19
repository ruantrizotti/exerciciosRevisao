#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>

void duplica(char arquivo[]){

  //declaração de variaveis
  int numLinhas = 0,aux=0;
  char caracter;

  //criando os arquivos
  FILE *arq, *arq2;

  //abrindo o arquivo em modo leitura
  arq = fopen(arquivo, "r");
      //validando se abrir corretamente
      if(arq==NULL){
        printf("erro ao abrir o arquivo\n");
        exit(1);
      }//if

  //abrindo arquivos no formato leitura/escrita
  arq2 = fopen("clone.txt","w+");
        //validando se foi aberto
        if(arq2 == NULL){
          printf("Não foi possível abrir o arquivo de saída!");
          exit(1);
        }//if

  //while rodando até o final do arquvio
  while(!feof(arq)){

      //lendo um caracter do arquivo
      fscanf(arq,"%c",&caracter);

      //if e else para alterar as vogais para '*'
      if (caracter =='a'||caracter =='e'||caracter =='i'||caracter =='o'||caracter =='u'||caracter =='A'||caracter =='E'||caracter =='I'||caracter =='O'||caracter =='U'){
        fputc('*',arq2);
      }//if
      else{
      fputc(caracter,arq2);
      }//else

      //contador de linhas
      if (caracter=='\n'){
         numLinhas++;
       }//if
  }//while

  //exibindo pro usuário
  printf("\nO numero de linhas do arquivo e: %d\n\n", numLinhas);

  //fechando o arquivo
  fclose(arq); free(arq);
  fclose(arq2); free(arq2);

  //retornando que o código rodou com exito

}//duplica

int main(){

    //declaração de variaveis
    char arquivo[50];

    //recebendo o nome do arquivo
    printf("Digite o arquivo que deseja abrir: ");
    setbuf(stdin,NULL);
    fgets(arquivo,49,stdin);
    arquivo[strcspn(arquivo,"\n")]='\0';

    //chama a função duplica
    duplica(arquivo);

  return 0;
}//main
