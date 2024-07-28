/*
    Fatorial de um Número
    Escreva um programa que leia um número inteiro do usuário e exiba o fatorial desse número.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int n1;
    unsigned long long fatorial = 1; // Armazena grandes números

    printf("Informe um número para calcular o fatorial dele: ");
    scanf("%d", &n1);

    if (n1 < 0)
    {
        printf("O fatorial não é definido para números negativos.\n");
    }
    else
    {
        // Cálculo do fatorial usando a fórmula: fatorial = 1 * 2 * 3 * ... * n1
        for (int i = 1; i <= n1; i++)
        {
            fatorial *= i;
        }

        // llu para formatar valores do tipo 'unsigned long long'
        printf("O fatorial de %d (%d!) é %llu\n", n1, n1, fatorial);
    }

    return 0;
}
