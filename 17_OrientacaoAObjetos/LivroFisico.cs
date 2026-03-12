using System;
using System.Collections.Generic;
using System.Text;

namespace _17_OrientacaoAObjetos
{
    internal class LivroFisico : Livro
    {
        public int NumeroDePaginas { get; set; }

        public override void ExibirInfo()
        {
            Console.WriteLine("\n=== Livro Físico ===");
            base.ExibirInfo();
            Console.WriteLine("Número de páginas: " + NumeroDePaginas);
        }
    }
}
