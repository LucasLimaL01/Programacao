#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int a, numeros[20], numeros1[20];
    printf("Digite 20 numeros: ");
    for(int i=0; i<20; i++){
        scanf("%i", &numeros[i]);
        }
        printf("Digite o numero de multiplicacao: ");
      scanf("%i", &a);
        printf("Os numeros foram: ");
        for(int i=0; i<20; i++){
            numeros1[i]= numeros[i]*a;
            printf("%i \n", numeros1[i]);
            }

        return 0;

        }
