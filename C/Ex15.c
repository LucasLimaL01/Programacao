#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    float p, h, imc;

    printf("Digite seu peso: ");
    scanf("%f", &p);
    printf("Digite sua altura: ");
    scanf("%f", &h);
    imc=p/(h*h);
    if (imc<20) {
        printf("Abaixo do peso = %.2f", imc);
        }
    else if(20<=  imc <25) {
        printf("Peso ideal = %.2f", imc);
        }
    else if(imc>=25) {
        printf("Acima do peso = %.2f", imc);
        }

        return 0;

        }    