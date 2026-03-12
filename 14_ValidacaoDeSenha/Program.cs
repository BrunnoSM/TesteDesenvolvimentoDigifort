namespace _14_ValidacaoDeSenha
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //   14.Validação de Senha
            //  - Escreva um programa que leia uma senha do usuário e verifique se ela atende aos seguintes critérios: 
            //  - Pelo menos 8 caracteres
            //  - Contém pelo menos uma letra maiúscula
            //  - Contém pelo menos uma letra minúscula
            //  - Contém pelo menos um número
            //  - Contém pelo menos um caractere especial(como @, #, $)

            Console.WriteLine("Digite uma senha: ");
            string senha = Console.ReadLine();

            bool temMaiuscula = false;
            bool temMinuscula = false;
            bool temNumero = false;
            bool temCaractereEspecial = false;

            // Verificação

            foreach (char caractere in senha)
            {
                if (char.IsUpper(caractere))
                {
                    temMaiuscula = true;
                }
                else if (char.IsLower(caractere))
                {
                    temMinuscula = true;
                }
                else if (char.IsDigit(caractere))
                {
                    temNumero = true;
                }
                else
                {
                    temCaractereEspecial = true;
                }
            }

            // Validar Tamanho
            bool tamanhoValido = senha.Length >= 8;

            // Validação Final
            if (tamanhoValido && temMaiuscula && temMinuscula && temNumero && temCaractereEspecial)
            {
                Console.WriteLine("Senha salva com sucesso!");
            }
            else 
            {
                Console.WriteLine("Senha inválida. Verifique os requisitos abaixo: ");

                if (!tamanhoValido)
                {
                    Console.WriteLine("- A senha deve ter pelo menos 8 caracteres");
                }

                if (!temMaiuscula)
                {
                    Console.WriteLine("- A senha deve conter ao menos uma letra maiúscula");
                }

                if (!temMinuscula)
                {
                    Console.WriteLine("- A senha deve conter ao menos uma letra minúscula");
                }

                if (!temNumero)
                {
                    Console.WriteLine("- A senha deve contar ao menos 1 número");
                }

                if (!temCaractereEspecial)
                {
                    Console.WriteLine("- A senha precisa contar ao menos 1 caractere especial exemplo: @, # ou $");
                }

            }
        }
    }
}
