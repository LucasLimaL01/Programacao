#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    float a, b, c;

    printf("Valor A: ");
    scanf("%f", &a);
    printf("Valor B: ");
    scanf("%f", &b);
    printf("Valor C: ");
    scanf("%f", &c);

     if ((a * a == b * b + c * c) ||
        (b * b == c * c + a * a) ||    
        (c * c == a * a + b * b)) printf("Triangulo Retangulo\n");
         
    
           else{
           printf("Nao eh um Triangulo Retangulo");
       }
return 0;

}
        