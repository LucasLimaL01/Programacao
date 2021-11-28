#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int n1, n2;
 
  printf("Digite um numero: ");
  scanf("%i", &n1);
  printf("Digite um numero: ");
  scanf("%i" ,&n2);
  while(n1 >= n2){
    printf("Digite novamente o numero: ");
    scanf("%i", &n2);
  }

return 0;

}