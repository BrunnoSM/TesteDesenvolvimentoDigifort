namespace _04_MaiorEMenorNumero
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // 4.Maior e Menor Número
            // Crie um programa que leia três números do usuário e exiba o maior e o menor entre eles.

            int n1 = int.Parse(Console.ReadLine());
            int n2 = int.Parse(Console.ReadLine());
            int n3 = int.Parse(Console.ReadLine());


            Console.WriteLine("Maior Número informado: ");

            if (n1 > n2 && n1 > n3)
            {
                Console.WriteLine(n1);
            }
            else if (n2 > n1 && n2 > n3)
            {
                Console.WriteLine(n2);
            }
            else
            {
                Console.WriteLine(n3);
            }

            Console.WriteLine("Menor Número informado: ");

            if (n1 < n2 && n1 < n3)
            {
                Console.WriteLine(n1);
            }
            else if (n2 < n1 && n2 < n3)
            {
                Console.WriteLine(n2);
            }
            else
            {
                Console.WriteLine(n3);
            }

        }
    }
}
