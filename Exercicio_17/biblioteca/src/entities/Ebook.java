package entities;

public class Ebook extends Livro {
    private double tamanhoArquivo;
    private String formato;

    public Ebook(String titulo, String autor, int anoPublicacao, double tamanhoArquivo, String formato) {
        super(titulo, autor, anoPublicacao);
        this.tamanhoArquivo = tamanhoArquivo;
        this.formato = formato;
    }

    @Override
    public void exibirInfo() {
        super.exibirInfo();
        System.out.println("Tamanho do Arquivo: " + tamanhoArquivo + " MB");
        System.out.println("Formato: " + formato);
    }
}

