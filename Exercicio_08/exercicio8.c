/*
   C�lculo de M�dia
   Escreva um programa que leia v�rias notas do usu�rio (permitir a entrada de uma quantidade indefinida de notas) e exiba a m�dia delas.
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
        scanf(" %c", &continuar); // O espa�o antes de %c � para ignorar o enter

    } while (continuar == 's' || continuar == 'S');

    if (quantidade > 0)
    {
        printf("A m�dia das notas �: %.2f\n", soma / quantidade);
    }
    else
    {
        printf("Nenhuma nota foi informada.\n");
    }

    return 0;
}
