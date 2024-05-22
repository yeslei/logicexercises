#include <stdio.h>
#include <math.h>


int main (){
    float a;
    printf("Digite o numero: ");
    scanf("%f",&a);

    float arredondadocima = ceil(a);
    printf("Arredontamento pra cima %.0f\n", arredondadocima);

    float arredondadobaixo = floor(a);
    printf("Arredontamento pra baixo %.0f\n", arredondadobaixo);

}


