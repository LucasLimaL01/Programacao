#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    float b, h, a;

    printf("Calculo da area de um retangulo\n");

    printf("Digite a base: ");
    scanf("%f", &b);
    printf("Digite a altura: ");
    scanf("%f", &h);

    a= b*h;
    if (a<100){
    printf("Sua area eh = %.2f", a);
            }
    
    else if (a>100) {
        printf("Sua area eh = %.2f\n", a);
        printf("Terreno grande");
            }

    return 0;
    }

