#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char s ;
    printf ("Genero: \n(F)Feminino\n(M)Masculino\n");
    scanf("%c", &s);

    while(s!='M' && s!='F'); {
    printf("Codigo digitado corretamente: \n ");
    scanf("%c", &s); 
    }
    printf("Valido\n");
    
return 0;

    }