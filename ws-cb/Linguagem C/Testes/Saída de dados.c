#include <stdio.h>
#include <string.h>

int main ()
{
    printf("Bom dia\n");
    printf("Boa noite\n");

    int a, b;

    a = 10;
    b = 20;

    printf("%d\n", a);
    printf("%d\n", b);

    double c = 2.3456;

    printf("%.2lf\n", c);

    int idade;
    double salario;
    char nome[50];
    char sexo;

    idade = 32;
    salario = 4560.9;
    strcpy(nome, "Maria Silva");
    sexo = 'F';

    printf("A funcionaria %s, sexo %c, ganha R$%.2lf e tem %d anos\n", nome, sexo, salario, idade);

    int x;
    double y;

    x = 5;
    y = 2 * x;

    printf("%d\n", x);
    printf("%.1lf\n", y);

    return 0;
}
