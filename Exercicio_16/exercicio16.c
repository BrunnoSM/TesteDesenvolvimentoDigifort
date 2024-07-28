/*
    Manipulação de Arrays
    Crie um programa que permita ao usuário manipular uma lista de números através das seguintes operações:

    Adicionar um número na lista.
    Remover um número da lista.
    Mudar a posição de um número na lista.

    Especificações

    Adicionar Número: O usuário deverá informar o número a ser adicionado à lista.
    Remover Número: O usuário deverá informar o número a ser removido da lista. Caso o número não esteja na lista, exibir uma mensagem de erro.
    Mudar Posição de Número: O usuário deverá informar o número e a nova posição desejada na lista. Caso o número não esteja na lista ou a posição seja inválida, exibir uma mensagem de erro.
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
        printf("1. Adicionar um número\n");
        printf("2. Remover um número\n");
        printf("3. Mudar a posição de um número\n");
        printf("4. Exibir a lista\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            printf("Digite o número a ser adicionado: ");
            scanf("%d", &numero);
            adicionarNumero(lista, &tamanho, numero);
            break;
        case 2:
            printf("Digite o número a ser removido: ");
            scanf("%d", &numero);
            removerNumero(lista, &tamanho, numero);
            break;
        case 3:
            printf("Digite o número cuja posição será alterada: ");
            scanf("%d", &numero);
            printf("Digite a nova posição (1 a %d): ", tamanho);
            scanf("%d", &novaPosicao);
            mudarPosicao(lista, &tamanho, numero, novaPosicao - 1);
            break;
        case 4:
            imprimirLista(lista, tamanho);
            break;
        case 5:
            return 0;
        default:
            printf("Opção inválida! Tente novamente.\n");
        }
    }
}

void adicionarNumero(int lista[], int *tamanho, int numero)
{
    if (*tamanho >= MAX_SIZE)
    {
        printf("A lista está cheia.\n");
        return;
    }
    lista[*tamanho] = numero;
    (*tamanho)++;
    printf("Número %d adicionado.\n", numero);
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
        printf("Número %d não encontrado.\n", numero);
        return;
    }
    for (int j = i; j < *tamanho - 1; j++)
    {
        lista[j] = lista[j + 1];
    }
    (*tamanho)--;
    printf("Número %d removido.\n", numero);
}

void mudarPosicao(int lista[], int *tamanho, int numero, int novaPosicao)
{
    int i, encontrado = 0;
    if (novaPosicao < 0 || novaPosicao >= *tamanho)
    {
        printf("Posição inválida.\n");
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
        printf("Número %d não encontrado.\n", numero);
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
    printf("Número %d movido para a posição %d.\n", numero, novaPosicao + 1);
}

void imprimirLista(int lista[], int tamanho)
{
    if (tamanho == 0)
    {
        printf("A lista está vazia.\n");
        return;
    }
    printf("Lista: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", lista[i]);
    }
    printf("\n");
}
