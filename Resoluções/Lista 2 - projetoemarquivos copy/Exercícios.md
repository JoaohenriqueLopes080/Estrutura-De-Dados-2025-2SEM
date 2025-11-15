# Exercícios — Listas encadeadas
Livro do Celes — capítulo 10

1. Calcule o comprimento (número de nós) de uma lista encadeada.  
Protótipo:
```c
int comprimento(Lista *l);
```

2. Para listas de inteiros, retorne o número de nós cujo campo `info` é maior que `n`.  
Protótipo:
```c
int maiores(Lista *l, int n);
```

3. Retorne o ponteiro para o último nó de uma lista encadeada.  
Protótipo:
```c
Lista* ultimo(Lista *l);
```

4. Concatene duas listas encadeadas de inteiros — após a operação, o último nó de `l1` deve apontar para o primeiro nó de `l2`. Retorne a lista resultante.  
Protótipo:
```c
Lista* concatena(Lista *l1, Lista *l2);
```