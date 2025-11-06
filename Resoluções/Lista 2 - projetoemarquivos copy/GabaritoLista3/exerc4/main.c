#include <stdio.h>
#include <stdlib.h>
#include "exercicio.h"

int main (void)
{
	Lista* l1; /* declara uma lista não iniciada */
	l1 = lst_cria(); /* inicia lista vazia */
	l1 = lst_insere(l1, 4); /* insere na lista o elemento 23 */
	l1 = lst_insere(l1, 3); /* insere na lista o elemento 45 */
	l1 = lst_insere(l1, 2); /* insere na lista o elemento 56 */
	l1 = lst_insere(l1, 1); /* insere na lista o elemento 78 */
	printf ("\nLista 1: \n");
	lst_imprime(l1); /* imprimirá: 78 56 45 23 */

	Lista* l2; /* declara uma lista não iniciada */
	l2 = lst_cria(); /* inicia lista vazia */
	l2 = lst_insere(l2, 8); /* insere na lista o elemento 2 */
	l2 = lst_insere(l2, 7); /* insere na lista o elemento 4 */
	l2 = lst_insere(l2, 6); /* insere na lista o elemento 5 */
	l2 = lst_insere(l2, 5); /* insere na lista o elemento 7 */
	printf ("\nLista 2: \n");
	lst_imprime(l2); 	
	
	Lista* l3=concatena1(l1, l2);
	printf ("\nImprimindo lista 3 apos concatenacao na primeira versao de concatena: \n");
	lst_imprime(l3);
	 
	printf ("\nLista 1 apos a concatenacao: \n");
	lst_imprime(l1);
	printf ("\nLista 2 apos a concatenacao: \n");
	lst_imprime(l2); 
	printf ("\n\nNOTEM que a lista 1 foi alterada.... se nao quiserem isso, criem uma lista auxiliar que armazene a concatenacao das duas... \n");		
	lst_libera(l3);
	system("pause");
	return 0;
}
