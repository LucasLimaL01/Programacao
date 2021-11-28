#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    float a, b ;

    printf("Digite a Temperatura em C: ");
    scanf("%f", &a);
    
    b= a*1.8+32;
    
    printf("Atualmente esta: %.2f F ", b ); 
    return 0;

    }
