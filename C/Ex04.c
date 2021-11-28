#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const*argv[]){
    int a, b, c, d, media ;

    printf("Digite quatro numeros para obter sua media: ");
    scanf("%i", &a);
    printf(" ");
    scanf("%i", &b);
    printf(" ");
    scanf("%i", &c);
    printf(" ");
    scanf("%i", &d);
    media= a + b + c + d;
    printf("Sua media eh igual a: %i", media/4);
    return 0;
}

