#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int N, i, j, cont;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &N);

    int mat[N][N];

    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nDIAGONAL PRINCIPAL:\n");
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            if (i == j){
                printf("%d ", mat[i][j]);
            }
        }
    }

    cont = 0;
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            if (mat[i][j] < 0){
                cont = cont + 1;
            }
        }
    }
    printf("\nQUANTIDADE DE NEGATIVOS = %d\n", cont);

    return 0;
}
