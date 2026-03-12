namespace _10_CalcularHipotenusa
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // 10.Calcular Hipotenusa
            // Crie um programa que leia os comprimentos dos dois catetos de um triângulo retângulo e exiba o comprimento da hipotenusa.

            double cateto1, cateto2, hipotenusa;

            Console.Write("Informe o valor do primeiro cateto: ");
            cateto1 = double.Parse(Console.ReadLine());

            Console.Write("Informe o valor do segundo cateto: ");
            cateto2 = double.Parse(Console.ReadLine());

            // Calc Hipotenusa
            hipotenusa = Math.Sqrt(Math.Pow(cateto1, 2) + Math.Pow(cateto2, 2)); // Math.Sqrt para raíz quadrada e Math.Pow para potência.

            Console.WriteLine("A hipotenusa é: " + hipotenusa);

        }
    }
}
