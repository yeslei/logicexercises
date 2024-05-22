#include <stdio.h>
#include <math.h>

int calcdelta(float a,float b, float c);
void calcbask(float a,float b, int delta);

int main (){
    float a,b,c;
    int delta;
    printf("Digite os coeficientes: ");
    scanf("%f %f %f", &a, &b,&c);
    delta = calcdelta(a,b,c);
    calcbask(a, b , delta);
    return 0;
}

int calcdelta(float a,float b, float c){
    int resultado = (int)(b*b -4*a*c);
    return resultado;
}

void calcbask(float a,float b, int delta){
    float resultado1 = (-b + sqrt(delta)) / (2 * a);
    float resultado2 = (-b - sqrt(delta)) / (2 * a);
    printf("%.0f\n",resultado1);
    printf("%.0f\n",resultado2);

}

