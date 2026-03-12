using System.Globalization;

namespace _16_ManipulacaoDeArrays
{
    internal class Program
    {
        static void Main(string[] args)
        {

            // 16.Manipulação de Arrays
            // Crie um programa que permita ao usuário manipular uma lista de números através das seguintes operações:
            // -Adicionar um número na lista.
            // -Remover um número da lista.
            // -Mudar a posição de um número na lista.
            // Especificações
            // Adicionar Número: O usuário deverá informar o número a ser adicionado à lista.
            // Remover Número: O usuário deverá informar o número a ser removido da lista.Caso o número não esteja na lista, exibir uma mensagem de erro.
            // Mudar Posição de Número: O usuário deverá informar o número e a nova posição desejada na lista.Caso o número não esteja na lista ou a posição seja inválida, exibir uma mensagem de erro.

            List<int> numeros = new List<int>();

            int opcao = -1;

            while (opcao != 0)
            {
                Console.WriteLine("--- MENU ---");
                Console.WriteLine("1 - Adicionar Número");
                Console.WriteLine("2 - Remover Número");
                Console.WriteLine("3 - Mudar posição de número");
                Console.WriteLine("4 - Mostrar Lista");
                Console.WriteLine("0 - Sair");

                Console.WriteLine("Escolha uma opção: ");
                opcao = int.Parse(Console.ReadLine());

                // Adicionar Número
                if (opcao == 1)
                {
                    Console.Write("\nDigite um número para adicionar: ");
                    int numero = int.Parse(Console.ReadLine());

                    numeros.Add(numero);
                    Console.WriteLine("Numero adicionado!");
                }

                // Remover Número
                else if (opcao == 2)
                {
                    Console.WriteLine("\nDigite o número que deseja remover: ");
                    int numero = int.Parse(Console.ReadLine());

                    if (numeros.Contains(numero))
                    {
                        numeros.Remove(numero);
                        Console.WriteLine("Número removido!");
                    }
                    else
                    {
                        Console.WriteLine("Número não encontrado na lista.");
                    }
                }

                // Mudar Posição
                else if (opcao == 3)
                {
                    Console.WriteLine("\nDigite o número que deseja mover: ");
                    int numero = int.Parse(Console.ReadLine());

                    if (numeros.Contains(numero))
                    {
                        Console.WriteLine("\nDigite uma nova posição (Começando em 0):");
                        int novaPosicao = int.Parse(Console.ReadLine());

                        if (novaPosicao >= 0 && novaPosicao < numeros.Count)
                        {
                            numeros.Remove(numero);
                            numeros.Insert(novaPosicao, numero);

                            Console.WriteLine("Número movido com sucesso!");
                        }
                        else
                        {
                            Console.WriteLine("Erro: posição inválida.");
                        }
                    }
                    else
                    {
                        Console.WriteLine("Erro: número não encontrado.");
                    }
                }

                // Mostrar Lista
                else if (opcao == 4)
                {
                    Console.WriteLine("\nLista atual: ");

                    if (numeros.Count == 0)
                    {
                        Console.WriteLine("A lista está vazia\n");
                    }
                    else
                    {
                         for(int i = 0; i < numeros.Count; i++)
                        {
                            Console.WriteLine("Posição " + i + ": " + numeros[i]);
                        }
                    }
                }

                else if (opcao != 0)
                {
                    Console.WriteLine("\nOpção inválida.\n");
                }
            }

            Console.WriteLine("Encerrando...");

        }
    }
}
