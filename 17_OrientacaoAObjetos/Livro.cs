using System;
using System.Collections.Generic;
using System.Text;

namespace _17_OrientacaoAObjetos
{
    internal class Livro
    {

        public string Titulo { get; set; }
        public string Autor { get; set; }
        public int AnoPublicacao { get; set; }
        public bool Disponivel { get; set; } = true;

        public void Emprestar()
        {
            if (Disponivel)
            {
                Disponivel = false;
                Console.WriteLine("Livro emprestado com sucesso!");
            }
            else
            {
                Console.WriteLine("Livro já está emprestado!");
            }
        }

        public void Devolver()
        {
            Disponivel = true;
            Console.WriteLine("Livro devolvido.");
        }

        public virtual void ExibirInfo() 
        {
            Console.WriteLine("\nTítulo: " + Titulo);
            Console.WriteLine("Autor: " + Autor);
            Console.WriteLine("Ano: " + AnoPublicacao);
            Console.WriteLine("Disponível: " + Disponivel);
            Console.WriteLine();
        }


    }
}
