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
    int hora;

    printf("Digite uma hora do dia: ");
    scanf("%d", &hora);

    if (hora < 12) {
        printf("Bom dia!\n");
    }
    else {
        printf("Boa tarde!\n");
    }

    return 0;
}
