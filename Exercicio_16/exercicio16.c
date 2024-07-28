/*
    Manipula��o de Arrays
    Crie um programa que permita ao usu�rio manipular uma lista de n�meros atrav�s das seguintes opera��es:

    Adicionar um n�mero na lista.
    Remover um n�mero da lista.
    Mudar a posi��o de um n�mero na lista.

    Especifica��es

    Adicionar N�mero: O usu�rio dever� informar o n�mero a ser adicionado � lista.
    Remover N�mero: O usu�rio dever� informar o n�mero a ser removido da lista. Caso o n�mero n�o esteja na lista, exibir uma mensagem de erro.
    Mudar Posi��o de N�mero: O usu�rio dever� informar o n�mero e a nova posi��o desejada na lista. Caso o n�mero n�o esteja na lista ou a posi��o seja inv�lida, exibir uma mensagem de erro.
*/

#include <stdio.h>
#include <locale.h>

#define MAX_SIZE 100

void adicionarNumero(int lista[], int *tamanho, int numero);
void removerNumero(int lista[], int *tamanho, int numero);
void mudarPosicao(int lista[], int *tamanho, int numero, int novaPosicao);
void imprimirLista(int lista[], int tamanho);

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int lista[MAX_SIZE];
    int tamanho = 0;
    int escolha, numero, novaPosicao;

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Adicionar um n�mero\n");
        printf("2. Remover um n�mero\n");
        printf("3. Mudar a posi��o de um n�mero\n");
        printf("4. Exibir a lista\n");
        printf("5. Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            printf("Digite o n�mero a ser adicionado: ");
            scanf("%d", &numero);
            adicionarNumero(lista, &tamanho, numero);
            break;
        case 2:
            printf("Digite o n�mero a ser removido: ");
            scanf("%d", &numero);
            removerNumero(lista, &tamanho, numero);
            break;
        case 3:
            printf("Digite o n�mero cuja posi��o ser� alterada: ");
            scanf("%d", &numero);
            printf("Digite a nova posi��o (1 a %d): ", tamanho);
            scanf("%d", &novaPosicao);
            mudarPosicao(lista, &tamanho, numero, novaPosicao - 1);
            break;
        case 4:
            imprimirLista(lista, tamanho);
            break;
        case 5:
            return 0;
        default:
            printf("Op��o inv�lida! Tente novamente.\n");
        }
    }
}

void adicionarNumero(int lista[], int *tamanho, int numero)
{
    if (*tamanho >= MAX_SIZE)
    {
        printf("A lista est� cheia.\n");
        return;
    }
    lista[*tamanho] = numero;
    (*tamanho)++;
    printf("N�mero %d adicionado.\n", numero);
}

void removerNumero(int lista[], int *tamanho, int numero)
{
    int i, encontrado = 0;
    for (i = 0; i < *tamanho; i++)
    {
        if (lista[i] == numero)
        {
            encontrado = 1;
            break;
        }
    }
    if (!encontrado)
    {
        printf("N�mero %d n�o encontrado.\n", numero);
        return;
    }
    for (int j = i; j < *tamanho - 1; j++)
    {
        lista[j] = lista[j + 1];
    }
    (*tamanho)--;
    printf("N�mero %d removido.\n", numero);
}

void mudarPosicao(int lista[], int *tamanho, int numero, int novaPosicao)
{
    int i, encontrado = 0;
    if (novaPosicao < 0 || novaPosicao >= *tamanho)
    {
        printf("Posi��o inv�lida.\n");
        return;
    }
    for (i = 0; i < *tamanho; i++)
    {
        if (lista[i] == numero)
        {
            encontrado = 1;
            break;
        }
    }
    if (!encontrado)
    {
        printf("N�mero %d n�o encontrado.\n", numero);
        return;
    }
    int temp = lista[i];
    if (i < novaPosicao)
    {
        for (int j = i; j < novaPosicao; j++)
        {
            lista[j] = lista[j + 1];
        }
    }
    else if (i > novaPosicao)
    {
        for (int j = i; j > novaPosicao; j--)
        {
            lista[j] = lista[j - 1];
        }
    }
    lista[novaPosicao] = temp;
    printf("N�mero %d movido para a posi��o %d.\n", numero, novaPosicao + 1);
}

void imprimirLista(int lista[], int tamanho)
{
    if (tamanho == 0)
    {
        printf("A lista est� vazia.\n");
        return;
    }
    printf("Lista: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", lista[i]);
    }
    printf("\n");
}
