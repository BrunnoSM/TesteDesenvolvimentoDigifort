/*
    Soma de Dois N�meros
    Crie um programa que leia dois n�meros do usu�rio e exiba a soma deles.
*/

#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    int n1, n2, soma;

    printf("\n\nSOMA: \n\n");
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &n1);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &n2);

    soma = n1 + n2;

    printf("Resultado da soma entre %d e %d � %d\n\n", n1, n2, soma);

    return 0;
}