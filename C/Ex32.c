#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n1,n2,i,soma;
	printf ("Numero positivo menor que 100: ");
	scanf ("%i", &n1);
	
	while ((n1<0) || (n1>100))
	{
		printf ("Numero invalido, digite novamente: ");
    	scanf ("%i", &n1);
	}	
	
soma=0;
	for (i=1; i<=n1; i++)
	{
		printf ("%i\n",soma);		
		n2=(i*i)+1;
        soma=soma+n2;
	}	
return 0;
}