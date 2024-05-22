#include <stdio.h>

void soma(float valor1, float valor2);
void div(float valor1, float valor2);
void multi(float valor1, float valor2);
void sub(float valor1, float valor2);

int main (){
   char escolha;
   float valor1, valor2;

   scanf("%c", &escolha);
   scanf("%f %f", &valor1, &valor2);
    switch(escolha){
        case '+' : soma(valor1,valor2);break;
        case '/' : div(valor1,valor2);break;
        case '*' : multi(valor1,valor2);break;
        case '-' : sub(valor1,valor2);break;
        default : printf ("Operador invalido!\n");
    }
}


void soma(float valor1, float valor2){
    float resultado = valor1 + valor2;
    printf("%.1f", resultado);
}

void sub(float valor1, float valor2){
    float resultado = valor1 - valor2;
    printf("%.1f", resultado);
}

void multi(float valor1, float valor2){
    float resultado = valor1 * valor2;
    printf("%.1f", resultado);
}

void div(float valor1, float valor2){
    float resultado = valor1 / valor2;
    printf("%.1f", resultado);
}
