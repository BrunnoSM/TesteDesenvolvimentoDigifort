namespace _07_OrdenacaoDeLista
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // 7.Ordenação de Lista
            // Crie um programa que leia uma lista de números do usuário e exiba a lista ordenada em ordem crescente.

            List<int> numeros = new List<int>();

            Console.Write("Informe quantos números gostaria de digitar: ");
            int quantidadeNumeros = int.Parse(Console.ReadLine());

            Console.WriteLine("Digite " + quantidadeNumeros + " Números:");

            for (int i = 0; i < quantidadeNumeros ; i++)
            {
                int numero = int.Parse(Console.ReadLine());
                numeros.Add(numero);
            }

            numeros.Sort(); // Sort para ordenar uma lista

            Console.WriteLine("Lista de números em ordem crescente: ");

            foreach (int num in numeros)
            {
                Console.WriteLine(num);
            }

        }
    }
}
