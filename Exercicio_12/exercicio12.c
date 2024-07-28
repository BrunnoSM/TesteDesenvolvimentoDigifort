/*
    Sequ�ncia de Fibonacci
    Crie um programa que exiba os n primeiros termos da sequ�ncia de Fibonacci, onde n � informado pelo usu�rio.
 */

#include <stdio.h>
#include <locale.h>

#define MAX_SIZE 10

int Fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int termo = MAX_SIZE;

    printf("Vamos fazer uma sequ�ncia de Fibonacci com %d termos: ", termo);

    for (int i = 0; i < termo; i++)
    {
        printf(" %d", Fibonacci(i));
    }
    printf("\n");
}
