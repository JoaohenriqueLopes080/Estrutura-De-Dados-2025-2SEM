
/*Implemente uma função que receba como parâmetro um vetor de números inteiros (vet) de tamanho
n e inverta a ordem dos elementos armazenados neste vetor. Esta função deve obedecer ao protótipo:

void inverte (int n, int *vet)
Use alocação dinâmica. O valor de n é informado pelo usuário.*/


#include <stdio.h>

void inverte( int n, int *vet);

int main() {
    int n, i;
    int *vet;
    
    printf("Digite o tamanho de vet");
    scanf("%d", &n);

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


    inverte(n, vet);

    printf("\nVetor invertido:\n");
      for (int i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }

    free(vet);
    return 0;
}

void inverte(int n, int *vet) {
    int aux;
    for (int i = 0; i < n / 2; i++) {
        aux = vet[i];
        vet[i] = vet[n - 1 - i];
        vet[n - 1 - i] = aux;
    }

}