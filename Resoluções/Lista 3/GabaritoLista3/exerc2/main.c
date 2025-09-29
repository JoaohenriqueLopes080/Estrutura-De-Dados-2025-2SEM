#include <stdio.h>
#include <stdlib.h>
#include "exercicio.h"

int main (void)
{
	int n;
	Lista* l; /* declara uma lista não iniciada */
	l = lst_cria(); /* inicia lista vazia */
	l = lst_insere(l, 23); /* insere na lista o elemento 23 */
	l = lst_insere(l, 45); /* insere na lista o elemento 45 */
	l = lst_insere(l, 56); /* insere na lista o elemento 56 */
	l = lst_insere(l, 78); /* insere na lista o elemento 78 */
	printf ("\nDigite n: ");
	scanf ("%d", &n);
	int m=maiores (l,n);
	printf ("\nEsta lista possui %d nos maiores que %d\n", m,n);
	lst_imprime(l); /* imprimirá: 78 56 45 23 */
	lst_libera(l);
	system("pause");
	return 0;
}