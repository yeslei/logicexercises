#include <stdio.h>

int maiores(int n, int * vet, int x);

int main (){
    int n, i,x ;
    scanf("%d %d",&n, &x);

    int vet[n];
    for(i = 0; i < n; i++){
        printf("Digite o numero da posicao v[%d]: ", i);
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d", vet[i]);
    }

    int maior = maiores( n, vet, x);
    printf("\n%d numeros maiores que %d", maior, x);

    return 0;
}

int maiores(int n, int * vet, int x){
    int maiores = 0;
    for (int i = 0; i < n; i++) {
        if(vet[i] > x){
            maiores++;
        }
    }
    return maiores;
}

