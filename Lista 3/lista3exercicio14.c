#include <stdio.h>
#include <conio.h>
#define pessoas 100

int main (){
    int idade[pessoas-1];
    float dif, otimo, media, difmaior;
    char respostas[pessoas-1];

    for(int i = 0; i < pessoas; i++){
        printf("idade da %d pessoa\n", i+1);
        scanf("%d", &idade[i]);
        getchar();
        printf("opiniao da %d pessoa\n", i+1);
        printf("Digite: 'o' para otimo, 'b' para bom, 'm' para medio, 'r' para ruim, 'p' para pessimo\n");
        scanf(" %c", &respostas[i]);
        getchar();
    }

    printf("Quantidade de respostas '�timo': %d\n", otimo);
    printf("Diferen�a percentual entre respostas 'bom' e 'regular': %.2f%%\n", dif);
    printf("M�dia de idade das pessoas que responderam 'ruim': %.2f\n", media);
    printf("Diferen�a de idade entre a maior idade que respondeu '�timo' e a maior idade que respondeu 'ruim': %d\n", difmaior);
}
