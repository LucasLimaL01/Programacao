#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    float a, b, c;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    printf("Digite o terceiro numero: ");
    scanf("%f", &c);

    if (a>=b && a>=c) {
        printf("O maior numero = %.2f", a);
        }
    else if(b>=a && b>=c) {
        printf("O maior numero = %.2f", b);
        }
    else if(c>a && c>b) {
        printf("O maior numero = %.2f", c);
        }

        return 0;

        }    