using System;
using System.Collections.Generic;
using System.Text;

namespace _17_OrientacaoAObjetos
{
    internal class Biblioteca
    {
        public List<Livro> livros = new List<Livro>();

        public void AdicionarLivro(Livro livro)
        {
            livros.Add(livro);
            Console.WriteLine("Livro adicionado à biblioteca.\n");
        }

        public void RemoverLivro(string titulo)
        {
            Livro livro = BuscarLivro(titulo);

            if (livro != null)
            {
                livros.Remove(livro);
                Console.WriteLine("Livro removido.\n");
            }
            else
            {
                Console.WriteLine("Livro não encontrado.\n");
            }
        }

        public Livro BuscarLivro(string titulo)
        {
            foreach (Livro livro in livros)
            {
                if (livro.Titulo.ToLower() == titulo.ToLower())
                {
                    return livro;
                }
            }

            return null;
        }

        public void ListarLivroDisponiveis()
        {
            Console.WriteLine("\nLivros disponíveis: \n");

            foreach (Livro livro in livros)
            {
                if (livro.Disponivel)
                {
                    Console.WriteLine("- " + livro.Titulo);
                }
            }
            
            Console.WriteLine();

        }

        public void ExibirInformacoes(string titulo)
        {
            Livro livro = BuscarLivro(titulo);

            if (livro != null)
            {
                livro.ExibirInfo();
            }
            else 
            {
                Console.WriteLine("Livro não encontrado.");
            }
        }
    }
}
