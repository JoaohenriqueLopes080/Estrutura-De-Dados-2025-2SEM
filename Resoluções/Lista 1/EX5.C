
/*
. Fazer  um  programa  que  leia  n  números  reais,  armazene-os  num  vetor  e  escreva  o  percentual  de 
números que são maiores que a média dos mesmos. O programa deve ser estruturado nas seguintes 
funções:  
a. Main: lê o tamanho do vetor, chama as outras funções e mostra
 o percentual na tela 
 b. Função 1: aloca o vetor 
 c. Função 2: faz a leitura do vetor
  d. Função 3: faz o cálculo da média 
  e. Função 4: verifica o percentual de números que são maiores que a média
   Use alocação dinâmica. 
   Não se esqueça de desalocar o vetor tão logo seja possível.    

*/


#include <stdio.h>
#include <stdlib.h>

float* alocavetor(int n);
void levetor(float *vet, int n);
float calculomedia(float *vet, int n);
float percentual(float *vet, int n, float media);

int main() {
    int n;
    float *vet;
    float media, percentual;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    vet = alocavetor(n);

    levetor(vet, n);

    media = calculomedia(vet, n);

    percentual = percentual(vet, n, media);

    printf("Media : %f", media);
    printf("Percentual : %f", percentual);

    free(vet);
}

float* alocavetor(int n){
    float *vet;
    vet = (float*) malloc(n * sizeof(float));
    return vet;
}   

void levetor(float *vet, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Digite o valor %d Do Vetor", i + 1);
        scanf("%f", &vet[i]);
    }
}

float calculomedia(float *vet, int n) {
    float soma = 0;
    int i = 0;

    for(i = 0; i < n; i++) {
        soma += vet[i];
    }

    soma = soma / n;

    return soma;

}

float percentual(float *vet, int n, float media){
      float percentual = 0;
      float quantd = 0;
      int i = 0;

      for(i = 0; i < n; i++) {
        if(vet[i] > media) {
            quantd++;
        } 
      }
      percentual = (quantd * 100.0) / n 

      return percentual;
}

