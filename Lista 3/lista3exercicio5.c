


#include <stdio.h>

float max_vet (int n, float * vet);

int main (){
    int n, i;
    scanf("%d",&n);

    float vet[n];
    for(i = 0; i < n; i++){
        printf("Digite o numero da posicao v[%d]: ", i);
        scanf("%f", &vet[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%.2f ", vet[i]);
    }

    float maior = max_vet( n, vet);
    printf("\n%.2f e o maior numero do array", maior);

    return 0;
}

float max_vet (int n, float * vet){
    float maior = 0;
    for (int i = 0; i < n; i++) {
        if(vet[i] > maior){
            maior = vet[i];
        }
    }
    return maior;
}
