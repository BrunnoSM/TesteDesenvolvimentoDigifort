namespace _11_JogoDeAdvinhacao
{
    internal class Program
    {
        static void Main(string[] args)
        {

            // 11.Jogo de Adivinhação
            // Escreva um programa que sorteie um número entre 1 e 100 e permita que o usuário tente adivinhar o número,
            // dando dicas se o número sorteado é maior ou menor do que o número fornecido pelo usuário.

            Random numeroAleatorio = new Random(); // Gerar um número aleatório

            int numeroSecreto = numeroAleatorio.Next(1, 101); // Receber um número aleatório limitando ele entre 1 e 100
            int palpite = 0;

            int tentativas = 0;

            Console.WriteLine("--------------------------------");
            Console.WriteLine("       Jogo da Adivinhação      ");
            Console.WriteLine("Adivinhe um número entre 1 e 100");
            Console.WriteLine("--------------------------------");

            while (palpite != numeroSecreto)
            {
                tentativas++;
                Console.Write("Digite seu " + tentativas + "º palpite: ");
                palpite = int.Parse(Console.ReadLine());

                // Verificação e Dicas para o usuário
                if (palpite > numeroSecreto)
                {
                    Console.WriteLine("O número secreto é MENOR.");
                }
                else if (palpite < numeroSecreto)
                {
                    Console.WriteLine("O número secreto é MAIOR");
                }
                else
                {
                    Console.WriteLine("Parabéns, você conseguiu com " + tentativas + " tentativas!");
                }

            }
        }
    }
}
