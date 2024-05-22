#include <stdio.h>


int main (){
    int i, s1,s2,soma;
    for(i = 1000; i < 10000; i++){
        s1 = i /100;
        s2 = i%100;
        soma = s1 + s2;
        if (soma * soma == i)printf("%d\n",i);
    }
    return 0;
}

