namespace _05_VerificacaoDePalindromo
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // 5.Verificação de Palíndromo
            // Escreva um programa que leia uma string do usuário e verifique se ela é um palíndromo (lê - se da mesma forma de trás para frente).

            Console.Write("Digite uma palavra: ");
            string palavra = Console.ReadLine();

            string palindromo = "";

            for (int i = palavra.Length - 1; i >= 0; i--)
            {
                palindromo += palavra[i];
            }

            if (palavra == palindromo)
            {
                Console.WriteLine("É um palíndromo!");
            }
            else
            {
                Console.WriteLine("Não é um palíndromo!");
            }

        }
    }
}
