/*
 * =====================================================================================
 *
 *       Filename:  matrix_mult.c
 *
 *    Description:  Multiply two matrixes [2x2]
 *
 *        Version:  1.0
 *        Created:  04/13/2017 09:08:25
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  OLGA OLEKSYUK (olgawow), mail@olga-v.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include<stdio.h>
#include<stdlib.h>

int main() {
  int n, m, p, q;
  int el_count_X, el_count_Y, el_count_M;

  while (m != p) {
    printf("Matrices with entered orders can't be multiplied with each other.\n");
    printf("Enter number of rows for the matrix X ");
    scanf("%d", &n);
    printf("Enter number of columns for the matrix X ");
    scanf("%d", &m);
    printf("Enter number of rows for the matrix Y ");
    scanf("%d", &p);
    printf("Enter number of columns for the matrix Y ");
    scanf("%d", &q);
  }
  int *X = (int *)malloc(sizeof(int) * n * m);
  int *Y = (int *)malloc(sizeof(int) * p * q);
  int *M = (int *)malloc(sizeof(int) * m * p);

  el_count_X = m * n;
  el_count_Y = p * q;
  el_count_M = m * p;

  printf("Enter %d elements for matrix X\n", el_count_X);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &X[i * m + j]);
    }
  }

  printf("Enter %d elements for matrix Y\n", el_count_Y);
  for (i = 0; i < p; i++) {
    for (int j = 0; j < q; j++) {
      scanf("%d", &Y[i * q + j]);
    }
  }

  system("clear");
  printf("Dimention of X is [%d,%d]\n", n, m);
  for (i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d\t", X[i * m + j]);
    }
    printf("\n");
  }

  printf("Dimention of Y is [%d,%d]\n", p, q);
  for (i = 0; i < p; i++) {
    for (int j = 0; j < q; j++) {
      printf("%d\t", Y[i * q + j]);
    }
    printf("\n");
  }

  int sum = 0;
  for (i = 0; i < n; i++) {
    for (int j = 0; j < q; j++) {
      for (int k = 0; k < m; k++) {
        sum = sum + X[i * n + k] * Y[k * q + j];
      }

      M[i * n + j] = sum;
      sum = 0;
    }
  }

  printf("Multiplication matrix M is [%d, %d]\n", m, p); 
  for (i = 0; i < n; i++) {
    for (int j = 0; j < q; j++) {
      printf("%d\t", M[i * q + j]);
    }
    printf("\n");
  }
  getchar();
}

