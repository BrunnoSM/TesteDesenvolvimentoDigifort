namespace _03_FatorialDeUmNumero
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // 3.Fatorial de um Número
            // Escreva um programa que leia um número inteiro do usuário e exiba o fatorial desse número.

            int contadorFatorial = int.Parse(Console.ReadLine());
            int fatorial = 1;
            

            for (int i = 1; i <= contadorFatorial; i++)
            {
                fatorial *= i;
            }

            Console.WriteLine("Fatorial de " + contadorFatorial + " é " + fatorial);

        }
    }
}
