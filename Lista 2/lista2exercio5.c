#include <stdio.h>

int main (){
    int x, y, i, total = 0, totaln = 0;
    scanf("%d", &x);
    i = x;
    do{
        scanf("%d", &y);
        if(y < x){
            printf("Digite um numero maior que x!!\n");
        }
    } while(y < x );

    while(total <= y){
        total += i;
        printf("%d\n",i);
        i++;
        totaln++;
    }
    printf("Soma: %d\n",total);
    printf("foram necessarios %d numeros",totaln);


    return 0;
}
