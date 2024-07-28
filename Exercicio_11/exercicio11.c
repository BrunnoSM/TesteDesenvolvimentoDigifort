/*
    Jogo de Adivinha��o
    Escreva um programa que sorteie um n�mero entre 1 e 100 e permita que o usu�rio tente adivinhar o n�mero, dando dicas se o n�mero sorteado � maior ou menor do que o n�mero fornecido pelo usu�rio.
*/

#include <stdio.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int numeroSorteado, palpite, tentativas = 0;

    srand(time(0));
    numeroSorteado = rand() % 100 + 1;

    printf("Seja bem-vindo ao jogo de adivinha��o!\n");
    printf("Tente adivinhar um n�mero que estou pensando (entre 1 e 100)\n");

    do
    {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < numeroSorteado)
        {
            printf("O n�mmero sorteado � maior do que %d.\n", palpite);
        }
        else if (palpite > numeroSorteado)
        {
            printf("O n�mero sorteado � menor do que %d.\n", palpite);
        }
        else
        {
            printf("Parab�ns! Voc� adivinhou o n�mero %d em %d tentativas.\n", numeroSorteado, tentativas);
        }
    } while (palpite != numeroSorteado);

    return 0;
}
