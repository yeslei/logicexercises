#include <stdio.h>
int mdc (int x, int y);

int main (){
    int x,y,mdc1;
    scanf("%d %d", &x,&y);
    mdc1 = mdc(x,y);
    printf("o mmc e: %d", mdc1);
}

int mdc (int x, int y){
    int i, mdc = 0;
    if(x > y) {
        for(i = 1; i <= y;i++){
           if(x % i == 0 && y % i == 0){
                mdc = i;}
        }
    } else{
        for(i = 1; i <= x ;i++){
           if(x % i == 0 && y % i == 0){
               mdc = i;
               }
        }
    }
    return mdc;
    }
