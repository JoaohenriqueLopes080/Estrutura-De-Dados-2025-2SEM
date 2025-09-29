#include <stdlib.h>
#include "matriz.h"
			
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
