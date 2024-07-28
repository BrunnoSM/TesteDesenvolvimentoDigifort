/*
    N�meros Primos (N�meros divididos por 1 e por ele mesmo, sem deixar resto)
    Fa�a um programa que imprima todos os n�meros primos de 1 a 100.
*/

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

bool ehPrimo(int numero);

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    int i;

    printf("N�meros primos de 1 a 100:\n");

    for (i = 2; i <= 100; i++)
    {
        if (ehPrimo(i))
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

bool ehPrimo(int numero)
{
    int j;

    if (numero < 2)
    {
        return false;
    }

    for (j = 2; j <= numero / 2; j++)
    {
        if (numero % j == 0)
        {
            return false;
        }
    }

    return true;
}
