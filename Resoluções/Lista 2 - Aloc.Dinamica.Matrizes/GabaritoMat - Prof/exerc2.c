#include <stdio.h>
#include <stdlib.h>

void imprime_matriz (int m, int n, int** mat)
{
	int i, j;
	for (i=0;i<m;i++)
	{
		printf ("\n");
		for (j=0;j<n;j++)
			printf ("\t%d", mat[i][j]);
	}
}

int** aloca_matriz (int m, int n)
{
	int i;
	int** mat=(int**)malloc(m*sizeof(int*));
	if (mat==NULL)
	{
		printf ("\nErro de alocacao de memoria.");
		system("pause");
		exit(1);
	}
	for (i=0; i<m;i++) //para cada linha
	{
		mat[i]=(int*)malloc(n*sizeof(int)); //aloca colunas
		if (mat[i]==NULL)
		{
			printf ("\nErro de alocacao de memoria.");
			system("pause");
			exit(1);
		}
	}
	return mat;
}

void preenche_matriz (int m, int n, int** mat)
{
	int i, j;
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
		{
			printf ("\nInforme o valor mat[%d][%d]: ", i, j);
			scanf ("%d", &mat[i][j]);
		}	
}

void libera_matriz (int m, int** mat)
{
	int i;
	for (i=0;i<m;i++)
		free (mat[i]);
	free(mat);		
}
			
int main()
{
	int** mat;
	int m=2, n=3;
	mat = aloca_matriz (m, n);
	preenche_matriz (m, n, mat);
	imprime_matriz(m, n, mat);
	libera_matriz (m, mat);
	system("pause");
}
