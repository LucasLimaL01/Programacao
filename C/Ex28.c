#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int numero, r;
 
  printf("Digite um numero para tabuada: ");
  scanf("%i", &numero);

for (int i=0; i <= 20; i++){
     if (numero > 10){
         printf("Chegou no 10");
        break;
        }
    r = numero * i;
    printf("%i x %i = %i\n", numero, i, r);
  }
 
  while(numero>=0 && numero<=10){
    printf("Pressione qualquer tecla: ");
    scanf("%i", &numero);
  }
  return 0;
}

