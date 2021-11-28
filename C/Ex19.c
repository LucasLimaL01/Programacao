#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    float a, v0, t, v, vf ;

    printf("Aceleracao em m/s2: ");
    scanf("%f", &a);
    printf("Velocidade inicial em m/s: ");
    scanf("%f", &v0);
    printf("Tempo de percurso em segundos: ");
    scanf("%f" , &t);

    v= v0+(a*t);
    vf= v*3.6;

    if (40 >= vf) {
        printf("Veiculo muito lento = %.1fKM/H", vf);
        }
    else if (40 < vf && vf <= 60) {
        printf("Velocidade permitida = %.1fKM/H", vf);
        }
    else if (60< vf && vf <=80) {
        printf("Velocidade de cruzeiro = %.1fKM/H", vf);
        }
    else if(80 < vf && vf <= 120) {
        printf("Veiculo rapido = %.1fKM/H", vf);
        }
    else (vf>120); {
        printf("Veiculo muito rapido = %.1fKM/H", vf);
        }  

    return 0;

    }              





