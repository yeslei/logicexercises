#include <stdio.h>
#define PI 3.14159265F

void calc_circulo(float r, float * circunferencia, float * area);

int main (){
    float r, c, a;
    scanf("%f", &r);
    calc_circulo(r, &c ,&a);
    printf("a circuferencia e: %.2f, e a area e: %.2f.", c , a);
    return 0;
}

void calc_circulo(float r, float * circunferencia, float * area){
    *area = PI * r * r;
    *circunferencia = 2 * PI * r;
}
