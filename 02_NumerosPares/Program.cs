namespace _02_NumerosPares
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // 2.Números Pares
            // Escreva um programa que imprima todos os números pares de 1 a 100.

            int contador = 100;

            for (int i = 0; i <= contador; i++)
            {
                if (i % 2 == 0)
                {
                    Console.WriteLine(i);
                }
            }
        }
    }
}
