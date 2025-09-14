/*
4. Fazer um programa que leia dez números e escreva-os na ordem contrária à ordem de leitura. Exemplo:
lê: 7 40 3 9 21 0 63 31 7 22
escreve: 22 7 31 63 0 21 9 3 40 7
Use alocação dinâmica. O programa deve ser estruturado nas seguintes funções:

a. Main: aloca o vetor e faz a leitura do vetor
b. Função 1: escreve o vetor na ordem contrária
*/


#include <stdio.h>

void inverte( int n, int *vet);

int main() {
    int n = 10;
    int *vet;
    

    vet = (int*) malloc(n * sizeof(int)) 

    if (vet == NULL) {
        printf("Erro de alocacao de memoria!");
        return 1;
    }

    printf("\nDigite os %d numeros do vetor:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vet[i]);
    }
    printf("\nVetor original:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }


    inverso(n, vet);

    
    free(vet);
    return 0;
}

void inverso(int n, int *vet) {
    int aux;
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", vet[i]);
    }
}