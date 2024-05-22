#include <stdio.h>

int main (){
    int n, divisores = 0, i;
    scanf("%d",&n);
    for(i = 1; i <= n; i++){
        if(n % i == 0){
            divisores++;
        }
    }
    if(divisores > 2 || n == 1) printf("%d nao e primo", n);
    else printf("%d e primo", n);
    return 0;
}
