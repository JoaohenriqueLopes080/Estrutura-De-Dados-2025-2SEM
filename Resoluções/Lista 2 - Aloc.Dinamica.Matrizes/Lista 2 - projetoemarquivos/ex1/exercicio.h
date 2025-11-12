/**
 * @file exercicio.h
 * @brief Arquivo de cabeçalho contendo o protótipo da função imprime_matriz.
 */

// Estas são as "guardas de inclusão" (include guards).
// Elas garantem que este arquivo seja processado apenas uma vez.
#ifndef exercicio_h
#define exercicio_h

/**
 * Explicação da função usada.
 * @brief Imprime na tela os elementos de uma matriz alocada dinamicamente como
 * um vetor simples (m x n).
 *
 * @param m Número de linhas da matriz.
 * @param n Número de colunas da matriz.
 * @param mat Ponteiro para o primeiro elemento da matriz (vetor de inteiros).
 */

void imprime_matriz(int m, int n, int* mat);


#endif // exercicio.h


/*  🧠 Entendimento (Método Educativo)
    * Guardas de Inclusão (#ifndef, #define, #endif): 
    São cruciais para evitar que o compilador encontre a 
    mesma declaração de função (o mesmo protótipo) mais de uma vez, 
    o que geraria um erro. É uma prática padrão em arquivos .h.

    * Protótipo da Função: void imprime_matriz(int m, int n, int* mat); é apenas a declaração.
     Ela termina com ponto e vírgula (;), pois não contém o código de fato.

*/

