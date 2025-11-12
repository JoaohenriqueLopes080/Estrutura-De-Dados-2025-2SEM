/* 1. Implemente uma função que tenha como valor de retorno o comprimento de uma lista 
encadeada, isto é calcule o número de nós de uma lista. Esta função deve obedecer ao 
protótipo:  int comprimento (Lista* l); 
*/

/** Documentação
 * @file exercicio.c
 * @brief Contém a implementação da função imprime_matriz dada dentro do cabeçalho exercicio.h
 */

#include "exercicio.h" // Inclui o nosso próprio cabeçalho para garantir que o protótipo coincide
#include <stdio.h>     // Necessário para usar a função printf

/**
 * @brief Implementação da função que imprime a matriz.
 *
 * @param m Número de linhas.
 * @param n Número de colunas.
 * @param mat Ponteiro para a matriz (vetor simples).
 */


 void imprime_matriz(int m, int n, int* mat){
    
    // loop externo para percorrer as linhas(M)
    for(int i = 0; i < m; i++) {
        // Loop interno para percorrer as Colunas(N)
        for(int j = 0; j < n; j++) {
         // Acessa o elemento da matriz na posição (i, j) usando a fórmula:
            // Indice Linear = (Linha * Numero de Colunas) + Coluna
            printf("%d ", mat[i * n + j]);
        }
        printf("\n");
    }
 }