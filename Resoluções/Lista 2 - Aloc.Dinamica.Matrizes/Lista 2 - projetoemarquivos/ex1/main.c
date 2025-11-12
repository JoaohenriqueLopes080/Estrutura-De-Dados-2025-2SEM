/*
1. Implemente uma função que receba como parâmetro uma matriz de inteiros de tamanho m x 
n  (alocada  dinamicamente como  um  vetor  simples)  e imprima  na  tela  os  elementos 
armazenados nesta matriz. Esta função deve obedecer ao protótipo: 
void imprime_matriz (int m, int n, int* mat) 
*/

/**
 * @file main.c
 * @brief Programa principal para testar a função imprime_matriz
 */

 #include "exercicio.h" // cabeçalho, permitindo chamar função imprime_matriz
 #include <stdio.h> // para printf e scanf
 #include <stdlib.h> // para malloc e free (manipulação de memória)

 int main() {
    int m; // linhas
    int n; // colunas

    int* mat;

    // entrada de dados
    printf("Digite o Numero de Linhas: ");
    scanf("%d", &m);
    printf("Digite o Numero de Colunas:");
    scanf("%d", &n);

    // alocação de memoria
    mat = (int*) malloc(m * n * sizeof(int));
    if(mat == NULL) {
      printf("ERRO");
      return 1; // retorna codigo de erro.
    }

   // preenchimento da matriz
       // loop externo
    for(int i = 0; i < m; i++) {
      // loop interno
      for(int j = 0; j < n; j++) {
         printf("Digitre o elemento [%d] [%d]", i + 1, j + 1);
         // Formula de Logica de Acesso Linear = [i * n + j]
         scanf("%d", &mat[i * n + j]);
      } 
    }
    // chamada da função separada e impressão
    printf("\nMatriz Digitada:\n");
    // chama a função que esta em exercicio.c
    imprime_matriz(m, n, mat);

    // liberar memoria
    free(mat); // sempre liberar a memoria alocada
    printf("Memoria Liberada. ACABOU.;");

    return 0; // so pra ter certeza.

 }

