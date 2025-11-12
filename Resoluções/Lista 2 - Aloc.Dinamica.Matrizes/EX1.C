/*
1. Implemente uma função que receba como parâmetro uma matriz de inteiros de tamanho m x 
n  (alocada  dinamicamente como  um  vetor  simples)  e imprima  na  tela  os  elementos 
armazenados nesta matriz. Esta função deve obedecer ao protótipo: 
void imprime_matriz (int m, int n, int* mat) 
*/

#include <stdio.h>
#include <stdlib.h>

void imprime_matriz(int m, int n, int* mat);

int main() {
    int m;
    int n;
    int* mat;

    printf("Digite o numero de linhas: ");
    scanf("%d", &m);
    printf("Digite o numero de colunas: ");
    scanf("%d", &n);

    mat = (int*) malloc(m * n * sizeof(int));
    if (!mat) {
        printf("Erro de Alocação");
        return 1;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Digite o elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat[i * n + j]);
        }
    }

    printf("Matriz:\n");
    imprime_matriz(m, n, mat);
        free(mat);
    return 0;
}

void imprime_matriz(int n, int m, int* mat) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mat[i * n + j]);
        }
        printf("\n");
    }
}