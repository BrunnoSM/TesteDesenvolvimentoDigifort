using System.Collections;
using System.Runtime.ConstrainedExecution;
using System.Text.RegularExpressions;
using static System.Runtime.InteropServices.JavaScript.JSType;

namespace _17_OrientacaoAObjetos
{
    internal class Program
    {
        static void Main(string[] args)
        {

            // 17.Orientação a objetos
            // Implemente um sistema de gerenciamento de biblioteca utilizando orientação a objetos com herança e polimorfismo.
            // O sistema deve ter as seguintes classes e funcionalidades:
            // 1.Classe Livro:
            //      ○	Atributos:
            //          •	titulo
            //          •	autor
            //          •	ano_publicacao
            //          •	disponivel(booleano, inicializado como True)
            //      ○	Métodos:
            //          •	emprestar(): Marca o livro como não disponível.
            //          •	devolver(): Marca o livro como disponível.
            //          •	exibir_info(): Exibe informações sobre o livro.
            // 2.Classes Derivadas:
            //      ○	Classe LivroFisico(herda de Livro):
            //          •	Atributos adicionais:
            //          •	num_paginas
            //          •	Método sobrescrito:
            //          •	exibir_info(): Exibe informações sobre o livro físico.
            //      ○	Classe Ebook(herda de Livro):
            //          •	Atributos adicionais:
            //          •	tamanho_arquivo(em MB)
            //          •	formato(por exemplo, PDF, EPUB)
            //          •	Método sobrescrito:
            //          •	exibir_info(): Exibe informações sobre o ebook.
            // 3.Classe Biblioteca:
            //      ○ Atributos:
            //          •	livros(lista de objetos Livro)
            //      ○	Métodos:
            //          •	adicionar_livro(livro): Adiciona um livro à biblioteca.
            //          •	remover_livro(titulo): Remove um livro pelo título.
            //          •	buscar_livro(titulo): Busca um livro pelo título e retorna o livro se encontrado.
            //          •	listar_livros_disponiveis(): Lista todos os livros disponíveis para empréstimo.
            //          •	exibir_informacoes(titulo): Exibe as informações do livro especificado.

            Biblioteca biblioteca = new Biblioteca();
            int opcao = 0;

            while (opcao != 6)
            {
                Console.WriteLine("===== BIBLIOTECA =====");
                Console.WriteLine("1 - Adicionar Livro Físico");
                Console.WriteLine("2 - Adicionar Ebook");
                Console.WriteLine("3 - Listar Livros Disponíveis");
                Console.WriteLine("4 - Buscar Livro");
                Console.WriteLine("5 - Remover Livro");
                Console.WriteLine("6 - Sair");

                opcao = int.Parse(Console.ReadLine());

                switch (opcao)
                {
                    case 1:
                        {
                            LivroFisico livro = new LivroFisico();

                            Console.Write("\nTitulo: ");
                            livro.Titulo = Console.ReadLine();

                            Console.Write("Autor: ");
                            livro.Autor = Console.ReadLine();

                            Console.Write("Ano de publicação: ");
                            livro.AnoPublicacao = int.Parse(Console.ReadLine());

                            Console.Write("Número de páginas: ");
                            livro.NumeroDePaginas = int.Parse(Console.ReadLine());

                            biblioteca.AdicionarLivro(livro);

                            break;
                        }

                    case 2:
                        {
                            Ebook livro = new Ebook();

                            Console.WriteLine("Titulo: ");
                            livro.Titulo = Console.ReadLine();

                            Console.WriteLine("Autor: ");
                            livro.Autor = Console.ReadLine();

                            Console.WriteLine("Ano de publicação: ");
                            livro.AnoPublicacao = int.Parse(Console.ReadLine());

                            Console.WriteLine("Tamanho do arquivo (MB): ");
                            livro.TamanhoArquivo = double.Parse(Console.ReadLine());

                            Console.WriteLine("Formato (PDF /EUPUB): ");
                            livro.Formato = Console.ReadLine();

                            biblioteca.AdicionarLivro(livro);

                            break;
                        }

                    case 3:
                        {
                            biblioteca.ListarLivroDisponiveis();
                            break;
                        }

                    case 4:
                        {
                            Console.WriteLine("Digite o título do livro: ");
                            string titulo = Console.ReadLine();

                            biblioteca.ExibirInformacoes(titulo);
                            break;
                        }

                    case 5:
                        {
                            Console.WriteLine("Digite o título do livro para remover: ");
                            string titulo = Console.ReadLine();

                            biblioteca.RemoverLivro(titulo);
                            break;
                        }

                    case 6:
                        {
                            if (opcao == 6)
                            {
                                Console.WriteLine("Encerrando...");
                            }
                            break;
                        }

                    default:
                        {
                            Console.WriteLine("Comando não encontrado!\nPor Favor, tente novamente.\n");
                            break;
                        }
                }

            }
        }
    }
}
