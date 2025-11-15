/*
3. Implemente quatro funções que alocam, desalocam, preenchem e mostram uma matriz de 
tamanho mxn, respectivamente (considere que a matriz seja armazenada como um vetor de 
ponteiros). Estas funções devem obedecer aos protótipos: 
 
int** aloca_matriz (int m, int n) 
void desaloca_matriz (int m, int** mat) 
void preenche_matriz (int m, int n, int **mat) 
void mostra_matriz (int m, int n, int **mat) 

*/

#include "exercicio.h"
#include <stdio.h>


/**
 * @file exercicio.c
 * @brief Arquivo Contendo Implementação De Funções de Ex 3 - L2
 */

 /**
  * @brief Aloca Matriz 
  * @param m Numero de Linhas
  * @param n Numero de Colunas
  */

  int** aloca_matriz(int m, int n) {
    int** mat;
    mat = (int**) malloc(m * sizeof(int*));
    if(mat == NULL){
        printf("Erro de Alocação de Memoria");
        return NULL;
     }
    
    // Loop Externo
    for(int i = 0; i < m; i++) {
      mat[i] = (int*) malloc(i * n * sizeof(int*));
          if (!mat[i]) {
            printf("Erro de Alocação");
            return NULL;
        }
    }
    return mat;
  }

  /**
   * @brief Desaloca A Matriz e Libera Memoria
   * @param m Numero De linhas
   * @param mat Ponteiro para Ponteiro de Inteiros(matriz int**)
   */

 void desaloca_matriz(int m, int** mat) {
    for(int i = 0; i < m; i++) {
        free(mat[i]);
    }
    free(mat);
   }

/**
 * @brief Preenche a Matriz de Alocação Dinamica
 * @param m Numero De Linhas
 * @param n Numero de colunas
 * @param mat Ponteiro de Ponteiro para Inteiro(matriz int**)
 */

void preenche_matriz(int m, int n, int** mat){
    // Loop Externo
    for(int i = 0; i < m; i++) {
        // Loop Interno
        for(int j = 0; j < n; j++) {
            printf("Digite o Valor da Matriz[%d][%d]", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
 }

/**
 * @brief Implementação da função que imprime a matriz.
 *
 * @param m Número de linhas.
 * @param n Número de colunas.
 * @param mat Ponteiro para a matriz (vetor simples).
 */

void imprime_matriz(int m, int n, int** mat) {
    // loop externo 
    for(int i = 0; i < m; i++) {
        // loop interno
        for(int j = 0; j < n; j++) {
            // Acessa o elemento da matriz na posição (i, j) usando a fórmula:
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
 }