/*
    Fatorial de um N�mero
    Escreva um programa que leia um n�mero inteiro do usu�rio e exiba o fatorial desse n�mero.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int n1;
    unsigned long long fatorial = 1; // Armazena grandes n�meros

    printf("Informe um n�mero para calcular o fatorial dele: ");
    scanf("%d", &n1);

    if (n1 < 0)
    {
        printf("O fatorial n�o � definido para n�meros negativos.\n");
    }
    else
    {
        // C�lculo do fatorial usando a f�rmula: fatorial = 1 * 2 * 3 * ... * n1
        for (int i = 1; i <= n1; i++)
        {
            fatorial *= i;
        }

        // llu para formatar valores do tipo 'unsigned long long'
        printf("O fatorial de %d (%d!) � %llu\n", n1, n1, fatorial);
    }

    return 0;
}
