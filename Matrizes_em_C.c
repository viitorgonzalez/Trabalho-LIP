#include <stdio.h>
#include <stdlib.h>

const int n = 10;           // constante para tamanho da matriz
void trocaA(int mA[n][n]) { // letra a
  int x = 7, y = 0;         // var
  for (int i = 1; i == 1; i++) {
    for (int j = 0; j < n; j++) {
      y = mA[i][j];
      mA[i][j] = mA[x][j];
      mA[x][j] = y;
    }
  }
  printf("\nTroca da linha 2 com a 8:\n"); // mostra a matriz na tela
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", mA[i][j]);
    }
    printf("\n");
  }
}
void trocaB(int mB[n][n]) { // letra b
  int x = 9, y = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 3; j == 3; j++) {
      y = mB[i][j];
      mB[i][j] = mB[i][x];
      mB[i][x] = y;
    }
  }
  printf("\nTroca da coluna 4 com a 10:\n"); // mostra a matriz na tela
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", mB[i][j]);
    }
    printf("\n");
  }
}
void trocaDiagonais(int mDiag[n][n]) { // letra c
  int aux = n - 1, x = 0, y = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) {
        x = aux--;
        y = mDiag[i][x];
        mDiag[i][x] = mDiag[i][j];
        mDiag[i][j] = y;
      }
    }
  }
  printf("\nTroca da diagonal principal com a secundária:\n"); // mostra a
                                                               // matriz na tela
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", mDiag[i][j]);
    }
    printf("\n");
  }
}
void trocaLinhaColuna(int mLc[n][n]) { // letra d
  int x = 0, y = 0, aux = 0;
  for (int i = 0; i < n; i++) {
    y = mLc[4][i];
    mLc[4][i] = mLc[i][9];
    mLc[i][9] = y;
  }
  printf("\nTroca da linha 5 com a coluna 10:\n"); // mostra a matriz na tela
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", mLc[i][j]);
    }
    printf("\n");
  }
}

void preenchereMostrar(int m[n][n]) { // função chamada no main

  printf("Matriz:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      m[i][j] = rand() % 10;
      m[i][j] = m[i][j];
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }
  trocaA(m);
  trocaB(m);
  trocaDiagonais(m);
  trocaLinhaColuna(m);
}
int main(void) {
  int m[n][n];
  preenchereMostrar(m); // chamada da função

  return 0;
}
