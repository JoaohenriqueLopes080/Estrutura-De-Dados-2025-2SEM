#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main()
{
	int **mat1, **mat2, **mat3;
	int m, n, i, j;
	printf ("\nInforme m e n: (linhas e colunas): ");
	scanf ("%d %d", &m, &n);
	printf ("\n\nMATRIZ 1: \n");
	mat1=aloca_matriz(m, n);
	preenche_matriz(m, n, mat1);
	mostra_matriz(m, n, mat1);
	printf ("\n\nMATRIZ 2: \n");
	mat2=aloca_matriz(m, n);
	preenche_matriz(m, n, mat2);
	mostra_matriz(m, n,mat2);
	printf ("\n\nMATRIZ RESULTANTE: \n");
	mat3=soma_matriz(m, n, mat1, mat2);
	mostra_matriz(m, n, mat3);
	desaloca_matriz(m, mat1);
	desaloca_matriz(m, mat2);
	desaloca_matriz(m, mat3);
	system("pause");
}
