#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
   float p1, p2, m; 

   printf("Nota P1: ");
   scanf("%f", &p1);
   printf("Nota P2: ");
   scanf("%f", &p2);

   m= (p1+(2*p2))/3;

   if (m>= 5) {
       printf("O aluno foi aprovado com a nota %.2f", m);
    }
    else { printf("O aluno foi reprovado com a nota %.2f", m);
    }

    return 0;

    }

