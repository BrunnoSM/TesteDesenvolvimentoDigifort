namespace _09_Tabuada
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // 9.Tabuada
            // Crie um programa que exiba a tabuada de um número informado pelo usuário.

            int contador = 10;

            Console.Write("Informe um número: ");
            int numero = int.Parse(Console.ReadLine());
            int multiplicacao = 0;

            for (int i = 0; i <= contador; i++)
            {
                multiplicacao = numero * i;
                Console.WriteLine(numero + " X " + i + " = " + multiplicacao);
            }
            
        }
    }
}
