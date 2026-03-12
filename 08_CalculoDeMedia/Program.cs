using System.Globalization;

namespace _08_CalculoDeMedia
{
    internal class Program
    {
        static void Main(string[] args)
        {

            // 8.Cálculo de Média
            // Escreva um programa que leia várias notas do usuário(permitir a entrada de uma quantidade indefinida de notas) e exiba a média delas.

            List<double> notas = new List<double>();

            string continuar = "S";

            while (continuar == "S")
            {
                Console.Write("Digite uma nota: ");
                double nota = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);

                notas.Add(nota); // Adicionar notas informadas dentro da lista

                Console.Write("Deseja continuar? (S/N): ");
                continuar = Console.ReadLine().ToUpper();
            }

            double soma = 0.0;

            foreach (double n in notas)
            { 
                soma = soma + n;
            }

            double media = soma / notas.Count; // Count para mostrar a quantidade de elementos na lista

            Console.WriteLine("A média conforme as notas informadas é: " + media.ToString("F2", CultureInfo.InvariantCulture));
        
        }
    }
}
