#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int numero, r;
 
  printf("Digite um numero positivo: ");
  scanf("%i", &numero);
 
  while(numero <= 0){
    printf("Erro! Apenas numeros positivos. Digite novamente: ");
    scanf("%i", &numero);
  }

return 0;

}