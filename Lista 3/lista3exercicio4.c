#include <stdio.h>

void divs(int n, int * max, int * min);

int main (){
    int n, max, min;
    scanf("%d", &n);
    divs(n, &max ,&min);
    printf("min %d max %d.", min , max);
    return 0;
}

void divs(int n, int * max, int * min){
    int i = 2;
    if( n == 1){
        *max = *min = 1;
    }

    while( *min == 0){
         if(n % i == 0){
            *min = i;
         }
         i++;
    }
    *max = n / (*min);
    if(*max == 1){
        *max = n;
        printf("é um numero primo \n");
    }
}
