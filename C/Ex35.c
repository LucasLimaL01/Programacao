#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int m, numeros[20];
    printf("Digite 20 numeros: ");
    for(int i=0; i<20; i++){
        scanf("%i", &numeros[i]);
        }
     printf("Digite o numero de multiplicacao: ");
      scanf("%i", &m);
   printf("Os numeros digitados foram: ");
  for(int i=0; i<20; i++){
      numeros[i]= numeros[i]*m;
      printf("%i \n", numeros[i]);
      }
   
   return 0;
  }
