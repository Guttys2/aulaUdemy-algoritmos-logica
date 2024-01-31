#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int N, i, cont;
    double soma, media;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    double vet[N];

    cont = 0;
    for (i = 0 ; i < N ; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
        cont = cont + 1;
    }

    soma = 0;
    media = 0;

    printf("\nVALORES = ");
    for (i = 0 ; i < N ; i++){
        soma = soma + vet[i];
        media = soma / cont;
        printf("%.1lf ",vet[i]);
    }

    printf("\nSOMA = %.2lf\n", soma);
    printf("MEDIA = %.2lf", media);

    return 0;
}
