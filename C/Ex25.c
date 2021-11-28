#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n=5, r ;

    printf("Taboada do numero 5: \n");
    for (int i=0; i <= 10; i++){
    r = n * i;
    printf("%i x %i = %i\n", n, i, r);
  }
 
  return 0;
}


