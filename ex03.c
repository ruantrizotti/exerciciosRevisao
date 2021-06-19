#include <stdio.h>
#include <conio.h>

int expoente(int x, int y){

 //quando y for 0
 if (y == 0)
 return 1;

 //quando y for 1
 if (y == 1)
 return x;

 //quando y for maior que 1
 return x*expoente(x,y-1);

}//expoente

int main(void) {

//declaracao de variaveis
int x, y, valor;

 //recebe o valor das variveis
 printf("-=-=- Numero elevado a outro -=-=-\n");
 printf("\nDigite o numero para x: ");
 scanf("%d", &x);
 printf("\nDigite o numero para y: ");
 scanf("%d", &y);

 //chama a funcao expoente
 valor=expoente(x,y);

 //imprime o valor 
 printf("\nO valor de 'x' elevado a 'y' e: %d\n\n", valor);

return 0;
}//main
