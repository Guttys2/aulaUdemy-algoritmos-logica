#include <stdio.h>
#include <string.h>

int main ()
{
    // Int como um valor "Inteiro/Lógico"
    int idade = 20;
    // Para valores reais
    double salario, altura;
    // Para caracteres únicos
    char genero;
    // Para texto, especificando o tamanho máximo do texto
    char nome[50] = "Maria Silva";

    // Atribuição feita com o =
    salario = 5800.5;
    altura = 1.63;
    genero = 'F';

    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2lf\n", salario);
    printf("ALTURA = %.2lf\n", altura);
    printf("GENERO = %c\n", genero);
    printf("NOME = %s\n", nome);

    return 0;
}
