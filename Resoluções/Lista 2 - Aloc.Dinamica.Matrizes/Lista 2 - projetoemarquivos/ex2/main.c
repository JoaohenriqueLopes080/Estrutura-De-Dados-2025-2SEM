/*
2. Implemente uma função que receba como parâmetro uma matriz de inteiros de tamanho m x 
n  (alocada  dinamicamente  como  um  vetor  de  ponteiros)  e  imprima  na  tela  os  elementos 
armazenados nesta matriz. Esta função deve obedecer ao protótipo:  
 
void imprime_matriz (int m, int n, int** mat)
*/

#include "exercicio.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    int m; 
    int n;
    int** mat;

    // Entrada de dados
    printf("Digite o numero de Linhas:");
    scanf("%d", &m);

    printf("Digite o numero de Colunas:");
    scanf("%d", &n);

    // Alocação de memoria em ponteiros - 1 etapa
    mat = (int**) malloc(m * sizeof(int*));
    if(mat == NULL) {
        printf("Erro de Alocação de memoria para os ponteiros!");
        return 1;
    }

    // 2 Etapa (EM LOOP)
    // ALOCA O BLOCO DE DADOS PARA CADA LINHA SEPARADAMENTE
    for(int i = 0; i < m; i++){
        mat[i] = (int*) malloc(n * sizeof(int));
        if (mat[i] == NULL) {
            printf("ERROR EM LINHA %D!\n", i);

            // if error -> libera tudo que foi alocado
            for(int k = 0; k < i; k++){
             free(mat[k]);
         }
         free(mat);
         return 1;
      }
    }

    // Preencher matriz
    // loop externo
    for(int i = 0; i < m; i++) {
        // LOOP INTERNO
        for(int j = 0; j < n; j++) {
            printf("Digite o elemento [%d][%d]", i + 1, j + 1);
            // acesso simples
            scanf("%d", &mat[i][j]);
        }
    }
    
    // chamar função
    printf("Matriz ta escrita");
    imprime_matriz(m, n, mat);

    // liberar memoria 1 etapa
     // em loop
     for(int i = 0; i < m; i++){
        free(mat[i]);
     }

     // segunda etapa
     free(mat);

     printf("MEMORY IS FREE");

     return 0;
}