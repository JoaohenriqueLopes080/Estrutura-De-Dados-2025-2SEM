
/*
Parte 1: Funções simples:
1. Implemente uma função que indique se um ponto (x,y) está localizado dentro ou fora de um
retângulo. O retângulo é definido por seus vértices inferior esquerdo (x0,y0) e superior direito
(x1,y1). A função deve ter como valor de retorno 1, se o ponto estiver dentro do retângulo, e 0 caso
contrário, obedecendo ao protótipo:

int dentro_ret (int x0, int y0, int x1, int y1, int x, int y)
*/

#include <stdio.h>

int dentro_ret (int x0, int y0, int x1, int y1, int x, int y) {
    
    if(x >= x0 && x <= x1){
        if(y >= y0 && y <= y1){
            return 1;
        } else {
            return 0;
        }
    }
}

int main() {

    int x0, y0, x1, y1, x, y;
    int verif;
    // inferior esquerdo (x0,y0)
    // superior direito (x1,y1)
    
    printf("Digite o valor para cada Vértice desse Retângulo");
    printf("Inferior Esquerdo X0, Y0");
    scanf("%d %d", &x0, &y0);

    printf("Superior Direito X1, Y1");
    scanf("%d %d", &y1, &y1);

    while(x0 > x1 || y0 > y1){
        if (x0 > x1)
        {
            printf("Inferior Esquerdo X0 maior que Superior Direito X1");
            printf("\nDigite um valor que indique um Retângulo : ");
            scanf("%d", &x0);
        }
        if (y0 < y1)
        {
            printF("\nInferior esquerdo Y0 maior que Superior Direito Y1");
            printf("\nDigite um valor que indique um Retângulo : ");
            scanf("%d", &y0);
        }
        
        
    }
    printf("Agora as coordenadas do ponto ");
    printf("X e Y");
    scanf("%d %d");

    verif =  dentro_ret (x0,y0, xl, yl,x,y);

    if(verif = 1) {
        printf("Esta dentro!");
    } else(
        printf("Esta fora!");
    )
}