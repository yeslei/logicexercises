#include <stdio.h>

int main(){
    int *pti;
    int veti[]={10,7,2,6,3};
    pti = veti;

    printf("%d\n", *pti);
    printf("%d\n", *(pti+2));
    printf("%d\n", *(pti+2));
    printf("%d\n", pti[4]);
    printf("%d\n", pti[1]); //falsa
    printf("%d\n", *(veti+3));
    printf("%d\n", veti);
    printf("%d\n", &veti);
    printf("%d\n", *pti);
    printf("%d\n", *veti);

}
