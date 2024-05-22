#include <stdio.h>
#include <stdlib.h>


float media(int n, float *v);

int main (){
   int n;
   scanf("%d", &n);

   float *vetor = (float*)malloc(n * sizeof(float));
   if(vetor == NULL){
        printf("Error");
        exit(1);
   }

   for ( int i = 0; i < n; i++){
        printf("Digite o v[%d]: ", i);
        scanf("%f", &vetor[i]);
   }
   float mediat = media(n, vetor);
   printf("\n%.2f de media", mediat);
   return 0;

}

float media(int n, float *v){
    int soma = 0;
    for(int i = 0; i < n ; i++){
        soma += v[i];
    }
    return soma / (float)n;

}
