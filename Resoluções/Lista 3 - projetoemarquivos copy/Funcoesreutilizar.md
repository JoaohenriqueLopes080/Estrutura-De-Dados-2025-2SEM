
/**
 *@file funcoesreutilizar.md
 *@brief Arquivo de implementação das funções escritas em cabeçalhos 
 */



int comprimento(Lista* l){
      Lista* p = l;
    /*cria uma lista auxiliar p que aponta para o  
        de endereço de lista l, para percorrer a lista,
        começando pela cabeça(head) ate o null */
    int contador = 0; // conta quantidade de nós
  
    while(p != NULL) {

        p = p->proximo; // Avança para o proximo Nó
        contador++; // conta o Nó atual
        
    } // while

    return contador;
} // comprimento



// Função de Criação: Retorna uma lista vazia
Lista* lst_cria(void)
{
    return NULL; // lista começa vazia = null
} // lst_cria

/* Função retorna se ta vazia ou não */
 int lst_vazia(Lista* l) {
    return (l == NULL);
    // 1 = VAZIA
    // 0 = NÃO VAZIA
 }

/* Inserção no início: Retorna a lista atualizada */
Lista* lst_insere(Lista* l, int i) 
{
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i; // i = valor que vai ser inserido, novo.info = i
    novo->proximo = l;// O novo Nó aponta para o antigo começo da lista, posição anterior. 
    return novo; // o novo nó é a nova cabeça da lista - inicio da lista.
} // lst_insere

/* função imprime: imprime valores dos elementos */
void lst_imprime (Lista* l)
{
	Lista* p; 
	for (p = l; p != NULL; p = p->proximo) 
    // p = l, aponto para o inicio da lista L; enquanto p for diferente de nulo,imprime o valor.
	// p++ ; p = p->proximo
    // quado nulo para de imprimir e retorna nulo, vazio.
    printf("info = %d\n", p->info); // retorna o valor da lista armazenado = info.
}

/**  Função buscar:
 * @attention - Recebe Informação referente ao elemento a pesquisar
 * @attention -  Retorna o Ponteiro de Nó da lista que representa o elemento, ou NULL, caso o elemento não seja encontrado na lista.
*/

Lista* lst_busca(Lista* l, int v)
{ Lista* p; // Nó auxiliar
    for(p = l; p != NULL; p = p->proximo){
        if(p->info == v);
        return p;
    }
    return NULL; /* não achou o elemento. */
}



/*Função Libera */
void lst_libera (Lista* l)
{
	Lista* p = l;
	while (p != NULL) {
		l = p->proximo; /* guarda referência p/ próx. elemento */
		free(p); /* libera a memória apontada por p */
	p = l; /* faz p apontar para o próximo */
	}
}



