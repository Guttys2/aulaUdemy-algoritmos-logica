#include <stdio.h>
#include <string.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main ()
{
    int idade;
    double salario, altura;
    char genero;
    char nome[50];

    printf("Digite o valor da idade: ");
    scanf("%d", &idade);

    printf("Digite o salario: ");
    scanf("%lf", &salario);

    printf("Digite sua altura: ");
    scanf("%lf", &altura);

    printf("Digite seu nome: ");
    limpar_entrada();
    fgets(nome, 50, stdin);

    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2lf\n", salario);
    printf("ALTURA = %.2lf\n", altura);
    printf("NOME = %s\n", nome);

}
