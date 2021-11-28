#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int h, numeros[10];

    printf("Digite 10 numeros: ");
    for(int i=0; i<10; i++){
        scanf("%i", &numeros[i]);
        }
    printf("Os numeros digitados foram: ");
  for(int i=0; i<10; i++){
      printf("%i \n", numeros[i]);
  }
    h=numeros[0];
    for(int i=1; i<10; i++) {
        if(numeros[i] > h){
            h=numeros[i];
            }
   }
     printf("O maior numero foi: %i ", h);
   return 0;
   }         

