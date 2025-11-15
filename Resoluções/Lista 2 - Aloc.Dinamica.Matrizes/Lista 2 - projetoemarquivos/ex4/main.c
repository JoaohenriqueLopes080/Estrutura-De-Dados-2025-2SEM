/*
4. Implemente uma função que receba como parâmetro duas matrizes de inteiros de tamanho m
x n (alocadas dinamicamente como vetor de ponteiros), soma as duas matrizes (nas
respectivas posições), armazene esta soma numa terceira matriz e retorne a matriz resultante.
Esta função deve obedecer ao protótipo:

int** soma_matriz (int m, int n, int** mat1, int** mat2)
*/

#include "exercicio.h"
#include <stdio.h>


int main() {
    int** mat1;
    int** mat2;
    int** mat3;
    int m, n;

    // Leitura de Dados
    printf("Digite o numero de Linhas:");
    scanf("%d", &m);

    printf("Digite o numero de colunas:");
    scanf("%d", &n);

    mat1 = aloca_matriz(m, n);
    mat2 = aloca_matriz(m, n);
    mat3 = aloca_matriz(m, n);

    preenche_matriz(m, n, mat1);
    preenche_matriz(m, n, mat2);

    imprime_matriz(m, n, mat1);
    imprime_matriz(m, n, mat2);

    mat3 = soma_matriz(m, n, mat1, mat2);
    imprime_matriz(m, n, mat3);

    desaloca_matriz(m, mat1);
    desaloca_matriz(m, mat2);
}
