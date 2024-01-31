#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int x, y, soma, troca;

    printf("Digite dois numeros: \n");
    scanf("%d %d", &x, &y);

    soma = 0;
    if(x > y){
        troca = x;
        x = y;
        y = troca;
    }
    for (int i=x+1 ; i < y ; i++){
        if(i % 2 != 0){
            soma = soma + i;
        }
    }


    printf("SOMA DOS IMPARES = %d\n", soma);
    return 0;
}
