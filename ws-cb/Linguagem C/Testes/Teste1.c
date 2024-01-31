#include <stdio.h>
#include <string.h>

int main ()
{
    // Int como um valor "Inteiro/L�gico"
    int idade;
    // Para valores reais
    double salario, altura;
    // Para caracteres �nicos
    char genero;
    // Para texto, especificando o tamanho m�ximo do texto
    char nome[50];

    // Atribui��o feita com o =
    idade = 20;
    salario = 5800.5;
    altura = 1.63;
    genero = 'F';
    // Forma utilizada para implantar um nome dentro de uma vari�vel de texto
    strcpy(nome, "Maria Silva");


    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2lf\n", salario);
    printf("ALTURA = %.2lf\n", altura);
    printf("GENERO = %c\n", genero);
    printf("NOME = %s\n", nome);

    return 0;
}
