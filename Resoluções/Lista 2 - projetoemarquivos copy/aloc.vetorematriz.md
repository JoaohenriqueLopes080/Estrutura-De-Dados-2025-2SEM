# Alocação Dinâmica em C — Vetores e Matrizes
Por Eduardo Piveta

Resumo curto: exemplos de alocação dinâmica (vetores, matrizes de ponteiros e matrizes de structs), com funções utilitárias e exemplos de uso.

## Sumário
- [Como compilar](#como-compilar)  
- [Código completo](#código-completo)  
- [Observações rápidas](#observações-rápidas)

## Como compilar
Usando gcc:
gcc -Wall -Wextra -std=c11 -o aloc aloc.c

## Código completo
```c
/*
 * =================================================================
 * | Alocação Dinâmica em C: Vetores e Matrizes (por Eduardo Piveta)
 * =================================================================
 */

#include <stdio.h>
#include <stdlib.h> // Essencial para malloc() e free()

// Definição de Estrutura para exemplos de matrizes de structs
typedef struct {
    int x; // Coordenada X
    int y; // Coordenada Y
} Ponto;

// =================================================================
// 1. Alocação Dinâmica de Vetores (Arrays Unidimensionais)
// =================================================================

/*
 * Função para alocar um vetor de inteiros dinamicamente.
 * Retorna: int* (ponteiro para o primeiro inteiro) ou NULL em caso de erro.
 */
int* criar_vetor(int tam) {
    if (tam <= 0) return NULL;
    int* v = malloc(tam * sizeof *v);
    return v;
}

/*
 * Função para mostrar os elementos de um vetor
 */
void mostrar_vetor(int* v, int n) {
    if (!v) return;
    for (int i = 0; i < n; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }
}

// Exemplo de uso de vetor dinâmico
void exemplo_vetor() {
    int n = 10;
    int* v = criar_vetor(n);

    if (v != NULL) {
        for (int i = 0; i < n; i++) {
            v[i] = i * 100;
        }
        mostrar_vetor(v, n);
        free(v); // Libera a memória alocada
    } else {
        fprintf(stderr, "Falha ao alocar vetor de tamanho %d\n", n);
    }
}

// =================================================================
// 2. Alocação Dinâmica de Matrizes (Vetores de Vetores)
// =================================================================

/*
 * Função para alocar uma matriz de inteiros M x N (Linhas x Colunas)
 * Retorna: int** (ponteiro de ponteiros) ou NULL em caso de erro.
 */
int** criar_matriz(int m, int n) {
    if (m <= 0 || n <= 0) return NULL;
    int** matriz = malloc(m * sizeof *matriz);
    if (!matriz) return NULL;

    for (int i = 0; i < m; i++) {
        matriz[i] = malloc(n * sizeof **matriz);
        if (!matriz[i]) {
            // Em caso de falha, liberar o já alocado e retornar NULL
            for (int j = 0; j < i; j++) free(matriz[j]);
            free(matriz);
            return NULL;
        }
    }
    return matriz;
}

/*
 * Função para liberar a memória da matriz
 */
void liberar_matriz(int** matriz, int m) {
    if (!matriz) return;
    for (int i = 0; i < m; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

/*
 * Função para mostrar os elementos da matriz
 */
void mostrar_matriz(int** matriz, int m, int n) {
    if (!matriz) return;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Exemplo de uso de matriz dinâmica
void exemplo_matriz() {
    int m = 3, n = 4;
    int** matriz_dinamica = criar_matriz(m, n);

    if (matriz_dinamica != NULL) {
        int count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                matriz_dinamica[i][j] = count++;
            }
        }
        mostrar_matriz(matriz_dinamica, m, n);
        liberar_matriz(matriz_dinamica, m);
    } else {
        fprintf(stderr, "Falha ao alocar matriz %dx%d\n", m, n);
    }
}

// =================================================================
// 3. Matrizes de Estruturas (Comparação Estático vs. Dinâmico)
// =================================================================

void exemplo_matriz_structs() {
    // Matriz Estática de Pontos Estáticos
    Ponto p0[10][10];
    p0[0][0].x = 10;
    printf("\np0[0][0].x (Est/Est): %d\n", p0[0][0].x);

    // Matriz Estática de Ponteiros para Pontos (cada célula aponta para um Ponto alocado dinamicamente)
    Ponto* p1[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            p1[i][j] = malloc(sizeof *p1[i][j]);
            if (p1[i][j]) {
                p1[i][j]->x = 0;
                p1[i][j]->y = 0;
            }
        }
    }

    if (p1[0][0]) {
        p1[0][0]->x = 10;
        printf("p1[0][0]->x (Est/Din): %d\n", p1[0][0]->x);
    }

    // Liberar memória alocada para p1
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            free(p1[i][j]);
        }
    }
}

int main() {
    printf("--- Exemplo de Vetor Dinamico ---\n");
    exemplo_vetor();

    printf("\n--- Exemplo de Matriz Dinamica ---\n");
    exemplo_matriz();

    printf("\n--- Comparacao Matriz de Structs ---\n");
    exemplo_matriz_structs();

    return 0;
}
```

## Observações rápidas
- Sempre verifique o retorno de malloc antes de usar os ponteiros.  
- Sempre chame free() para cada malloc() correspondente (evitar vazamento de memória).  
- Use sizeof *ptr (sem repetir o tipo) para evitar erros ao alterar o tipo.  

