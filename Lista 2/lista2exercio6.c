#include <stdio.h>
#include <stdlib.h>

int main (){
    int n, nuser;
    srand(time(NULL));
    n = rand() % 101;
    printf("%d\n", n);
    do{
        scanf("%d",&nuser);
        if(nuser > n){
            printf("o numero e menor\n");
        }else if (nuser < n){
            printf("o numero e maior\n");
        }
    }while(n != nuser);

    printf("voce acertou!!");


    return 0;
}
