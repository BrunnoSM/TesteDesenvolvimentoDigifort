/*
    Soma de Dois Números
    Crie um programa que leia dois números do usuário e exiba a soma deles.
*/

#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    int n1, n2, soma;

    printf("\n\nSOMA: \n\n");
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    soma = n1 + n2;

    printf("Resultado da soma entre %d e %d é %d\n\n", n1, n2, soma);

    return 0;
}