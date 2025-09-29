#include "exercicio.h"
#include <stdio.h>
#include <stdlib.h>

/* função de criação: retorna uma lista vazia */
Lista* lst_cria (void)
{
	return NULL;
}

/* inserção no início: retorna a lista atualizada */
Lista* lst_insere (Lista* l, int i)
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = l;
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

Lista* ultimo (Lista* l)
{
	Lista* p=l;
	if (p!=NULL)
		while (p->prox!=NULL)
			p=p->prox;
	return p;
}