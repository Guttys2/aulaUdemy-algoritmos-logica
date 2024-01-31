#include <stdio.h>
#include <string.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main()
{
    double x, y, valor, area, preco;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &x);
    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &y);
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &valor);

    area = 0;
    preco = 0;

    area = x * y;
    preco = area * valor;

    printf("\nArea do terreno = %.2lf\n", area);
    printf("Preco do terreno = %.2lf\n", preco);

    return 0;
}
