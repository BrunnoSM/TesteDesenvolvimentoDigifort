/*
    Valida��o de Senha
        - Escreva um programa que leia uma senha do usu�rio e verifique se ela atende aos seguintes crit�rios:
        - Pelo menos 8 caracteres
        - Cont�m pelo menos uma letra mai�scula
        - Cont�m pelo menos uma letra min�scula
        - Cont�m pelo menos um n�mero
        - Cont�m pelo menos um caractere especial (como @, #, $)
*/

#include <stdio.h>
#include <locale.h>
#include <ctype.h> // Para fun��es isdigit, isupper, islower

int validarSenha(char senha[]);

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    char senha[100];

    printf("Digite uma senha que contenha pelo menos 8 caracteres, 1 letra mai�scula, 1 letra min�scula, pelo menos 1 n�mero e pelo menos um caractere especial(como @, #, $): ");
    fgets(senha, sizeof(senha), stdin);

    // Remove o caractere de nova linha no final da string
    size_t len = strlen(senha);
    if (senha[len - 1] == '\n')
    {
        senha[len - 1] = '\0';
    }

    if (validarSenha(senha))
    {
        printf("Senha v�lida.\n");
    }
    else
    {
        printf("Senha inv�lida.\n");
    }

    return 0;
}

int validarSenha(char senha[])
{
    int temMaiuscula = 0, temMinuscula = 0, temNumero = 0, temEspecial = 0;
    int i;

    // Percorre cada caractere da senha para verificar os crit�rios
    for (i = 0; senha[i] != '\0'; i++)
    {
        if (isupper(senha[i]))
        {
            temMaiuscula = 1;
        }
        else if (islower(senha[i]))
        {
            temMinuscula = 1;
        }
        else if (isdigit(senha[i]))
        {
            temNumero = 1;
        }
        else if (senha[i] == '@' || senha[i] == '#' || senha[i] == '$')
        {
            temEspecial = 1;
        }
    }

    // Verifica se a senha tem pelo menos 8 caracteres
    if (i < 8)
    {
        return 0;
    }

    return temMaiuscula && temMinuscula && temNumero && temEspecial;
}
