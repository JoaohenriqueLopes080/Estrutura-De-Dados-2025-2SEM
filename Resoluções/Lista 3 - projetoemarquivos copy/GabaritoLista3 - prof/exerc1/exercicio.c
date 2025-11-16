#include "exercicio.h"
#include <stdio.h>
#include <stdlib.h>

int comprimento (Lista* l)
{
	Lista* p=l;
	int numNos=0;
	while (p!=NULL)
	{
		p=p->prox; 
		numNos++;
	}//while
	return numNos;
}

/* função de criação: retorna uma lista vazia */
Lista* lst_cria (void)
{
	return NULL; // lista começa vazia - null
}

/* inserção no início: retorna a lista atualizada */
Lista* lst_insere (Lista* l, int i)
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i; // info == valor que voce vai inserir.
	novo->prox = l; // proximo = 
	return novo;
}

/* função imprime: imprime valores dos elementos */
void lst_imprime (Lista* l)
{
	Lista* p;
	for (p = l; p != NULL; p = p->prox)
		printf("info = %d\n", p->info);
}
void lst_libera (Lista* l)
{
	Lista* p = l;
	while (p != NULL) {
		l = p->prox; /* guarda referência p/ próx. elemento */
		free(p); /* libera a memória apontada por p */
	p = l; /* faz p apontar para o próximo */
	}
}

