/*
    Tabuada
    Crie um programa que exiba a tabuada de um n�mero informado pelo usu�rio.
 */

#include <stdio.h>
#include <locale.h>

#define MAX_SIZE 10

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int tabuada, multiplicacao;

    printf("\nInforme um n�mero para mostrar a tabuada: ");
    scanf("%d", &tabuada);

    printf("\n");
    printf("Tabuada do %d\n\n", tabuada);
    for (int contador = 1; contador <= MAX_SIZE; contador++)
    {
        multiplicacao = tabuada * contador;
        printf("%d X %d = %d\n", tabuada, contador, multiplicacao);
    }
}
