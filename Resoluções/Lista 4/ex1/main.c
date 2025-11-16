/*
2. Considere listas encadeadas de valores inteiros e implemente uma função para 
retornar o número de nós da lista que possuem o campo info com valores maiores do 
que n. Esta função deve obedecer ao protótipo:  int maiores (Lista* l, int n); 
 */

/**
 * @file main.c
 * @brief Programa principal para testar a função comprimento.
 */

#include "exercicio.h"
#include <stdio.h>

int main(void) {
    int n;
    Lista* l; /* declara uma lista não iniciada */
	l = lst_cria(); /* inicia lista vazia */

    l = lst_insere(l, 45);
    l = lst_insere(l, 65);
    l = lst_insere(l, 85);
    l = lst_insere(l, 105);

    printf("Digite o valor da variavel:");
    scanf("%d", &n);

    int contmaior = lst_maiores(l, n);

    printf("Quantidade de numeros maiores que %d", n);
    printf("Quant:%d", contmaior);

    lst_imprime(l);
    lst_libera(l);
    
    /* Lista* lis = lst_busca(Lista*l, v)  - > v = valor que quer buscar - altere o valor
        if(lis == NULL) {
        printf("O nó não foi encontrado")
        } else {
         printf("O nó de valor %d foi encontrado", lis->info);
        }
    
    int retorno = lst_vazia(l);
    if(retorno == 1){
        printf("Lista Esta Vazia");
    } else{
        printf("Lista Não esta Vazia");
    }
    */
    system("PAUSE");
    return 0;
}
