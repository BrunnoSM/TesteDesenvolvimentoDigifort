package entities;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class Biblioteca {
    private List<Livro> livros;

    public Biblioteca() {
        livros = new ArrayList<>();
    }

    public void adicionarLivro(Livro livro) {
        livros.add(livro);
    }

    public void removerLivro(String titulo) {
        Iterator<Livro> iterator = livros.iterator();
        while (iterator.hasNext()) {
            Livro livro = iterator.next();
            if (livro.titulo.equals(titulo)) {
                iterator.remove();
                return;
            }
        }
        System.out.println("Livro não encontrado.");
    }

    public Livro buscarLivro(String titulo) {
        for (Livro livro : livros) {
            if (livro.titulo.equals(titulo)) {
                return livro;
            }
        }
        return null;
    }

    public void listarLivrosDisponiveis() {
        for (Livro livro : livros) {
            if (livro.disponivel) {
                livro.exibirInfo();
                System.out.println();
            }
        }
    }

    public void exibirInformacoes(String titulo) {
        Livro livro = buscarLivro(titulo);
        if (livro != null) {
            livro.exibirInfo();
        } else {
            System.out.println("Livro não encontrado.");
        }
    }
}

