#include <stdio.h>
void maior(int a, int b, int c);
void menor(int a, int b, int c);
void par(int a, int b, int c);
void media(int a, int b, int c);

int main (){
    int a, b, c;
    scanf("%d %d %d", &a ,&b ,&c);
    maior(a,b,c);
    menor(a,b,c);
    par(a,b,c);
    media(a,b,c);
    return 0;
}


void maior(int a, int b, int c){
    int maior;
    maior = a;

    // Se 'b' for menor que 'menor', atualizamos 'menor'
    if (b > maior && b > c) {
        maior = b;
    }

    // Se 'c' for menor que 'menor', atualizamos 'menor'
    if (c > maior && c > a) {
        maior = c;
    }
    printf("%d\n", maior);
}

void menor(int a, int b, int c){
    int menor;
    printf("O menor numero\n");
    menor = a;

    // Se 'b' for menor que 'menor', atualizamos 'menor'
    if (b < menor && b < c) {
        menor = b;
    }

    // Se 'c' for menor que 'menor', atualizamos 'menor'
    if (c < menor && c < a) {
        menor = c;
    }

    printf("%d\n", menor);
}

void par(int a, int b, int c){
    printf("os pares sao\n");
    if(a % 2 == 0)printf("%d\n", a);
    if(b % 2 == 0)printf("%d\n", b);
    if(c % 2 == 0)printf("%d\n", c);
}

void media(int a, int b, int c){
    float media;

    media = (a + b + c) / 3.0;
    printf("%2.1f",media);
}

