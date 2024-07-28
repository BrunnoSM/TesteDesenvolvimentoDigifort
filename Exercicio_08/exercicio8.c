/*
   Cálculo de Média
   Escreva um programa que leia várias notas do usuário (permitir a entrada de uma quantidade indefinida de notas) e exiba a média delas.
 */

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    setlocale(LC_NUMERIC, "C");

    int quantidade = 0;
    float nota, soma = 0.0;
    char continuar;

    do
    {
        printf("Informe uma nota: ");
        scanf("%f", &nota);

        soma += nota;
        quantidade += 1;

        printf("Deseja adicionar mais uma nota? (s/n): ");
        scanf(" %c", &continuar); // O espaço antes de %c é para ignorar o enter

    } while (continuar == 's' || continuar == 'S');

    if (quantidade > 0)
    {
        printf("A média das notas é: %.2f\n", soma / quantidade);
    }
    else
    {
        printf("Nenhuma nota foi informada.\n");
    }

    return 0;
}
