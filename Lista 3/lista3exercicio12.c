#include <conio.h>
#include <stdio.h>

int main() {
    int i,i2;
    char c;
    char vetor[81];
    for(i = 0; i < 81; i++){
        c = getch();
        if(c == '\r'){
            break;
        }
        vetor[i] = c;
        printf("%c",c);
    }
    printf("\n");
    vetor[i] = '\0';

    for(i2 = 0; i2 < i; i2++){
        if(vetor[i2] == ' '){
            printf("\n");
            continue;
        }
        printf("%c", vetor[i2]);
    }
    return 0;
}
