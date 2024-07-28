package entities;

public class LivroFisico extends Livro{

	private int numPaginas;
	
	public LivroFisico(String titulo, String autor, int anoPublicacao, int numPaginas) {
		super(titulo, autor, anoPublicacao);
		this.numPaginas = numPaginas;
	}

	@Override
	public void exibirInfo() {
		super.exibirInfo();
		System.out.println("Número de Páginas: " + numPaginas);
	}
	
}
