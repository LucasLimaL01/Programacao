#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    float l1, l2, l3;

    printf("Digite o primeiro lado do triangulo: ");
    scanf("%f", &l1);
    printf("Digite o segundo lado do triangulo: ");
    scanf("%f", &l2);
    printf("Digite o terceiro lado do triangulo: ");
    scanf("%f", &l3);

    if ( ((l1 + l2) > l3) &&
       ((l1 + l3) > l2) &&
       ((l2 + l3) > l1) ){
           if ( (l1 == l2) && (l1 == l3) ){
               printf("Triangulo Equilatero");
           }
           else if( (l1 != l2) && (l1 != l3) ){
               printf("Triangulo Escaleno");
           }
           else{
               printf("Triangulo Isosceles");
           }
       }
       else{
           printf("Nao eh um Triangulo");
       }
 
  return 0;
}

