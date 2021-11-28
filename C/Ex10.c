#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    float a, b;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    if (a<b) {
printf ("O menor numero e = %.2f", a);
}
   else if(a>b) {
printf("O menor numero e = %.2f", b);
}
 return 0;
 }