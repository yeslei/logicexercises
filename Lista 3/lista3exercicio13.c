#include <stdio.h>

int main() {
    int a, b, c, d;
    float e, f, g, h;
    char v[10];
    int x;

    int *ptr = &a;
    while(1){
        printf("endereco apontado inicialmente: %x\n", ptr);
    ptr++;


    printf("endereco apontado apos incremento: %x\n", ptr);


    if (ptr == &b) {
        printf("o endereco apontado coincide com o endereco de b.\n");
        break;
    }
    if (ptr == &c) {
        printf("o endereco apontado coincide com o endereco de c.\n");
        break;
    }
    if (ptr == &d) {
        printf("o endereco apontado coincide com o endereco de d.\n");
        break;
    }
    if (ptr == &e) {
        printf("o endereco apontado coincide com o endereco de e.\n");
        break;
    }
    if (ptr == &f) {
        printf("o endereco apontado coincide com o endereco de f.\n");
        break;

    if (ptr == &g) {
        printf("o endereco apontado coincide com o endereco de g.\n");
        break;
    }
    if (ptr == &h) {
        printf("o endereco apontado coincide com o endereco de h.\n");
        break;
    }
    if (ptr == &v) {
        printf("o endereco apontado coincide com o endereco de v.\n");
        break;
    }
    if (ptr == &x) {
        printf("o endereco apontado coincide com o endereco de x.\n")
        ;break;
    }

    }

    }
}
