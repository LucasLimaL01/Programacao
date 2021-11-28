#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int a, b, area;

    printf("Digite a base do retangulo: ");
    scanf("%i", &a);

    printf("Digite a altura do retangulo: ");
    scanf("%i", &b);

    area= a * b;
    printf("A area do retangulo eh igual a: %i  ", area );
    return 0;

}