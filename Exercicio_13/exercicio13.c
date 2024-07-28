/*
    Calculadora Simples
    Crie um programa que simule uma calculadora simples capaz de realizar as operações de adição, subtração, multiplicação e divisão com dois números informados pelo usuário.
 */

#include <stdio.h>
#include <locale.h>

int Soma(int param1, int param2)
{
    return param1 + param2;
}

int Subtracao(int param1, int param2)
{
    return param1 - param2;
}

int Multiplicacao(int param1, int param2)
{
    return param1 * param2;
}

float Divisao(int param1, int param2)
{
    return param1 / param2;
}

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    setlocale(LC_NUMERIC, "C");

    int func, n1, n2;

    printf("\n\n===========CALCULADORA===========\n\n");
    printf("1 - SOMA\n");
    printf("2 - SUBTRAÇÃO\n");
    printf("3 - MULTIPLICAÇÃO\n");
    printf("4 - DIVISÃO\n");
    printf("\nInforme a função que deseja: ");
    scanf("%d", &func);

    printf("\n\n");

    switch (func)
    {

    case 1:
        printf("SOMA:\n");
        printf("Informe o primeiro número: ");
        scanf("%d", &n1);
        printf("Informe o segundo número: ");
        scanf("%d", &n2);
        printf("O resultado da soma é: %d\n", Soma(n1, n2));
        break;

    case 2:
        printf("SUBTRAÇÃO:\n");
        printf("Informe o primeiro número: ");
        scanf("%d", &n1);
        printf("Informe o segundo número: ");
        scanf("%d", &n2);
        printf("O resultado da subtração é: %d\n", Subtracao(n1, n2));
        break;

    case 3:
        printf("MULTIPLICAÇÃO:\n");
        printf("Informe o primeiro número: ");
        scanf("%d", &n1);
        printf("Informe o segundo número: ");
        scanf("%d", &n2);
        printf("O resultado da multiplicação é: %d\n", Multiplicacao(n1, n2));
        break;

    case 4:
        printf("DIVISÃO:\n");
        printf("Informe o primeiro número: ");
        scanf("%d", &n1);
        printf("Informe o segundo número: ");
        scanf("%d", &n2);
        printf("O resultado da divisão é: %.2f\n", Divisao(n1, n2));
        break;

    default:
        printf("Número inválido! Digite um número de 1 a 4\n");
    }
}
