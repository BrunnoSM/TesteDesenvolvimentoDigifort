/*
    Maior e Menor Número
    Crie um programa que leia três números do usuário e exiba o maior e o menor entre eles.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int n1, n2, n3;

    printf("Digite 3 números seguidos com 'Enter':\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("\n");

    // MAIOR

    if (n1 > n2 && n1 > n3)
    {
        printf("O número %d é maior!", n1);
    }
    else if (n2 > n1 && n2 > n3)
    {
        printf("O número %d é maior!", n2);
    }
    else
    {
        printf("O número %d é maior!", n3);
    }

    printf("\n--------------------------------------------------------\n");

    // MENOR

    if (n1 < n2 && n1 < n3)
    {
        printf("O número %d é menor!", n1);
    }
    else if (n2 < n1 && n2 < n3)
    {
        printf("O número %d é menor!", n2);
    }
    else
    {
        printf("O número %d é menor!", n3);
    }

    return 0;
}
