using System.Globalization;

namespace _13_CalculadoraSimples
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // 13.Calculadora Simples
            // Crie um programa que simule uma calculadora simples capaz de realizar as operações de adição, subtração, multiplicação e divisão
            // com dois números informados pelo usuário.

            Console.WriteLine("--- Calculadora Simples ---");
            Console.WriteLine("1 - Soma");
            Console.WriteLine("2 - Subtracao");
            Console.WriteLine("3 - Multiplicação");
            Console.WriteLine("4 - Divisão");

            Console.Write("Informe a opção desejada: ");
            int opcao = int.Parse(Console.ReadLine());

            switch (opcao)
            {

                case 1:
                    {
                        Soma();
                        break;
                    }

                case 2:
                    {
                        Subtracao();
                        break;
                    }

                case 3:
                    {
                        Multiplicacao();
                        break;
                    }

                case 4:
                    {
                        Divisao();
                        break;
                    }

                default:
                    {
                        Console.WriteLine("Opção Iválida! Encerrando...");
                        break;
                    }
            }

            // Métodos
            static int Soma()
            {
                Console.Clear();
                Console.WriteLine("-- SOMA --");
                Console.Write("Primeiro Número: ");
                int n1 = int.Parse(Console.ReadLine());
                Console.Write("Segundo Número: ");
                int n2 = int.Parse(Console.ReadLine());

                int soma = n1 + n2;

                Console.Write("Resultado da Soma: ");
                Console.WriteLine(soma);

                return soma;
            }

            static int Subtracao()
            {
                Console.Clear();
                Console.WriteLine("-- SUBTRAÇÃO --");
                Console.Write("Primeiro Número: ");
                int n1 = int.Parse(Console.ReadLine());
                Console.Write("Segundo Número: ");
                int n2 = int.Parse(Console.ReadLine());

                int subtracao = n1 - n2;

                Console.Write("Resultado da Subtração: ");
                Console.WriteLine(subtracao);

                return subtracao;
            }

            static int Multiplicacao()
            {
                Console.Clear();
                Console.WriteLine("-- MULTIPLICAÇÃO --");
                Console.Write("Primeiro Número: ");
                int n1 = int.Parse(Console.ReadLine());
                Console.Write("Segundo Número: ");
                int n2 = int.Parse(Console.ReadLine());
          
                int multiplicacao = n1 * n2;

                Console.Write("Resultado da Multiplicação: ");
                Console.WriteLine(multiplicacao);

                return multiplicacao;
            }

            static double Divisao()
            {
                Console.Clear();
                Console.WriteLine("-- DIVISÃO --");
                Console.Write("Primeiro Número: ");
                double n1 = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
                Console.Write("Segundo Número: ");
                double n2 = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);

                double divisao = n1 / n2;

                Console.Write("Resultado da Divisão: ");
                Console.WriteLine(divisao.ToString("F2", CultureInfo.InvariantCulture));

                return divisao;
            }

        }
    }
}
