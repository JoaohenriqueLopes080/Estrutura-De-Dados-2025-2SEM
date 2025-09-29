/*
3. Implemente quatro funções que alocam, desalocam, preenchem e mostram uma matriz de 
tamanho mxn, respectivamente (considere que a matriz seja armazenada como um vetor de 
ponteiros). Estas funções devem obedecer aos protótipos: 
 
int** aloca_matriz (int m, int n) 
void desaloca_matriz (int m, int** mat) 
void preenche_matriz (int m, int n, int **mat) 
void mostra_matriz (int m, int n, int **mat) 

*/
#include <stdio.h>
#include <stdlib.h>

int** aloca_matriz(int m, int n);
void desaloca_matriz(int m, int** mat);
void preenche_matriz(int m, int n, int** mat);
void mostra_matriz(int m, int n, int** mat);

int main() {
    int n;
    int m;
    int** mat;

    printf("Digite o numero de linhas: ");
    scanf("%d", &m);
    printf("Digite o numero de colunas: ");
    scanf("%d", &n);

    mat = aloca_matriz(m, n);
    preenche_matriz(m, n, mat);
    mostra_matriz(m, n, mat);
    desaloca_matriz(m, mat);

    return 0;
}

int** aloca_matriz(int m, int n) {
    int** mat;
    int i;

    mat = (int**) malloc(m * sizeof(int*));
    if (!mat) {
        printf("Erro de Alocação");
        return NULL;
    }
    for (i = 0; i < m; i++) {
        mat[i] = (int*) malloc(n * sizeof(int));
        if (!mat[i]) {
            printf("Erro de Alocação");
            return NULL;
        }
    }
    return mat;
}

void preenche_matriz(int m, int n, int** mat) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Digite o elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
}

void mostra_matriz(int m, int n, int** mat) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void desaloca_matriz(int m, int** mat) {
    int i;
    for (i = 0; i < m; i++) {
        free(mat[i]);
    }
    free(mat);
}