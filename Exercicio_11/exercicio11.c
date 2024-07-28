/*
    Jogo de Adivinhação
    Escreva um programa que sorteie um número entre 1 e 100 e permita que o usuário tente adivinhar o número, dando dicas se o número sorteado é maior ou menor do que o número fornecido pelo usuário.
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

    printf("Seja bem-vindo ao jogo de adivinhação!\n");
    printf("Tente adivinhar um número que estou pensando (entre 1 e 100)\n");

    do
    {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < numeroSorteado)
        {
            printf("O númmero sorteado é maior do que %d.\n", palpite);
        }
        else if (palpite > numeroSorteado)
        {
            printf("O número sorteado é menor do que %d.\n", palpite);
        }
        else
        {
            printf("Parabéns! Você adivinhou o número %d em %d tentativas.\n", numeroSorteado, tentativas);
        }
    } while (palpite != numeroSorteado);

    return 0;
}
