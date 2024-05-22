#include <stdio.h>

int main() {
    int i=5, *p;
    p = &i;
    printf("%x %d %d \n", p, *p+2, 3**p);
    // 4090 pois p tem o endereco de i q é 4090
    // 7 15
}
