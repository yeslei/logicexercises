#include <stdio.h>

float calcmedia(float nota1, float nota2, float nota3);

int main (){
    float nota1, nota2 ,nota3 , media;
    scanf("%f %f %f", &nota1,&nota2, &nota3);
    if(nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2  > 10 || nota3 < 0 || nota3 > 10){ printf("notas invalidas");}
    else{
        media = calcmedia(nota1,nota2,nota3);
        printf("%.1f\n", media);
        if(media < 4){
            printf("reprovado");
        }
        else if ( media < 6) {
            printf("Esta de VS");
        }
        else printf("aprovado");
    }
    return 0;
}


float calcmedia(float nota1, float nota2, float nota3){
    float media = (nota1 + nota2 + nota3)/3.0;
    return media;
}
