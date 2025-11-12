
/*
2. Implemente uma função que receba como parâmetro uma matriz de inteiros de tamanho m x 
n  (alocada  dinamicamente  como  um  vetor  de  ponteiros)  e  imprima  na  tela  os  elementos 
armazenados nesta matriz. Esta função deve obedecer ao protótipo:  
 
void imprime_matriz (int m, int n, int** mat)
*/

/**
 * @file exercicio.h
 * @brief  Arquivo de cabeçalho contendo o protótipo da função imprime_matriz.
 */


 // guardas de inclusão (include guards)
 // garante que o arquivo seja processado uma unica vez
 #ifndef exercicio_h
 #define exercicio_h

/**
 * Explicação da Função Usada
 * @brief Imprime na tela os elementos de uma matriz alocada dinamicamente como
 * um vetor simples (m x n).
 * @param m Numero de linhas da matriz
 * @param n Numero de Colunas da matriz
 * @param mat Ponteiro para o primeiro elemento da matriz(vetor de inteiros)
 */

 void imprime_matriz(int m, int n, int* mat);

 #endif // exercicio_h