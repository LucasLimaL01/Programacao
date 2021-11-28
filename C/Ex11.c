#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    float a, b;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    if (a>b) {
printf ("O maior numero e = %.2f", a);
}
   else if(a<b) {
printf("O maior numero e = %.2f", b);
}
   else if(a=b) {
printf("Os numeros sao identicos");
}
 return 0;
 }