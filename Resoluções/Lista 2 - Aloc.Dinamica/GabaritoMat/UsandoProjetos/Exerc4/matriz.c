#include <stdio.h>
#include <stdlib.h>

int** aloca_matriz (int m, int n)
{
	int** mat;
	int i;
	mat=(int**)malloc(m*sizeof(int*));
	if (mat==NULL)
	{
		printf ("\nErro de alocacao de memoria.");
		system("pause");
		exit(1);
	}
	for (i=0; i<m;i++)
	{
		mat[i]=(int*)malloc(n*sizeof(int));
		if (mat[i]==NULL)
		{
			printf ("\nErro de alocacao de memoria.");
			system("pause");
			exit(1);
		}
	}
	return mat;
}

void desaloca_matriz (int m, int** mat)
{
	int i, j;
	for (i=0;i<m;i++)
		free(mat[i]);
	free (mat);
}

void preenche_matriz (int m, int n, int **mat)
{
	int i, j;
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
		{
			printf ("\nInforme o valor mat[%d][%d]: ", i, j);
			scanf ("%d", &mat[i][j]);
		}
}

void mostra_matriz (int m, int n, int **mat)
{
	int i, j;
	for (i=0;i<m;i++)
	{
		printf ("\n");
		for (j=0;j<n;j++)
			printf ("\t%d", mat[i][j]);		
	}
}

int** soma_matriz (int m, int n, int** mat1, int** mat2)
{
	int i,j;
	int** temp;
	temp=aloca_matriz(m,n);
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
			temp[i][j]=mat1[i][j]+mat2[i][j];
	return temp;
}

