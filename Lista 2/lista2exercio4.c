#include <stdio.h>
#include <stdlib.h>

int main (){
    char n, nuser;
    srand(time(NULL));
    n = rand() % (122-97+1) + 97;
    printf("%c\n", n);

    do{
        scanf(" %c",&nuser);
        if(nuser < 97 || nuser > 122){
            printf("caractere invalido\n");
        }
        else {
            if( nuser == n){
                printf("voce acertou!");
            }
            else{
                if(nuser < n){
                    printf("maior\n");
                }
                else{
                    printf("menor\n");
                }
            }
        }

    } while ( nuser != n);
    return 0;
}

