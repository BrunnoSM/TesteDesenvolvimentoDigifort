namespace _01_SomaDeDoisNumeros
{
    internal class Program
    {
        static void Main(string[] args)
        {

            // 1. Soma de Dois Números
            // Crie um programa que leia dois números do usuário e exiba a soma deles.

                int n1, n2, soma;

                n1 = int.Parse(Console.ReadLine());
                n2 = int.Parse(Console.ReadLine());

                soma = n1 + n2;

                Console.WriteLine("Resultado da soma é: " + soma);

        }
    }
}