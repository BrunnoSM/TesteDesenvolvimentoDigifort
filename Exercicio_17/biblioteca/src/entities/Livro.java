package entities;

public class Livro {
	
	protected String titulo;
	protected String autor;
	protected int anoPublicacao;
	protected boolean disponivel;
	
	public Livro(String titulo, String autor, int anoPublicacao) {
		this.titulo = titulo;
		this.autor = autor;
		this.anoPublicacao = anoPublicacao;
		this.disponivel = true;
	}
	
	public String getTitulo() {
		return titulo;
	}
	
	public void setTitulo(String titulo) {
		this.titulo = titulo;
	}
	
	public int getAnoPublicacao() {
		return anoPublicacao;
	}
	
	public void emprestar() {
		this.disponivel = false;
	}

	public void devolver() {
		this.disponivel = true;
	}
	
	public void exibirInfo() {
		System.out.println();
		System.out.println("Título: " + titulo);
		System.out.println("Autor: " + autor);
		System.out.println("Ano de Publicação: " + anoPublicacao);
		System.out.println("Disponível: " + (disponivel ? "Sim" : "Não"));
	}

}
