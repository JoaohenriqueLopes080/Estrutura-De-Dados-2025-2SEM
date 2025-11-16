/*
4. Implemente  uma  função  que  receba  duas  listas  encadeadas  de  valores  inteiros  e 
retorne  a lista resultante  da concatenação  das duas listas recebidas como parâmetros, 
isto  é,  após  a  concatenação,  o  último  elemento  da  primeira  lista  deve  apontar  para  o 
primeiro elemento da segunda lista. Esta função deve obedecer ao protótipo: Lista* concatena (Lista* l1, Lista* l2);
*/

/**
 * @file main.c
 * @brief Programa principal para testar a função comprimento.
 */

#include "exercicio.h"
#include <stdio.h>

int main(void) {
    Lista* l1; /* declara uma lista não iniciada */
    Lista* l2; /* declara uma lista não iniciada */
    Lista* l3;
    l1 = lst_cria(); /* inicia lista vazia */   
	l2 = lst_cria(); /* inicia lista vazia */   
    l3 = lst_cria(); /* inicia lista vazia*/

    int n1, n2;
    

    printf("Digite o valor de quantas vezes quer inserir um valor em Lista 1:");
    scanf("%d", &n1);
    
    l1 = lst_insere_loop(l1, n1);

     lst_imprime(l1);

    printf("Digite um valor de quantas vezes quer inserir um valor em lista 2:");
    scanf("%d", &n2);
 
    l2 = lst_insere_loop(l2, n2);
    
     lst_imprime(l2);

    l3 = lst_concatena(l1,l2);
    lst_imprime(l3);

    lst_libera(l3);
    
    system("PAUSE");
    return 0;
}