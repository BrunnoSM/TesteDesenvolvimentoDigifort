/*
    Verifica��o de Pal�ndromo
    Escreva um programa que leia uma string do usu�rio e verifique se ela � um pal�ndromo (l�-se da mesma forma de tr�s para frente).
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
            printf("A string n�o � um pal�ndromo.\n");
            return 0;
        }
    }

    printf("A string � um pal�ndromo.\n");
    return 0;
}
