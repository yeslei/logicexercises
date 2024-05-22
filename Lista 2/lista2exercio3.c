#include <stdio.h>

int main (){
    int n, i, t1 = 0, t2 = 1, t3 = 0;
    scanf("%d", &n);
    printf("%d ", t2);
    if(n > 1){
        for( i = 1; i < n ; i++){
        t3 = t1 + t2;
        printf("%d ", t3);
        t1 = t2;
        t2 = t3;
    }
    }

    return 0;
}
