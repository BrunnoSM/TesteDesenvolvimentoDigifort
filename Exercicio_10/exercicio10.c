/*
    Calcular Hipotenusa
    Crie um programa que leia os comprimentos dos dois catetos de um triângulo retângulo e exiba o comprimento da hipotenusa.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    setlocale(LC_NUMERIC, "C"); // Para exibir o valor com ponto decimal.

    float param1, param2, calcHipotenusa;

    printf("Digite o comprimento do primeiro cateto: ");
    scanf("%f", &param1);

    printf("Digite o comprimento do segundo cateto: ");
    scanf("%f", &param2);

    calcHipotenusa = sqrt(pow(param1, 2) + pow(param2, 2));

    printf("O comprimento da hipotenusa é: %.2f\n", calcHipotenusa);

    return 0;
}
