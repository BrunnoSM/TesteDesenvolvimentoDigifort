/*
    Calculadora Simples
    Crie um programa que simule uma calculadora simples capaz de realizar as opera��es de adi��o, subtra��o, multiplica��o e divis�o com dois n�meros informados pelo usu�rio.
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
    printf("2 - SUBTRA��O\n");
    printf("3 - MULTIPLICA��O\n");
    printf("4 - DIVIS�O\n");
    printf("\nInforme a fun��o que deseja: ");
    scanf("%d", &func);

    printf("\n\n");

    switch (func)
    {

    case 1:
        printf("SOMA:\n");
        printf("Informe o primeiro n�mero: ");
        scanf("%d", &n1);
        printf("Informe o segundo n�mero: ");
        scanf("%d", &n2);
        printf("O resultado da soma �: %d\n", Soma(n1, n2));
        break;

    case 2:
        printf("SUBTRA��O:\n");
        printf("Informe o primeiro n�mero: ");
        scanf("%d", &n1);
        printf("Informe o segundo n�mero: ");
        scanf("%d", &n2);
        printf("O resultado da subtra��o �: %d\n", Subtracao(n1, n2));
        break;

    case 3:
        printf("MULTIPLICA��O:\n");
        printf("Informe o primeiro n�mero: ");
        scanf("%d", &n1);
        printf("Informe o segundo n�mero: ");
        scanf("%d", &n2);
        printf("O resultado da multiplica��o �: %d\n", Multiplicacao(n1, n2));
        break;

    case 4:
        printf("DIVIS�O:\n");
        printf("Informe o primeiro n�mero: ");
        scanf("%d", &n1);
        printf("Informe o segundo n�mero: ");
        scanf("%d", &n2);
        printf("O resultado da divis�o �: %.2f\n", Divisao(n1, n2));
        break;

    default:
        printf("N�mero inv�lido! Digite um n�mero de 1 a 4\n");
    }
}
