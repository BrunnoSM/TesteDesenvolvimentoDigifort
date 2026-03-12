namespace _06_NumerosPrimos
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // 6.Números Primos
            // Faça um programa que imprima todos os números primos de 1 a 100.

            for (int numeroPrimo = 1; numeroPrimo <= 100; numeroPrimo++)
            {
                bool primo = true;

                if (numeroPrimo < 2)
                {
                    primo = false;
                }

                for (int i = 2; i < numeroPrimo; i++)
                {
                    if (numeroPrimo % i == 0)
                    {
                        primo = false;
                        break;
                    }
                }

                if (primo)
                {
                    Console.WriteLine(numeroPrimo);
                }

            }
        }
    }
}
