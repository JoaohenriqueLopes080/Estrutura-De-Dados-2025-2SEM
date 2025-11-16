/*
3. Implemente uma função que tenha como valor de retorno o ponteiro para o último nó 
de uma lista encadeada. Esta função deve obedecer ao protótipo:  Lista* ultimo (Lista* l)
*/


/**
 * @file main.c
 * @brief Programa principal para testar a função comprimento.
 */

#include "exercicio.h"
#include <stdio.h>

int main(void) {
    Lista* l; /* declara uma lista não iniciada */
	l = lst_cria(); /* inicia lista vazia */

    l = lst_insere(l, 45);
    l = lst_insere(l, 65);
    l = lst_insere(l, 85);
    l = lst_insere(l, 105);

    int ultimo = lst_ultimo(l);
    printf("O ultimo nó da lista é: %d", ultimo);
    
    lst_imprime(l);

    lst_libera(l);
    
    /* Lista* lis = lst_busca(Lista*l, v)  - > v = valor que quer buscar - altere o valor
        if(lis == NULL) {
        printf("O nó não foi encontrado")
        } else {
         printf("O nó de valor %d foi encontrado", lis->info);
        }
    */
    int retorno = lst_vazia(l);
    if(retorno == 1){
        printf("Lista Esta Vazia");
    } else{
        printf("Lista Não esta Vazia");
    }

    system("PAUSE");
    return 0;
}
