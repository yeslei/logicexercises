#include <stdio.h>

int total_de_notas(int valor);

int main(){
    int a;
    printf("Digite o valor: ");
    scanf("%d", &a);
    total_de_notas(a);
    return 0;
}

int total_de_notas(int valor){
    int cem, cinquenta, vinte, dez, cinco, dois, um;
    cem = valor / 100;
    valor = valor % 100;

    cinquenta = valor / 50;
    valor = valor % 50;

    vinte = valor / 20;
    valor = valor % 20;

    dez = valor / 10;
    valor = valor % 10;

    cinco = valor / 5;
    valor = valor % 5;

    dois = valor / 2;
    valor = valor % 2;

    um = valor / 1;

    printf("A menor quantidade de notas será:\n");
    if (cem > 0)
        printf("%d de cem.\n", cem);
    if (cinquenta > 0)
        printf("%d de cinquenta.\n", cinquenta);
    if (vinte > 0)
        printf("%d de vinte.\n", vinte);
    if (dez > 0)
        printf("%d de dez.\n", dez);
    if (cinco > 0)
        printf("%d de cinco.\n", cinco);
    if (dois > 0)
        printf("%d de dois.\n", dois);
    if (um > 0)
        printf("%d de um.\n", um);
}
