#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
   float p1, p2, m=5; 
        
   printf("Nota P1: ");
   scanf("%f", &p1);
   p2= (3*m - p1)/2;
   
   
   if (p2>= 6) {
       printf("O aluno precisa tirar: %.2f na P2", p2);
    }
    else { printf("O aluno precisa tirar: %.2f na P2", p2);
    }

    return 0;

    }