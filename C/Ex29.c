#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n, i;
    i=1;
    while (i <= 100)
    {
        n = n + i;
        i++;
    }

    printf("A soma total dos numeros inteiros de 1 a 100 eh igual: %d", n);
    return 0;

    }

