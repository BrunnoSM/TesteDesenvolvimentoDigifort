namespace _12_SequenciaDeFibonacci
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // 12.Sequência de Fibonacci
            // Crie um programa que exiba os n primeiros termos da sequência de Fibonacci, onde n é informado pelo usuário.

            Console.Write("Informe a quantidade de números que serão exibidos na sequência de fibonacci: ");
            int qtdFibonacci = int.Parse(Console.ReadLine());

            int n1 = 0;
            int n2 = 1;

            Console.WriteLine("Sequência de Fibonacci: ");

            for (int i = 0; i < qtdFibonacci; i++)
            {
                Console.WriteLine(n1 + " "); // Começando em Zero e exibindo a sequência

                int proximo = n1 + n2;
                n1 = n2;
                n2 = proximo;
            }

        }
    }
}
