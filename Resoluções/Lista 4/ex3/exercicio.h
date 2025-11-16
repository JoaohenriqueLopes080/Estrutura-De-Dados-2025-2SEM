/*
2. Considere listas encadeadas de valores inteiros e implemente uma função para 
retornar o número de nós da lista que possuem o campo info com valores maiores do 
que n. Esta função deve obedecer ao protótipo:  int maiores (Lista* l, int n); 
 */

/**
 * @file exercicio.h
 * @brief cabeçalho de lista encadeada ex 1
 */

#ifndef EXERCICIO_H 
#define EXERCICIO_H

#include <stdlib.h> // biblioteca para utilização de NULL.

typedef struct  lista {
    int info; // dado armazenado
    struct lista* proximo; // Ponteiro para o proximo nó
} Lista;

/**
 * @brief Cria uma lista vazia
 */
 Lista* lst_cria(void);
 
 /**
  * @brief Retorna se a lista esta vazia ou não
  * @param l o ponteiro para o primeiro nó da lista 
  */

int lst_vazia(Lista* l);    

/**
 * @brief Função de Busca
 * @param l ponteiro para o endereço do primeiro nó da lista
 * @param v valor do elemento que procura buscar
 */
Lista* lst_busca(Lista* l, int v);

 // Prototipo de Função auxiliar para criar a lista (teste no main)
 Lista* lst_insere(Lista* l, int i); 

 /**
  * @brief Imprime a lista encadeada  */
 void lst_imprime (Lista* l);

 /**
 *@brief libera memoria da lista encadeada 
 */
void lst_libera (Lista* l);

/**
 * @brief Calcula o Numero de Nós(Comprimento) de uma lista encadeada
 * 
 * @param l o ponteiro para o primeiro nó da lista
 * @return int o numero total de nós na lista
 */

 int comprimento(Lista* l);

 /**
  * @brief função para ver numeros maiores que n
  * @param l Ponteiro para o endereço do primeiro no da lista
  * @param n numero escolhido para achar numeros maiores que ele
  */

 int lst_maiores (Lista* l, int n);


 #endif //exercicio.h