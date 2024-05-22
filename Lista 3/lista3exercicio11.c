#include <stdio.h>
#include <stdlib.h> // Para malloc e free

int main() {
    int n, contM = 0, contH = 0;
    printf("Digite quantas pessoas serao avaliadas: ");
    scanf("%d", &n);

    int *idade = (int*)malloc(n * sizeof(int));
    float *altura = (float*)malloc(n * sizeof(float));
    char *sexo = (char*)malloc(n * sizeof(char));

    // Verificando a alocação de memória
    if (idade == NULL || altura == NULL || sexo == NULL) {
        printf("Erro ao alocar memória\n");
        return 1; // Indica falha no programa
    }

    float altmedia = 0, variancia = 0;

    for (int i = 0; i < n; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Qual o sexo? (f/m)\n");
        scanf(" %c", &sexo[i]);

        printf("Qual a idade?\n");
        scanf("%d", &idade[i]);

        printf("Qual a altura?\n");
        scanf("%f", &altura[i]);

        altmedia += altura[i];
    }

    for (int i = 0; i < n; i++) {
        if (sexo[i] == 'f' && idade[i] >= 20 && idade[i] <= 30) {
            contM++;
        }

        if (sexo[i] == 'm' && altura[i] > 1.80) {
            contH++;
        }
    }

    altmedia = altmedia / n;

    for (int i = 0; i < n; i++) {
        variancia += (altura[i] - altmedia) * (altura[i] - altmedia);
    }
    variancia = variancia / n; // Corrigindo o cálculo da variância

    printf("\nNumero de mulheres com idade entre 20 e 30 anos: %d\n", contM);
    printf("Numero de homens com altura maior que 1,80m: %d\n", contH);
    printf("Variancia da altura: %.2f\n", variancia);

    // Liberando a memória alocada
    free(idade);
    free(altura);
    free(sexo);

    return 0;
}
