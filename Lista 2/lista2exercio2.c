#include <stdio.h>

int main (){
    int n, i, s = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        s += 2*i-1;
        printf("%d\n", 2*i-1);
    }
    printf("resultado: %d", s);
    return 0;
}
