/*
4. Implemente uma função que receba como parâmetro duas matrizes de inteiros de tamanho m 
x  n  (alocadas  dinamicamente  como  vetor  de  ponteiros),  soma  as  duas  matrizes  (nas 
respectivas posições), armazene esta soma numa terceira matriz e retorne a matriz resultante. 
Esta função deve obedecer ao protótipo: 
 
int** soma_matriz (int m, int n, int** mat1, int** mat2) 
 
Use as funções anteriormente criadas para alocar, desalocar, preencher e mostrar as matrizes, 
quando necessário.


*/

#include <stdio.h>
#include <stdlib.h>

int** soma_matriz (int m, int n, int** mat1, int** mat2);
int** aloca_matriz(int m, int n);
void preenche_matriz(int m, int n, int** mat);
void mostra_matriz(int m, int n, int** mat);
int** desaloca_matriz(int m, int** mat);

int main() {
    int n, m;
    int** mat1;
    int** mat2;
    int** mat3;

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &m);

    printf("Digite a quantidade de colunas:");
    scanf("%d", &n);

    mat1 = aloca_matriz(m, n);
    mat2 = aloca_matriz(m, n);
    mat3 = aloca_matriz(m, n);

    preenche_matriz(m, n, mat1);
    preenche_matriz(m, n, mat2);

    mostra_matriz(m, n, mat1);
    mostra_matriz(m, n, mat2);


    mat3 = soma_matriz(m, n, mat1, mat2);

    desaloca_matriz(m, mat1);
    desaloca_matriz(m, mat2);
    
    mostra_matriz(m, n, mat3);
    desaloca_matriz(m, mat3);
}  
int** aloca_matriz(int m, int n) {
    int** mat;

    mat = (int**) malloc(m * sizeof(int*));
    if(!mat) {
        printf("Erro de Alocação");
        return NULL;
    }
    for(int i = 0; i < m; i++) {
        mat[i] = (int*) malloc(n * sizeof(int));
          if (!mat[i]) {
            printf("Erro de Alocação\n");
            return NULL;
        }
    }
    return mat;
}

void preenche_matriz(int m, int n, int** mat){
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("Digite o elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);   
        }
    }
}

int** soma_matriz(int m, int n, int** mat1, int** mat2){
    int** mat = aloca_matriz(m, n);

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                mat[i][j] =  (mat1[i][j] + mat2[i][j]);
            }
        }
        return mat;
}
    
void mostra_matriz(int m, int n, int** mat){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }


}
int** desaloca_matriz(int m, int** mat){
    for(int i = 0; i < m ; i++){
        free(mat[i]);
    }
    free(mat);
}