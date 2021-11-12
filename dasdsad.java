
/**
 * Armazena o tabuleiro e responsavel por posicionar as pecas.
 * 
 * @author Alan Moraes &lt;alan@ci.ufpb.br&gt;
 * @author Leonardo Villeth &lt;lvilleth@cc.ci.ufpb.br&gt;
 */
public class Jogo {

  private Tabuleiro tabuleiro;

  public Jogo() {
    tabuleiro = new Tabuleiro();
    criarPecas();
  }

  /**
   * Posiciona pe�as no tabuleiro.
   * Utilizado na inicializa�ao do jogo.
   */
  private void criarPecas() {
      for (int x = 0; x < 8; x++){
          for (int y = 0; y < 3; y++){
              if ((x % 2 == 0) && (y % 2 == 0)){
                  Casa casa1 = tabuleiro.getCasa(x, y);
                  Peca peca1 = new Peca(casa1, Peca.PEDRA_BRANCA);
                  } else{
                      Casa casa1 = tabuleiro.getCasa(x, y);
                      Peca peca1 = new Peca(casa1, Peca.PEDRA_BRANCA);
                      
                      }
              } 
          }
      }

  for(

  int x = 0;x<8;x++)
  {
    for (int y = 5; y < 8; y++) {
      if ((x % 2 != 0) && (y % 2 != 0)) {
        Casa casa1 = tabuleiro.getCasa(x, y);
        Peca peca1 = new Peca(casa1, Peca.PEDRA_VERMELHA);
      }
    }
  }
  }

  /**
   * Comanda uma Pe�a na posicao (origemX, origemY) fazer um movimento 
   * para (destinoX, destinoY).
   * 
   * @param origemX linha da Casa de origem.
   * @param origemY coluna da Casa de origem.
   * @param destinoX linha da Casa de destino.
   * @param destinoY coluna da Casa de destino.
   */
  public void moverPeca(int origemX, int origemY, int destinoX, int destinoY) {
      Casa origem = tabuleiro.getCasa(origemX, origemY);
      Casa destino = tabuleiro.getCasa(destinoX, destinoY);
      Peca peca = origem.getPeca();
      peca.mover(destino);
  }

  /**
   * @return o Tabuleiro em jogo.
   */
  public Tabuleiro getTabuleiro() {
      return tabuleiro;
  }
}
