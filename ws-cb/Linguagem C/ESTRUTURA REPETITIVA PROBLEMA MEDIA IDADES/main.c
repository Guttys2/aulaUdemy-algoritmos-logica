#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int idades, soma, cont;
    double media;

    printf("Digite as idades: \n");
    scanf("%d", &idades);

    if (idades < 0 ){
        printf("IMPOSSIVEL CALCULAR\n");
    } else {
        soma = 0;
        media = 0;
        cont = 0;

        while (idades >= 0){
            soma = soma + idades;
            cont = cont + 1;
            scanf("%d", &idades);
        }

        media = (double)soma / cont;
        printf("MEDIA = %.2lf", media);
    }

    return 0;
}
