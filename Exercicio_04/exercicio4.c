/*
    Maior e Menor N�mero
    Crie um programa que leia tr�s n�meros do usu�rio e exiba o maior e o menor entre eles.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int n1, n2, n3;

    printf("Digite 3 n�meros seguidos com 'Enter':\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("\n");

    // MAIOR

    if (n1 > n2 && n1 > n3)
    {
        printf("O n�mero %d � maior!", n1);
    }
    else if (n2 > n1 && n2 > n3)
    {
        printf("O n�mero %d � maior!", n2);
    }
    else
    {
        printf("O n�mero %d � maior!", n3);
    }

    printf("\n--------------------------------------------------------\n");

    // MENOR

    if (n1 < n2 && n1 < n3)
    {
        printf("O n�mero %d � menor!", n1);
    }
    else if (n2 < n1 && n2 < n3)
    {
        printf("O n�mero %d � menor!", n2);
    }
    else
    {
        printf("O n�mero %d � menor!", n3);
    }

    return 0;
}
