/*
    N�meros Pares
    Escreva um programa que imprima todos os n�meros pares de 1 a 100.
*/

#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    int par = 1, contador = 100;

    printf("\nSequ�ncia de n�meros pares: \n\n");

    while (par <= contador)
    {
        if (par % 2 == 0)
        {
            printf("- %d\n", par);
        };
        par++;
    };

    printf("\n");

    return 0;
}