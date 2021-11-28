#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    float a, b;

   
    printf("Atualmente o dolar esta valendo R$5,32\n");
    
    printf("Digite quantos U$ voce tem: ");
    scanf("%f", &a);

    b= a*5.32;

    printf("Atualmente voce esta com: R$ %.2f ", b );
    return 0;

    }