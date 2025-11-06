#include <stdio.h>
#include <stdlib.h>

/* 2. Implemente uma função que receba como parâmetro um
 vetor de números reais (vet) de tamanho n e retorne 
 quantos números negativos estão armazenados neste vetor.
  Esta função deve obedecer ao protótipo: 
  int negativos (int n, float *vet)
   Use alocação dinâmica.
    O valor de n é informado pelo usuário.
     */

     
int negativos(int n, float *vet) {
    int contador = 0;
    for (int i = 0; i < n; i++) {
        if (vet[i] < 0) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int n;
    float *vet;
    int qtd_neg;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    vet = (float*) malloc(n * sizeof(float));
    if (vet == NULL) {
        printf("Erro de alocacao de memoria!");
        return 1;
    }

    printf("\nDigite os %d numeros do vetor:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &vet[i]);
    }

    qtd_neg = negativos(n, vet);
    printf("\nO vetor possui %d numero(s) negativo(s).\n", qtd_neg);

    free(vet);
    return 0;
}