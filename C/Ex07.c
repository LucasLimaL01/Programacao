#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    float a, b, c, d, e, soma, pagamento, troco;

    printf("Valor do produto 1: ");
    scanf("%f", &a);
    printf("Valor do produto 2: ");
    scanf("%f", &b);
    printf("Valor do produto 3: ");
    scanf("%f", &c);
    printf("Valor do produto 4: ");
    scanf("%f", &d);
    printf("Valor do produto 5: ");
    scanf("%f", &e);

    soma= a+b+c+d+e;
    printf("Total= %.2f\n", soma);

    printf("Valor pago: ");
    scanf("%f", &pagamento);

    troco= pagamento-soma;

    printf("Seu troco eh: %.2f", troco);
    return 0;

    }



