#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int N, i, x;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &N);

    for (i=1 ; i <= 10 ; i++){
        x = N * i;
        printf("%d x %d = %d\n", N, i, x);
    }

    return 0;
}
