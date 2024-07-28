/*
    Verificação de Palíndromo
    Escreva um programa que leia uma string do usuário e verifique se ela é um palíndromo (lê-se da mesma forma de trás para frente).
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    char str[MAX_SIZE], strClean[MAX_SIZE];
    int i, j = 0, len;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++)
    {
        if (isalnum(str[i]))
        {
            strClean[j++] = tolower(str[i]);
        }
    }
    strClean[j] = '\0';

    len = strlen(strClean);

    for (i = 0; i < len / 2; i++)
    {
        if (strClean[i] != strClean[len - 1 - i])
        {
            printf("A string não é um palíndromo.\n");
            return 0;
        }
    }

    printf("A string é um palíndromo.\n");
    return 0;
}
