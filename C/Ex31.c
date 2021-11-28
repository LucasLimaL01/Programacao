#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int a, b, f, n;
    
    a=1;
    b=1;
    f=1;
     getch ();
     printf("Os vinte primeiros valores da serie de Bergamaschi sao: ");
     printf("%d\n%d\n%d\n", a,b,f);
     for (int i=0; i<18; i++){
         n=a+b+f;
         a=b;
         b=f;
         f=n;
         printf("%i\n", n);
         }

         return 0;

         }