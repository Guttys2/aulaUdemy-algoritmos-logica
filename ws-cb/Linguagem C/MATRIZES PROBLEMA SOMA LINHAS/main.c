#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int M, N, i, j;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &M);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &N);

    double mat[M][N], vet[M];

    for (i = 0; i < M; i++){
        printf("Digite os elementos da %da linhas: \n", i+1);
        for (j = 0; j < N; j++){
            scanf("%lf",
                  &mat[i][j]);
        }
    }

    printf("VETOR GERADO:\n");
    for (i = 0; i < M; i++){
        vet[i] = 0;
        for (j = 0; j < N; j++){
            vet[i] = vet[i] + mat[i][j];
        }
        printf("%.1lf\n", vet[i]);
    }


    return 0;
}
