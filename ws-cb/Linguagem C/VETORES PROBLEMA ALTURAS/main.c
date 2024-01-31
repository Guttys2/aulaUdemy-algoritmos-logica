#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}
void ler_texto(char *buffer, int length) {
 fgets(buffer, length, stdin);
 strtok(buffer, "\n");
}

int main()
{
    int N, i, cont;
    double soma, mediaAltura, porcentagem;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    int idade[N];
    double altura[N];
    char nome[N][50];

    cont = 0;
    soma = 0;

    for (i = 0 ; i < N ; i++){
        printf("Dados da %da pessoa\n", i+1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(nome[i]);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Altura: ");
        scanf("%lf", &altura[i]);

        if (idade[i] < 16){
            cont++;
        }
        soma = soma + altura[i];
    }

    mediaAltura = 0;
    mediaAltura = soma / N;
    porcentagem = 0;
    porcentagem = cont * 100.0 / N;

    printf("\nAltura Media: %.2lf\n", mediaAltura);
    printf("Pessoas com menos de 16 anos: %.1lf %% \n", porcentagem);

    for (i = 0 ; i < N ; i++){
        if (idade[i] < 16) {
            printf("%s\n", nome[i]);
        }
    }


    return 0;
}
