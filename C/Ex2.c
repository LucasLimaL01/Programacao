#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int a, area;

    printf("Digite a aresta do quadrado: ");
    scanf("%i", &a);

    area= a*a;

    printf("A area do quadrado eh igual a: %i ", area );

    return 0;
}

