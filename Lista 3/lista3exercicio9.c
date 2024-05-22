#include <stdio.h>

int main() {
    int pulo[] = {10, 20, 30, 40, 50};

    printf("a) *(pulo + 2) = %d\n", *(pulo + 2));
    printf("b) *(pulo + 4) = %d\n", *(pulo + 4));
    printf("c) pulo + 4 = %x\n", pulo + 4);
    printf("d) pulo + 2 = %x\n", pulo + 2);

    return 0;
}
