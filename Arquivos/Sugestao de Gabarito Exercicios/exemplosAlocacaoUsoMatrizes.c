#include <stdio.h>
#include <stdlib.h>

struct ponto{
  int x;
  int y;
};
typedef struct ponto Ponto;

Ponto** alocarMatrizDinamicaDePontosEstaticos(int nrLinhas, int nrColunas){
  Ponto** matrix = (Ponto**) malloc(nrLinhas * sizeof(Ponto*));
  for (int i = 0; i < nrLinhas; i++)
     matrix[i] = (Ponto*) malloc(nrColunas * sizeof(Ponto));
  return matrix;
}

Ponto*** alocarMatrizDinamicaDePontosDinamicos(int nrLinhas, int nrColunas){
  Ponto*** matrix = (Ponto***) malloc(nrLinhas * sizeof(Ponto**));
  for (int i = 0; i < nrLinhas; i++)
     matrix[i] = (Ponto**) malloc(nrColunas * sizeof(Ponto*));
  for (int i = 0; i < nrLinhas; i++)
    for (int j = 0; j < nrLinhas; j++)
       matrix[i][j] = (Ponto*) malloc(sizeof(Ponto));
  return matrix;
}

int main(int argc, char *argv[])
{
   // Matriz estatica de pontos estaticos
    Ponto p0[10][10];
    p0[0][0].x = 10;
    printf("\np0.x: %d\n", p0[0][0].x);

   // Matriz estatica de pontos dinamicos
   Ponto* p1[10][10];
   for (int i = 0; i < 10; i++)
    for (int j = 0; j < 10; j++)
       p1[i][j] = (Ponto*) malloc(sizeof(Ponto));    
    p1[0][0]->x = 10;
    printf("\np1->x: %d\n", p1[0][0]->x);

   // Matriz dinamica de pontos estaticos
    Ponto** p2 = alocarMatrizDinamicaDePontosEstaticos(10, 10);   
    p2[0][0].x = 10;
    printf("\np2.x: %d\n", p2[0][0].x);
    
   // Matriz dinamica de pontos dinamicos
    Ponto*** p3 = alocarMatrizDinamicaDePontosDinamicos(10, 10);   
    p3[0][0]->x = 10;
    printf("\np3->x: %d\n", p3[0][0]->x);

    system("PAUSE");
    return EXIT_SUCCESS;
}
