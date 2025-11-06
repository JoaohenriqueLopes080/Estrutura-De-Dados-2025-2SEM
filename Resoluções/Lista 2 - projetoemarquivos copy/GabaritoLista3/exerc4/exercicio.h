struct lista{
	int info;
	struct lista* prox;
};
typedef struct lista Lista;

Lista* lst_cria (void);
Lista* lst_insere (Lista* l, int i);
void lst_imprime (Lista* l);
void lst_libera (Lista* l);
Lista* ultimo (Lista* l);
Lista* concatena1(Lista* l1, Lista* l2);
