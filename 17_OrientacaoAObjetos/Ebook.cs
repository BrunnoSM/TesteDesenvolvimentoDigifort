using System;
using System.Collections.Generic;
using System.Text;

namespace _17_OrientacaoAObjetos
{
    internal class Ebook : Livro
    {
        public double TamanhoArquivo { get; set; }
        public string Formato { get; set; }

        public override void ExibirInfo()
        {
            Console.WriteLine("\n=== Ebook ===");
            base.ExibirInfo();
            Console.WriteLine("Tamanho do arquivo: " + TamanhoArquivo + "MB");
            Console.WriteLine("Formato: " + Formato);
        }

    }
}
