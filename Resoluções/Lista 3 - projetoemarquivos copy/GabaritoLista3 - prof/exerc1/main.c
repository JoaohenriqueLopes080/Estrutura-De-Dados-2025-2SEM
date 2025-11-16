#include <stdio.h>
#include <stdlib.h>
#include "exercicio.h"

int main (void)
{
	Lista* l; /* declara uma lista não iniciada */
	l = lst_cria(); /* inicia lista vazia */
	l = lst_insere(l, 23); /* insere na lista o elemento 23 */
	l = lst_insere(l, 45); /* insere na lista o elemento 45 */
	l = lst_insere(l, 56); /* insere na lista o elemento 56 */
	l = lst_insere(l, 78); /* insere na lista o elemento 78 */
	int numero=comprimento (l);
	printf ("\nEsta lista possui %d nos\n", numero);
	lst_imprime(l); /* imprimirá: 78 56 45 23 */
	lst_libera(l);
	system("pause");
	return 0;
}