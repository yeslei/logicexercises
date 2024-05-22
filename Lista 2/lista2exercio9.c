#include <stdio.h>

unsigned int inverter (unsigned int n);
int main (){
    unsigned int n, invertido;
    scanf("%u", &n);
    invertido = inverter(n);
    printf("%u", invertido);
    return 0;
}

unsigned int inverter (unsigned int n){
    int numeroInvertido = 0;

    while (n != 0) {
        int digito = n % 10;
        numeroInvertido = numeroInvertido * 10 + digito; // Adiciona o d�gito ao n�mero invertido
        n /= 10; // Remove o �ltimo d�gito do n�mero original
    }


    return numeroInvertido;
}

