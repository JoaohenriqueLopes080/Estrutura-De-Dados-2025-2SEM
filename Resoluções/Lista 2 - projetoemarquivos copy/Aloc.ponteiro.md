/*
# Fundamentos de C: Alocação Dinâmica e Ponteiros

## Requisitos
```c
#include <stdio.h>
#include <stdlib.h> // Para malloc, free
#include <string.h> // Para strcpy
```

## 1. Definição da Estrutura
```c
typedef struct pessoa {
    int idade;      // Membro do tipo inteiro
    char nome[20];  // Membro do tipo array de caracteres
} Pessoa;
```

## 2. Operadores Essenciais para Ponteiros
* `*` (asterisco):
  - Na declaração: Define um tipo como ponteiro (ex: `Pessoa* p`)
  - Na expressão: Operador de desreferência
* `&` (e comercial): Retorna o endereço de uma variável
* `->` (seta): Atalho para acessar membros de structs via ponteiro

## 3. Alocação e Acesso à Memória
```c
void main_alocacao() {
    // Alocando memória
    Pessoa* p = (Pessoa*) malloc(sizeof(Pessoa));

    if (p != NULL) {
        // Usando desreferência (* e .)
        (*p).idade = 20;
        strcpy((*p).nome, "Maria");

        // Usando operador seta (->)
        p->idade = 30;
        strcpy(p->nome, "Joana");

        free(p);
    }
}
```

## 4. Exemplo de Passagem por Referência
```c
void mostrar(Pessoa* x) {
    printf("Dados: Idade: %d, Nome: %s\n", x->idade, x->nome);
}
```


// -----------------------------------------------------------------
[cite_start]// 3. Alocação e Desalocação de Memória [cite: 21]
// -----------------------------------------------------------------
void main_alocacao() {
    [cite_start]// Funções auxiliares: malloc, free [cite: 23, 24] [cite_start]e sizeof [cite: 26]

    [cite_start]// Alocando memória para uma Pessoa [cite: 32, 33]
    Pessoa* p = (Pessoa*) malloc(sizeof(Pessoa));

    // -------------------------------------------------------------
    // 4. Acesso aos Membros
    // -------------------------------------------------------------

    if (p != NULL) { // Verifica se a alocação foi bem-sucedida
        [cite_start]printf("\nMemoria alocada com sucesso\n"); [cite: 47]

        [cite_start]// Acesso (Forma A: Desreferência * e .) [cite: 49, 50, 52]
        (*p).idade = 20;
        strcpy((*p).nome, "Maria");
        printf("Acesso (*): Idade: %d, Nome: %s\n", (*p).idade, (*p).nome);

        [cite_start]// Acesso (Forma B: Operador Seta ->) [cite: 49, 51, 55] - Mais comum!
        p->idade = 30; // Atualizando a idade
        strcpy(p->nome, "Joana"); // Atualizando o nome
        printf("Acesso (->): Idade: %d, Nome: %s\n", p->idade, p->nome);

        [cite_start]// Liberando a memória [cite: 37, 43]
        free(p);
    } else {
        printf("\nErro ao alocar memória!\n");
    }
}


// -----------------------------------------------------------------
[cite_start]// 5. Exemplo de Passagem por Referência [cite: 58, 60]
// -----------------------------------------------------------------

// A função recebe um ponteiro (o endereço)
void mostrar(Pessoa* x) { 
    printf("\nDentro da funcao (Passagem por Referencia): Idade: %d, Nome: %s\n", 
           x->idade, x->nome);
}

int main(int argc, char *argv[]) {
    // ... Código principal ...
    
    Pessoa* p = (Pessoa*) malloc(sizeof(Pessoa));
    
    if (p != NULL) {
        p->idade = 20;
        strcpy(p->nome, "Maria");

        [cite_start]// Passa o endereço (ponteiro) 'p' para a função [cite: 60]
        mostrar(p); 
    
        free(p);
    }

    return 0;
}