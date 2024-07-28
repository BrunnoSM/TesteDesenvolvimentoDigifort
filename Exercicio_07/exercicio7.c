/*
   Ordenação de Lista
   Crie um programa que leia uma lista de números do usuário e exiba a lista ordenada em ordem crescente.
 */

#include <stdio.h>
#include <locale.h>

#define MAX_SIZE 100

void bubbleSort(int arr[], int n);
void imprimirLista(int arr[], int n);

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    int lista[MAX_SIZE];
    int tamanho, i;

    printf("Digite o número de elementos na lista (máximo %d): ", MAX_SIZE);
    scanf("%d", &tamanho);

    if (tamanho <= 0 || tamanho > MAX_SIZE)
    {
        printf("Tamanho inválido!\n");
        return 1;
    }

    printf("Digite %d números:\n", tamanho);
    for (i = 0; i < tamanho; i++)
    {
        scanf("%d", &lista[i]);
    }

    bubbleSort(lista, tamanho);

    printf("Lista ordenada:\n");
    imprimirLista(lista, tamanho);

    return 0;
}

void bubbleSort(int arr[], int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void imprimirLista(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
