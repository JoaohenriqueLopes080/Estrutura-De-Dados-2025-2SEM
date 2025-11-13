/*
3. Implemente quatro funções que alocam, desalocam, preenchem e mostram uma matriz de
tamanho mxn, respectivamente (considere que a matriz seja armazenada como um vetor de
ponteiros). Estas funções devem obedecer aos protótipos:
int** aloca_matriz (int m, int n)
void desaloca_matriz (int m, int** mat)
void preenche_matriz (int m, int n, int **mat)
*/

/**
 * @file exercicio.h>
 * @brief arquivo de cabeçalho de funções
 */

 #ifndef exercicio.h
 #define exercicio.h

    #include <stdlib.h> // para definição de null.

 /**
  * Explicação da Função Aloca_matriz
  * @brief Aloca dinamicamente uma matriz de inteiros (m x n) como vetor de ponteiros (int**).
  * @param m Número de Linhas
  * @param n Número de Colunas
  * @return int** retorna o ponteiro para a matriz alocada, ou NULL em caso de erro.
  * 
  */

  int** aloca_matriz(int m, int n);

  /**
   * @brief desaloca a memoria de uma matriz (int**) previamente alocada
   * @param m Número de linhas da Matriz
   * @param mat Ponteiro para Ponteiros de Inteiro (matriz int**)
   */

  void desaloca_matriz(int m, int** mat);

  /**
   * @brief Preenche uma Matriz com valores lidos pelo Usuario
   * @param m Número de Linhas 
   * @param N Número de Colunas
   * @param mat Ponteiro para Ponteiro de Inteiros(matriz int**)
   */

   void preenche_matriz(int m, int n, int** mat);

   /** 
    * @brief Imprime na tela os elementos da matriz
    * @param m Número de Linhas da matriz
    * @param n Número de Colunas da matriz
    * @param mat Ponteiro para Ponteiro de inteiros (mat int**)
    */

    void imprime_matriz(int n, int m, int** mat);
  #endif