/*
2. Implemente uma função que receba como parâmetro uma matriz de inteiros de tamanho m x 
n  (alocada  dinamicamente  como  um  vetor  de  ponteiros)  e  imprima  na  tela  os  elementos 
armazenados nesta matriz. Esta função deve obedecer ao protótipo:  
 
void imprime_matriz (int m, int n, int** mat)
*/

/**
 * @file exercicio.c
 * @brief Contém a implementação da função imprime_matriz dada dentro do cabeçalho exercicio.h
 */

 #include "exercicio.h"
 #include <stdio.h> // printf e scanf

    
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