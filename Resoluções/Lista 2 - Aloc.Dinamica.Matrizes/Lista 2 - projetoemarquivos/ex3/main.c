/**
 *@file main.c
 * @brief Arquivo Main para implementação dos outros arquivos
 */

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
#include <stdlib.h>

int main(){
    int** mat;
    int m, n;

    printf("Digite o Numero de Linhas");
    scanf("%d", &m);

    printf("Digite o Numero de Colunas");
    scanf("%d", &n);

    mat = aloca_matriz(m, n);
    preenche_matriz(m, n, mat);
    mostra_matriz(m, n, mat);
    desaloca_matriz(m, mat);

}