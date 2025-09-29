#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main()
{
	int **mat1;
	int m, n, i, j;
	printf ("\nInforme m e n: (linhas e colunas): ");
	scanf ("%d %d", &m, &n);
	mat1=aloca_matriz(m,n);
	preenche_matriz(m, n, mat1);
	mostra_matriz(m, n, mat1);
	desaloca_matriz(m, mat1);
	system("pause");
}
