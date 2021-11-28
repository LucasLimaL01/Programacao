#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  
  int numero, r, n1, n2;
 
  printf("Digite um numero positivo: ");
  scanf("%i", &numero);
 
  while(numero <= 0){
    printf("Erro! Apenas numeros positivos. Digite novamente: ");
    scanf("%i", &numero);
}
  if  (numero > 0) {printf("Digite o primeiro numero: ");
  scanf("%i", &n1);
  printf("Digite o segundo numero: ");
  scanf("%i" ,&n2); 
  while(n1 >= n2){
    printf("Digite novamente o segundo numero: ");
    scanf("%i", &n2);
  }
}

for (int i=n2; i>=n1; i--){
    r = numero * i;
    printf("%i x %i = %i\n", numero, i, r);
}
return 0;

  
}
