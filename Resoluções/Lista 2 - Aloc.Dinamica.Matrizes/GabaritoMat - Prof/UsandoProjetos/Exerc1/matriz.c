#include <stdio.h>
#include <stdlib.h>

void imprime_matriz(int m, int n, int* mat)
{
	int i, j;
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
			printf ("\nO valor de mat[%d][%d] seria %d e foi armazenado no vetor na posicao [%d]", i, j, mat[i*n+j], i*n+j);
}
	
int* aloca_matriz (int m, int n)
{
	int* mat=(int*)malloc(m*n*sizeof(int));
	if (mat==NULL)
	{
		printf ("\nErro de alocacao de memoria.");
		system("pause");
		exit(1);
	}
	return mat;	
}

void preenche_matriz (int m, int n, int* mat)
{
	int i, j;
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
		{
			printf ("\nInforme o valor mat[%d][%d]: ", i, j);
			scanf ("%d", &mat[i*n+j]);
		}
}	

void libera_matriz (int* mat)
{
	free (mat);
}
