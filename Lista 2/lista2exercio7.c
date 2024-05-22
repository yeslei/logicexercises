#include <stdio.h>
float calcularsalario(float h, float v);

int main (){
    float h, v, resultado;
    scanf("%f %f", &h, &v);
    resultado = calcularsalario(h, v);
    printf("R$%.2f" , resultado);
    return 0;
}

float calcularsalario(float h, float v){
    float aux;
    if(h < 41){
        return h*v;
    }
    else if( h < 61){
            aux = 40*v;
            h -= 40;
            aux += h * (v*1.5);
            return aux;
    } else {
        aux = 40*h;
        h -= 40;
        aux += h * (v*1.5);
        h -= 20;
        aux += h * (v*2);
        return aux;
    }
}
