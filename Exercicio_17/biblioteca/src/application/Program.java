package application;

import java.util.Scanner;
import entities.Biblioteca;
import entities.Ebook;
import entities.Livro;
import entities.LivroFisico;

public class Program {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Biblioteca biblioteca = new Biblioteca();

        while (true) {
        	
    		System.out.println("----------------------------------------------");
        	System.out.println();
            System.out.println("1. Adicionar Livro");
            System.out.println("2. Remover Livro");
            System.out.println("3. Buscar Livro");
            System.out.println("4. Listar Livros Disponíveis");
            System.out.println("5. Exibir Informações do Livro");
            System.out.println("6. Sair\n");
            System.out.print("Escolha uma opção: ");
            
            int opcao = sc.nextInt();
            sc.nextLine(); 
            
            System.out.println();
    		System.out.println("----------------------------------------------");
    		
            switch (opcao) {
                case 1:
                    adicionarLivro(biblioteca, sc);
                    break;
                case 2:
                    removerLivro(biblioteca, sc);
                    break;
                case 3:
                    buscarLivro(biblioteca, sc);
                    break;
                case 4:
                    biblioteca.listarLivrosDisponiveis();
                    break;
                case 5:
                    exibirInformacoes(biblioteca, sc);
                    break;
                case 6:
                    System.out.println("Saindo...");
                    sc.close();
                    return;
                default:
                    System.out.println("Opção inválida. Tente novamente.");
            }
        }
    }

    private static void adicionarLivro(Biblioteca biblioteca, Scanner sc) {
        System.out.print("\nDigite o tipo de livro (fisico/ebook): ");
        String tipo = sc.nextLine();
        System.out.print("Digite o título: ");
        String titulo = sc.nextLine();
        System.out.print("Digite o autor: ");
        String autor = sc.nextLine();
        System.out.print("Digite o ano de publicação: ");
        int ano = sc.nextInt();
        sc.nextLine(); 

        if (tipo.equalsIgnoreCase("fisico")) {
            System.out.print("Digite o número de páginas: ");
            int numPaginas = sc.nextInt();
            sc.nextLine(); 
            biblioteca.adicionarLivro(new LivroFisico(titulo, autor, ano, numPaginas));
            System.out.println();
        } else if (tipo.equalsIgnoreCase("ebook")) {
            System.out.print("Digite o tamanho do arquivo (MB): ");
            double tamanhoArquivo = sc.nextDouble();
            sc.nextLine(); 
            System.out.print("Digite o formato do ebook: ");
            String formato = sc.nextLine();
            biblioteca.adicionarLivro(new Ebook(titulo, autor, ano, tamanhoArquivo, formato));
            System.out.println();
        } else {
            System.out.println("Tipo de livro inválido.");
        }
    }

    private static void removerLivro(Biblioteca biblioteca, Scanner sc) {
        System.out.print("Digite o título do livro a ser removido: ");
        String titulo = sc.nextLine();
        System.out.println("----------------------------------------------");
        biblioteca.removerLivro(titulo);
          }

    private static void buscarLivro(Biblioteca biblioteca, Scanner sc) {
        System.out.print("Digite o título do livro a ser buscado: ");
        String titulo = sc.nextLine();
        System.out.println("----------------------------------------------");
        Livro livro = biblioteca.buscarLivro(titulo);
        if (livro != null) {
            livro.exibirInfo();
        } else {
            System.out.println("Livro não encontrado.");
        }
    }

    private static void exibirInformacoes(Biblioteca biblioteca, Scanner sc) {
        System.out.print("Digite o título do livro para exibir informações: ");
        String titulo = sc.nextLine();
        biblioteca.exibirInformacoes(titulo);
    }
}
