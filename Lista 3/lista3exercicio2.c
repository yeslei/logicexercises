#include <stdio.h>

int main (){
    int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;

    printf("%d - se tiver impresso 1 eh verdadeiro, se 0, falso \n", p == &i); /*(imprime 1)*/
    printf("%d \n", *p - *q); /*(imprime -2)*/
    printf("%d \n", **&p); /*(imprime 3)*/
    printf("%d", 3 * - *p / *q + 7); /*(imprime 6)*/

}
/*a) p == &i; b) *p - *q c) **&p d) 3* - *p/(*q)+7*/
