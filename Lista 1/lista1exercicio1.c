#include <stdio.h>

int main (){
    int segundos, horas, minutos;
    printf("Digite os segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundos = segundos % 3600;

    minutos = segundos / 60;
    segundos = segundos % 60;

    printf("horas: %d, minutos: %d, segundos:%d ", horas, minutos,segundos);
    return 0;
}
